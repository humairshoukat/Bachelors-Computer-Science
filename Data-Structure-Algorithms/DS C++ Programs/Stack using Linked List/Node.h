#pragma once
class Node
{
private:
	int data;
	Node *next;
public:
	Node()
	{
		data = 0;
		next = nullptr;
	}
	~Node()
	{
	}
	void set(int x)
	{
		data = x;
	}
	int get()
	{
		return data;
	}
	void setnext(Node *n)
	{
		next = n;
	}
	Node *getnext()
	{
		return next;
	}
};
