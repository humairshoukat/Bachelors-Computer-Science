#include<iostream>
using namespace std;
#include"Queue.h"
#include"TreeNode.h"

void Queue::enqueue(TreeNode* treeNode)
{
	TreeNode *newnode = new TreeNode();
	newnode->set(treeNode);
	newnode->setnext(nullptr);
	if (front == nullptr)
	{
		front = newnode;
		rear = newnode;
	}
	else
	{
		rear->setnext(newnode);
		rear = newnode;
	}
}

TreeNode* Queue::dequeue()
{
	if (!isEmpty())
	{
		TreeNode* x;
		x = front->get();
		TreeNode *p = front;
		front = front->getnext();
		delete p;
		return x;
	}
	else
	{
		cout << "Can't dequeue because Queue is Empty" << endl;
	}
}

int Queue::isEmpty()
{
	return(front == nullptr);
}