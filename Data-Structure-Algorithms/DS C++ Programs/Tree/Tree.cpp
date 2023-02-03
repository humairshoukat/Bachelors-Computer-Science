#include<iostream>
using namespace std;
#include"Tree.h"
#include"Queue.h"
int i = 0;

void Tree::insert(int info)
{
	TreeNode* node = new TreeNode();
	node->setInfo(info);
	if (rootnode == nullptr)
	{
		rootnode = node;
		s++;
	}
	else
	{
		TreeNode *p, *q;
		p = rootnode;
		q = rootnode;
		while (/*info != (p->getInfo()) &&*/ q != nullptr)
		{
			if (info == (p->getInfo())) //Insert duplicate Elements in Array
			{
				D[i] = info;
				i++;
				/*int j;
				for (j = 0; j < i; j++)
				{
					if (D[j] == info)
					{
						break;
					}
				}
				if (j==i)
				{
					D[i] = info;
					i++;
				}*/
			}
			p = q;
			if (info < (p->getInfo()))
			{
				q = p->getLeft();
			}
			else
			{
				q = p->getRight();
			}
		}
		/*if (info == (p->getInfo()))
		{
			cout << "You attempt to insert Duplicate: " << info << endl;
			delete node;
		}*/
		if (info < p->getInfo())
		{
			p->setLeft(node);
			s++;
		}
		else
		{
			p->setRight(node);
			s++;
		}
	}
	cout << "Value is inserted" << endl;
}

void Tree::DD() //Display Duplicate Values
{
	if (rootnode != nullptr)
	{
		if (i != 0)
		{
			cout << "The Duplicate values are: ";
			for (int j = 0; j < i; j++)
			{
				cout << D[j] << " ";
			}
			cout << endl;
		}
		else
		{
			cout << "There is no duplicate value in this tree" << endl;
		}
	}
	else
	{
		cout << "Can't Display Duplicate Values because Tree is Empty" << endl;
	}
}

void Tree::Search(int info)
{
	if (rootnode != nullptr)
	{
		TreeNode *p, *q;
		p = rootnode;
		q = rootnode;
		while (info != (p->getInfo()) && q != nullptr)
		{
			p = q;
			if (info < (p->getInfo()))
			{
				q = p->getLeft();
			}
			else
			{
				q = p->getRight();
			}
		}
		if (info == p->getInfo())
		{
			cout << "Value is Found" << endl;
		}
		else
		{
			cout << "Value not Found" << endl;
		}
	}
	else
	{
		cout << "Can't Search because Tree is Empty" << endl;
	}
}

void Tree::Preorder(TreeNode *treeNode)
{
	if (treeNode != nullptr)
	{
		cout << (treeNode->getInfo()) << " ";
		Preorder(treeNode->getLeft());
		Preorder(treeNode->getRight());
	}
}

void Tree::Inorder(TreeNode *treeNode)
{
	if (treeNode != nullptr)
	{
		Inorder(treeNode->getLeft());
		cout << (treeNode->getInfo()) << " ";
		Inorder(treeNode->getRight());
	}
}

void Tree::Postorder(TreeNode *treeNode)
{
	if (treeNode != nullptr)
	{
		Postorder(treeNode->getLeft());
		Postorder(treeNode->getRight());
		cout << (treeNode->getInfo()) << " ";
	}
}

void Tree::Levelorder(TreeNode *treeNode)
{
	if (treeNode != nullptr)
	{
		Queue q;
		q.enqueue(treeNode);
		while (!q.isEmpty())
		{
			treeNode = q.dequeue();
			cout << (treeNode->getInfo()) << " ";
			if (treeNode->getLeft() != nullptr)
			{
				q.enqueue(treeNode->getLeft());
			}
			if (treeNode->getRight() != nullptr)
			{
				q.enqueue(treeNode->getRight());
			}
		}
	}
}

TreeNode* Tree::remove(TreeNode* tree, int info)
{
	if (rootnode != nullptr)
	{
		TreeNode *t;
		if (info < tree->getInfo())
		{
			t = remove(tree->getLeft(), info);
			tree->setLeft(t);
		}
		else if (info > tree->getInfo())
		{
			t = remove(tree->getRight(), info);
			tree->setRight(t);
		}
		else if (tree->getLeft() != nullptr && tree->getRight() != nullptr)
		{
			TreeNode* minNode;
			minNode = findMin(tree->getRight());
			tree->setInfo(minNode->getInfo());
			t = remove(tree->getRight(), (minNode->getInfo()));
			tree->setRight(t);
		}
		else
		{
			TreeNode* nodeToDelete = tree;
			if (tree->getLeft() == nullptr)
			{
				tree = tree->getRight();
			}
			else if (tree->getRight() == nullptr)
			{
				tree = tree->getLeft();
			}
			else
			{
				tree = nullptr;
			}
			delete nodeToDelete;
			s--;
			int j; 
			for (j = 0; j < i; j++) //Deleting Duplicate Element from Array
			{
				if (D[j] == info)
				{
					for (int k = j; k < i; k++)
					{
						D[k] = D[k + 1];
					}
					i--;
					break;
				}
			}
			cout << "Value is Deleted" << endl;
		}
		return tree;
	}
	else
	{
		cout << "Can't Delete because Tree is Empty" << endl;
	}
}

TreeNode* Tree::findMin(TreeNode* tree)
{
	if (tree == nullptr)
	{
		return nullptr;
	}
	else if (tree->getLeft() == nullptr)
	{
		return tree;
	}
	else
	{
		return findMin(tree->getLeft());
	}
}

void Tree::Display()
{
	if (rootnode != nullptr)
	{
		int menu;
		cout << "Please choose an option" << endl;
		cout << "1. Preorder\n";
		cout << "2. Inorder\n";
		cout << "3. Postorder\n";
		cout << "4. Levelorder\n";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{ Preorder(rootnode); cout << endl; break; }
		case 2:
	    {Inorder(rootnode); cout << endl;  break; }
		case 3:
		{Postorder(rootnode); cout << endl; break; }
		case 4:
		{Levelorder(rootnode); cout << endl; break; }
		default:
		{cout << "No option choosen\n"; }
		}
	}
	else
	{
		cout << "Can't Display because Tree is Empty" << endl;
	}
}

void Tree::TN() //Total Number od Nodes
{
	if (rootnode != nullptr)
	{
		cout << "Total number of Nodes are: " << s << endl;
	}
	else
	{
		cout << "Tree is Empty" << endl;
	}
}

void Tree::Exit()
{
	cout << "Thank You";
}