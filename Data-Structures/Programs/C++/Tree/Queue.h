#pragma once
#include"TreeNode.h"
class Queue
{
private:
	TreeNode *front;
	TreeNode *rear;
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
	void enqueue(TreeNode* treeNode);
	TreeNode* dequeue();
	int isEmpty();
};