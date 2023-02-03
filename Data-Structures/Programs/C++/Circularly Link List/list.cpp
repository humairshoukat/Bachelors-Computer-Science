#include<iostream>
using namespace std;
#include"list.h"
#include"Node.h"
void list::insert_list()
{
	if (headnode == nullptr)
	{
		int n;
		Node *newnode;
		newnode = new Node();
		cout << "The list is Empty, Please Enter First Value: ";
		cin >> n;
		newnode->set(n);
		newnode->setprev(nullptr);
		s++;
		headnode = newnode;
		currentnode = newnode;
	}
	else
	{
		int n;
		Node *newnode;
		newnode = new Node();
		cout << "Enter New Value: ";
		cin >> n;
		newnode->set(n);
		s++;
		int op;
		cout << "Please Choose an Option"<<endl;
		cout << "1. Insert by Position" << endl;
		cout << "2. Insert by Value" << endl;
		cout << "3. Back to Main Menu" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			int x;
			cout << "Please Choose an Option" << endl;
			cout << "1. After this Position" << endl;
			cout << "2. Before this Position" << endl;
			cin >> x;
			switch (x)
			{
			case 1:
			{
				newnode->setnext(currentnode->getnext());
				newnode->setprev(currentnode);
				(currentnode->getnext())->setprev(newnode);
				currentnode->setnext(newnode);
				currentnode = newnode;
				cout << "Value is inserted" << endl;
				break;
			}
			case 2:
			{
				newnode->setnext(currentnode);
				newnode->setprev(currentnode->getprev());
				(currentnode->getprev())->setnext(newnode);
				currentnode->setprev(newnode);
				currentnode = newnode;
				cout << "Value is inserted" << endl;
				break;
			}
			default:
			{cout << "No option Choosen" << endl; }
			}
		break;
		}
		case 2:
		{
			int y;
			cout << "Please Choose an Option"<<endl;
			cout << "1. After this Value" << endl;
			cout << "2. Before this Value" << endl;
			cin >> y;
			switch (y)
			{
			case 1:
			{
				if (find() == 1)
				{
					newnode->setnext(currentnode->getnext());
					newnode->setprev(currentnode);
					(currentnode->getnext())->setprev(newnode);
					currentnode->setnext(newnode);
					currentnode = newnode;
				}
				else
				{
					cout << "Operation Unsuccessful" << endl;
					delete newnode;
					s--;
				}
				cout << "Value is inserted" << endl;
				break;
			}
			case 2:
			{
				if (find() == 1)
				{
					newnode->setnext(currentnode);
					newnode->setprev(currentnode->getprev());
					(currentnode->getprev())->setnext(newnode);
					currentnode->setprev(newnode);
					currentnode = newnode;
				}
				else
				{
					cout << "Operation Unsuccessful" << endl;
					delete newnode;
					s--;
				}
				cout << "Value is inserted" << endl;
				break;
			}
			default:
			{cout << "No option Choosen" << endl; }
			}
		break;
		}
		case 3:
		{cout << endl; break; }
		default:
		{cout << "No option Choosen" << endl; }
		}
	}
}
void list::delete_list()
{
	if (headnode != nullptr)
	{
		int n;
		cout << "Please Choose an Option" << endl;
		cout << "1. By Current Position" << endl;
		cout << "2. By Value" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
		{
			if (currentnode == headnode)
			{
				headnode = headnode->getnext();
				delete currentnode;
				currentnode = headnode;
				currentnode->setprev(nullptr);
				s--;
			}
			else if (currentnode->getnext()== nullptr)
			{
				delete currentnode;
				currentnode = headnode;
				currentnode->setprev(nullptr);
				s--;
			}
			else
			{
				(currentnode->getprev())->setnext(currentnode->getnext());
				(currentnode->getnext())->setprev(currentnode->getprev());
				Node *t = currentnode;
				currentnode = currentnode->getnext();
				delete t;
				s--;
			}
			cout << "Value is deleted" << endl;
			break;
		}
		case 2:
		{
			if (find() == 1)
			{
				if (currentnode == headnode)
				{
					headnode = headnode->getnext();
					delete currentnode;
					currentnode = headnode;
					currentnode->setprev(nullptr);
					s--;
				}
				else if (currentnode->getnext() == nullptr)
				{
					delete currentnode;
					currentnode = headnode;
					currentnode->setprev(nullptr);
					s--;
				}
				else
				{
					(currentnode->getprev())->setnext(currentnode->getnext());
					(currentnode->getnext())->setprev(currentnode->getprev());
					Node *t = currentnode;
					currentnode = currentnode->getnext();
					delete t;
					s--;
				}
			}
			else
			{
				cout << "Operation Unsuccessful";
			}
			cout << "Value is deleted" << endl;
			break;
		}
		default:
		{cout << "No option Choosen" << endl; break; }
		}
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::update_list()
{
	if (headnode != nullptr)
	{
		int x;
		cout << "Enter new value: ";
		cin >> x;
		cout << "The last value: " << currentnode->get() << " at current position is now updated with new value: ";
		currentnode->set(x);
		cout <<currentnode->get()<< endl;
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::get()
{
	if (headnode != nullptr)
	{
			cout << "The Current Node is: " << currentnode->get() << endl;
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::length()
{
	if (headnode != nullptr)
	{
		cout << "The number of Elements in the List is: " << s << endl;
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::start()
{
	if (headnode != nullptr)
	{
		currentnode->setprev(nullptr);
		currentnode = headnode;
		cout << "Now the cursor is at the start of the list" << endl;
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::next()
{
	if (headnode != nullptr)
	{
		if (currentnode->getnext() != nullptr)
		{
			currentnode = currentnode->getnext();
			cout << "Now the cursor is at the next position of the list" << endl;
		}
		else
		{
			cout << "We can't move forward because we reached in the end of the list" << endl;
		}
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::back()
{
	if (headnode != nullptr)
	{
		if (currentnode != headnode)
		{
			currentnode = currentnode->getprev();
			cout << "Now the cursor is at the back position of the list" << endl;
		}
		else
		{
			cout << "We can't move backward because we are in the start of the list" << endl;
		}
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::tail()
{
	if (headnode != nullptr)
	{
		while (currentnode->getnext() != nullptr)
		{
			currentnode = currentnode->getnext();
		}
		currentnode->setnext(headnode);
		headnode->setprev(currentnode);
		cout << "Now the cursor is at the end of the list" << endl;
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::display_list()
{
	if (headnode != nullptr)
	{
		int n;
		cout << "Please choose an option" << endl;
		cout << "1. Display List" << endl;
		cout << "2. Display List in reverse order" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
		{
			Node *t;
			t = headnode;
			cout << "Your Entered List is: ";
			do
			{
				cout << t->get() << " ";
				t = t->getnext();
			}while (t != headnode);
			break;
		}
		case 2:
		{
			Node *t;
			t = headnode;
			int *A=new int[s];
			int i = 1;
			do
			{
				A[i]=t->get();
				t = t->getnext();
				i++;
			}while (t != headnode);
			cout << "Your Entered List is: ";
			for (int i = s; i >= 1; i--)
			{
				cout << A[i] << " ";
			}
			cout << "\n";
			break;
		}
		default:
		{cout << "No option choosen" << endl; break; }
		}
		cout << endl;
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::clear()
{
	if (headnode != nullptr)
	{
		Node *t = headnode;
		while (t != nullptr)
		{
			currentnode= t;
			t = t->getnext();
			delete currentnode;
		}
		headnode = nullptr;
		currentnode = nullptr;
		s = 0;
		cout << "Now the List is cleared" << endl;
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
int list::find()
{
	int x, flag = 0;
	cout << "Enter value you want to find: ";
	cin >> x;
	Node *t = headnode;
	Node *lt = nullptr;
	do
	{
		if (x == t->get())
		{
			currentnode=t;
			flag = 1;
			break;
		}
		else
		{
			lt = t;
			t = t->getnext();
			flag = 0;
		}
	}while (t != headnode);
	if(flag==1)
	{
		cout << "Value is Found" << endl;
	}
	else
	{
		cout << "Value not Found" << endl;
	}
	return flag;
}
void list::Find()
{
	if (headnode != nullptr)
	{
		int x;
		do {
			cout << "Please choose an option"<<endl;
			cout << "1. Find by asking user" << endl;
			cout << "2. Find and display maximum element from the list" << endl;
			cout << "3. Find and display minimum element of the list" << endl;
			cout << "4. Back to Main Menu" << endl;
			cin >> x;
			switch (x)
			{
			case 1:
			{find(); break; }
			case 2:
			{
				int n = 0;
				Node *t = headnode;
				while (t != nullptr)
				{
					if (t->get() > n)
					{
						n=t->get();
					}
					t = t->getnext();
				}
				cout << "The maximum element of the list is: " <<n<< endl;
				break; }
			case 3:
			{
				Node *t = headnode;
				int n = t->get();
				while (t != nullptr)
				{
					if (n > t->get())
					{
						n = t->get();
					}
					t = t->getnext();
				}
				cout << "The minimum element of the list is: " <<n<< endl;
				break; }
			case 4:
			{cout << "\n"; break; }
			default:
			{cout << "No option choosen\n"; }
			}
		} while (x != 4);
	}
	else
	{
		cout << "List is Empty" << endl;
	}
}
void list::exit()
{
	cout << "Thank You";
}