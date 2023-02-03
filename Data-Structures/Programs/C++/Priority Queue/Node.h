#pragma once
#include<string>
class Node
{
private:
	string name;
	string degree;
	float gpa;
	int priority;
	Node *next;
public:
	Node()
	{
		name = " ";
		degree = " ";
		gpa = 0;
		priority = 0;
		next = nullptr;
	}
	~Node()
	{
	}
	void setName(string n)
	{
		name = n;
	}
	string getName()
	{
		return name;
	}
	void setDegree(string d)
	{
		degree = d;
	}
	string getDegree()
	{
		return degree;
	}
	void setGPA(float g)
	{
		gpa = g;
	}
	float getGPA()
	{
		return gpa;
	}
	void setPriority(int p)
	{
		priority = p;
	}
	int getPrioirity()
	{
		return priority;
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
