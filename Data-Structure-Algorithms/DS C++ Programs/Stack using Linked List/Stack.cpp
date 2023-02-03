#include<iostream>
using namespace std;
#include"Stack.h"
void Stack::push(int x)
{
	Node *newnode = new Node();
	newnode->set(x);
	newnode->setnext(headnode);
	headnode = newnode;
}
int Stack::pop()
{
	if (headnode != nullptr)
	{
		int x = headnode->get();
		Node *p = headnode;
		headnode = headnode->getnext();
		delete p;
		cout << "The poped value is: ";
		return x;
	}
	else
	{
		cout << "Stack is not created yet" << endl;
	}
}
int Stack::TOS()
{
	if (headnode != nullptr)
	{
		return headnode->get();
	}
	else
	{
		cout << "Stack is not created yet" << endl;
	}
}
bool Stack::isEmpty()
{
	if (headnode == nullptr)
	{
		cout << "Stack is empty" << endl;
		return true;
	}
	else
	{
		return false;
	}
}
void Stack::display()
{
	if (headnode != nullptr)
	{
		Node *t;
		t = headnode;
		while (t != nullptr)
		{
			cout << t->get() << " ";
			t = t->getnext();
		}
		cout << endl;
	}
	else
	{
		cout << "Stack is Empty" << endl;
	}
}
void Stack::exit()
{
	cout << "Thank You" << endl;
}