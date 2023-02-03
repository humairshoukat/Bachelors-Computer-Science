#pragma once
class Stack
{
private:
	int *A;
	int max;
	int top;
public:
	Stack()
	{
		A = nullptr;
		max = 0;
		top = -1;
	}
	~Stack()
	{
	}
	void create_stack();
	void push(int);
	int pop();
	bool isEmpty();
	bool isFull();
	int TOS();
	void display();
	void exit();
};
