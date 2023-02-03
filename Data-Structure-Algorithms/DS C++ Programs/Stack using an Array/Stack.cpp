#include<iostream>
using namespace std;
#include"Stack.h"
void Stack::create_stack()
{
	if (max == 0)
	{
		cout << "Enter the maximum length of your stack: ";
		cin >> max;
		A = new int[max];
	}
	else
	{
		cout << "Stack is already created" << endl;
	}
}
void Stack::push(int x)
{
	if (max != 0)
	{
		A[++top] = x;
	}
	else
	{
		cout << "Can't Push the value because the stack is not created yet" << endl;
	}
}
int Stack::pop()
{
	if (max != 0)
	{
		cout << "The deleted value is: ";
		return A[top--];
	}
	else
	{
		cout << "Can't Pop because the stack is not created yet" << endl;
	}
}
int Stack::TOS()
{
	if (max != 0)
	{
		if (top != -1)
		{
			return A[top];
		}
		else
		{
			cout << "Stack is not created yet" << endl;
		}
	}
	else
	{
		cout << "Stack is not created yet" << endl;
	}
}
bool Stack::isEmpty()
{
	/*if(top==-1);*/
	if (top == -1)
	{
		cout << "The List is empty" << endl;
		return true;
	}
	else
	{
		return false;
	}
}
bool Stack::isFull()
{
	/*if(top==max-1);*/
	if (top == max-1)
	{
		cout << "The List is Full" << endl;
		return true;
	}
	else
	{
		return false;
	}
}
void Stack::display()
{
	if (max != 0)
	{
		if (!isEmpty())
		{
			for (int i = 0; i <= top; i++)
			{
				cout << A[i] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "Can't Display because the stack is not created yet" << endl;
	}
}
void Stack::exit()
{
	cout << "Thank You" << endl;
}