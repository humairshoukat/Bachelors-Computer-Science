#pragma once
class Queue
{
private:
	int *A;
	int front;
	int rear;
	int s;
	int noElements;
public:
	Queue()
	{
		A = nullptr;
		front = -1;
		rear = -1;
		s = 0;
		noElements = 0;
	}
	~Queue()
	{
	}
	void create_queue();
	void enqueue(int x);
	int dequeue();
	int Front();
	int isEmpty();
	int isFull();
	void Display();
	void exit();
};