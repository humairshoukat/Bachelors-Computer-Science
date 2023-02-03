#pragma once
#include"TreeNode.h"
class Tree
{
private:
	//TreeNode *rootnode;
	int s;
	int *D;
public:
	TreeNode *rootnode;
	Tree()
	{
		rootnode = nullptr;
		s = 0;
		D = new int[50];
	}
	~Tree()
	{
	}
	void insert(int info);
	void DD();
	void Search(int info);
	void Preorder(TreeNode *treeNode);
	void Inorder(TreeNode *treeNode);
	void Postorder(TreeNode *treeNode);
	void Levelorder(TreeNode *treeNode);
	TreeNode* remove(TreeNode* tree, int info);
	TreeNode* findMin(TreeNode* tree);
	void Display();
	void TN();
	void Exit();
};