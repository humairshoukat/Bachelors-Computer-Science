#pragma once
class TreeNode
{
private:
	int object;
	TreeNode *left;
	TreeNode *right;
	TreeNode* Qobj;
	TreeNode *next;
public:
	TreeNode()
	{
		object = 0;
		left = nullptr;
		right = nullptr;
		Qobj = nullptr;
		next = nullptr;
	}
	~TreeNode()
	{
	}
	void setInfo(int Info)
	{
		object = Info;
	}
	int getInfo()
	{
		return object;
	}
	void setLeft(TreeNode *left)
	{
	    this->left = left;
	}
	TreeNode *getLeft()
	{
		return left;
	}
	void setRight(TreeNode *right)
	{
		this->right = right;
	}
	TreeNode *getRight()
	{
		return right;
	}
	int isLeaf()
	{
		if (left == nullptr && right == nullptr)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void set(TreeNode* x)
	{
		Qobj = x;
	}
	TreeNode* get()
	{
		return Qobj;
	}
	void setnext(TreeNode *n)
	{
		next = n;
	}
	TreeNode *getnext()
	{
		return next;
	}
};