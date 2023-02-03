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
	void enqueue(string name, string degree, float gpa, int priority);
	int dequeue();
	void Front();
	int isEmpty();
	void Display();
	void exit();
};
