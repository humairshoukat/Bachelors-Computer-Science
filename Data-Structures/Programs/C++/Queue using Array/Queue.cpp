#include<iostream>
using namespace std;
#include"Queue.h"

void Queue::create_queue()
{
	if (s == 0)
	{
		cout << "Enter the maximum length of your Queue: ";
		cin >> s;
		A = new int[s];
	}
	else
	{
		cout << "Queue is already created" << endl;
	}
}

void Queue::enqueue(int x)
{
	if (s != 0)
	{
		if (!isFull())
		{
			if (front = -1)
			{
				rear = (rear + 1) % s;
				A[rear] = x;
				noElements++;
				front++;
			}
			else
			{
				rear = (rear + 1) % s;
				A[rear] = x;
				noElements++;
			}
		}
		else
		{
			cout << "You can't insert any value because Queue is Full" << endl;
		}
	}
	else
	{
		cout << "Queue is not created yet" << endl;
	}
}

int Queue::dequeue()
{
	if (s != 0)
	{
		if (!isEmpty())
		{
			int x = A[front];
			front = (front + 1) % s;
			noElements--;
			return x;
		}
		else
		{
			cout << "Can't dequeue because Queue is Empty" << endl;
		}
	}
	else
	{
		cout << "Queue is not created yet" << endl;
	}
}

int Queue::Front()
{
	if (s != 0)
	{
		if (!isEmpty())
		{
			return A[front];
		}
		else
		{
			cout << "Queue is Empty" << endl;
		}
	}
	else
	{
		cout << "Queue is not created yet" << endl;
	}
}

void Queue::Display()
{
	if (s != 0)
	{
		if (!isEmpty())
		{
			for (int i = front; i <= rear; i++)
			{
				cout << A[i] << " ";
			}
			cout << endl;
		}
		else
		{
			cout << "Can't Display because Queue is Empty" << endl;
		}
	}
	else
	{
		cout << "Queue is not created yet" << endl;
	}
}

int Queue::isEmpty()
{
	return(noElements == 0);
}

int Queue::isFull()
{
	return(noElements == s);
}

void Queue::exit()
{
	cout << "Thank You";
}