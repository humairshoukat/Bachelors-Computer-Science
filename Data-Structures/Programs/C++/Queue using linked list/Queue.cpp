#include<iostream>
using namespace std;
#include"Queue.h"
#include"Node.h"

void Queue::enqueue(int x)
{
	Node *newnode = new Node();
	newnode->set(x);
	newnode->setnext(nullptr);
	if (front == nullptr)
	{
		front = newnode;
		rear = newnode;
	}
	else
	{
		rear->setnext(newnode);
		rear = newnode;
	}
}

int Queue::dequeue()
{
	if (!isEmpty())
	{
		int x;
		x = front->get();
		Node *p = front;
		front = front->getnext();
		delete p;
		return x;
	}
	else
	{
		cout << "Can't dequeue because Queue is Empty" << endl;
	}
}

int Queue::Front()
{
	if (!isEmpty())
	{
		return front->get();
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
		while (t != nullptr)
		{
			cout << t->get() << " ";
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