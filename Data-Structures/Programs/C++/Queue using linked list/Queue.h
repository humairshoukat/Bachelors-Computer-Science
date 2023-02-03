#pragma once
#include"Node.h"
class Queue
{
private:
	Node *front;
	Node *rear;
	int s;
public:
	Queue()
	{
		front = nullptr;
		rear = nullptr;
		s = 0;
	}
	~Queue()
	{
	}
	void enqueue(int x);
	int dequeue();
	int Front();
	int isEmpty();
	void Display();
	void exit();
};
