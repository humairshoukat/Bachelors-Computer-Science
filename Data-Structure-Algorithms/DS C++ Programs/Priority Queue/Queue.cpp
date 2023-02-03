#include<iostream>
#include<string>
using namespace std;
#include"Queue.h"
#include"Node.h"

void Queue::enqueue(string name, string degree, float gpa, int priority)
{
	Node *newnode = new Node();
	newnode->setName(name);
	newnode->setDegree(degree);
	newnode->setGPA(gpa);
	newnode->setPriority(priority);
	newnode->setnext(nullptr);
	if (front == nullptr)
	{
		newnode->setnext(front);
		front = newnode;
		rear = newnode;
		cout << "******* Data is Inserted *******\n" << endl;
	}
	else
	{
		if (priority < front->getPrioirity())
		{
			newnode->setnext(front);
			front = newnode;
			cout << "******* Data is Inserted *******\n" << endl;
		}
		else if (priority > rear->getPrioirity())
		{
			rear->setnext(newnode);
			rear = newnode;
			cout << "******* Data is Inserted *******\n" << endl;
		}
		else
		{
			Node *t = new Node();
			t = front;
			while (t != rear->getnext() && t->getnext()->getPrioirity() <= priority)
			{
				
				t = t->getnext();
			}
			newnode->setnext(t->getnext());
			t->setnext(newnode);
			cout << "******* Data is Inserted *******\n" << endl;
		}
	}
}

int Queue::dequeue()
{
	if (!isEmpty())
	{
		string n, d;
		float g;
		int p;
		n = front->getName();
		d = front->getDegree();
		g = front->getGPA();
		p = front->getPrioirity();
		Node *t = front;
		front = front->getnext();
		delete t;
		cout << "The deleted data is:" << endl;
		cout << "Name: "<<n<<"\tDegree: "<<d<<"\tCGPA: "<<g<<"\tPriority: ";
		return p;
	}
	else
	{
		cout << "Can't dequeue because Queue is Empty" << endl;
	}
}

void Queue::Front()
{
	if (!isEmpty())
	{
		Node *t=new Node();
		t = front;
		cout <<"Name: "<< t->getName() << "\tDegree: " <<t->getDegree()<<"\tCGPA: "<<t->getGPA()<<"\tPriority: "<< t->getPrioirity() << endl;
	}
	else
	{
		cout << "Queue is Empty" << endl;
	}
}

int Queue::isEmpty()
{
	return(front == nullptr);
}

void Queue::Display()
{
	if (!isEmpty())
	{
		Node *t = front;
		while (t != rear->getnext())
		{
			cout << t->getName() << " "<<t->getDegree()<<" "<<t->getGPA()<<" "<<t->getPrioirity()<<endl;
			t = t->getnext();
		}
	}
	else
	{
		cout << "Can't Display because Queue is Empty" << endl;
	}
}

void Queue::exit()
{
	cout << "Thank You";
}