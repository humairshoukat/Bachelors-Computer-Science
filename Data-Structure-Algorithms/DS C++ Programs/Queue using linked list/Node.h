#pragma once
class Node
{
private:
	int object;
	Node *next;
public:
	Node()
	{
		object = 0;
		next = nullptr;
	}
	~Node()
	{
	}
	void set(int x)
	{
		object = x;
	}
	int get()
	{
		return object;
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
