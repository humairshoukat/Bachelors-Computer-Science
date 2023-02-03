#pragma once
#include"Node.h"
class Stack
{
private:
	Node *headnode;
public:
	Stack()
	{
		headnode = nullptr;
	}
	~Stack()
	{
	}
	void push(int);
	int pop();
	bool isEmpty();
	int TOS();
	void display();
	void exit();
};
