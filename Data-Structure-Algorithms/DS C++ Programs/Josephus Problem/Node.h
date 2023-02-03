#pragma once
class Node
{
private:
	int data;
	Node *next;
	Node *prev;
public:
	Node()
	{
		data = 0;
		next = nullptr;
		prev = nullptr;
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
	void setprev(Node *p)
	{
		prev = p;
	}
	Node *getprev()
	{
		return prev;
	}
};
