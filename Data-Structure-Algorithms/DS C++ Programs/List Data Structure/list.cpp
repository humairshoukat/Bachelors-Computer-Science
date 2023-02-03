#include<iostream>
using namespace std;
#include"list.h"
void list::create_list()
{
	if (m == 0)
	{
		cout << "Enter the Maximum Length of your list: ";
		cin >> m;
		A = new int[m + 1];
	}
	else
	{
		cout << "List is Alrerady Created, Please deallocate the list first.\n";
	}
}
void list::insert_list()
{
	if (m != 0)
	{
		if (s != m)
		{
			if (s == 0)
			{
				cout << "The list is empty, Please insert the First Value: ";
				cin >> A[++s];
				p = s;
			}
			else
			{
				char op;
				do {
					cout << "a. Insert by Position\n";
					cout << "b. Insert by Value\n";
					cout << "c. Exit\n";
					cout << "Please choose an option: ";
					cin >> op;
					switch (op)
					{
					case 'a':
					{ int x;
					cout << "1. After this Position\n";
					cout << "2. Before this Position\n";
					cout << "3. At Current Position\n";
					cout << "Please choose an option: ";
					cin >> x;
					switch (x)
					{
					case 1:
					{
						for (int i = s; i >= p; i--)
						{
							A[i + 1] = A[i];
						}
						cout << "Enter New Value: ";
						cin >> A[p + 1];
						p++;
						s++;
						break; }
					case 2:
					{
						for (int i = s; i >= (p - 1); i--)
						{
							A[i + 1] = A[i];
						}
						cout << "Enter New Value: ";
						cin >> A[p - 1];
						p--;
						s++;
						break; }
					case 3:
					{
						for (int i = s; i >= p; i--)
						{
							A[i + 1] = A[i];
						}
						cout << "Enter New Value: ";
						cin >> A[p];
						s++;
						break; }
					default:
					{cout << "No option choosen\n"; }
					}
					break; }
					case 'b':
					{ int y;
					cout << "1. After this value\n";
					cout << "2. Before this Value\n";
					cout << "Please choose an option: ";
					cin >> y;
					switch (y)
					{
					case 1:
					{ 
						if (find() == 1)
					    {
							for (int i = s; i >= p; i--)
							{
								A[i + 1] = A[i];
							}
							cout << "Enter New Value: ";
							cin >> A[p + 1];
							p++;
							s++;
					    }
						else
						{
							cout << "Operation Unsuccessful" << endl;
						}
						break; }
					case 2:
					{
						if (find() == 1)
						{
							for (int i = s; i >= p; i--)
							{
								A[i + 1] = A[i];
							}
							cout << "Enter New Value: ";
							cin >> A[p];
							s++;
						}
						else
						{
							cout << "Operation Unsuccessful" << endl;
						}
						break; }
					default:
					{cout << "No option choosen\n"; }
					}
					break; }
					case 'c':
					{cout << "\n"; break; }
					default:
					{cout << "No option choosen\n"; }
					}
				} while (op != 'c');
			}
		}
		else
		{
			cout << "List is Full\n";
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::delete_list()
{

	if (m != 0)
	{
		if (s == 0)
		{
			cout << "The list is Empty"<<endl;
		}
		else
		{
			char c;
			do {
				cout << "a. By Current Position\n";
				cout << "b. By Value\n";
				cout << "c. Exit\n";
				cout << "Please choose an option: ";
				cin >> c;
				switch (c)
				{
				case 'a':
				{
					for (int i = p; i < s; i++)
				    {
						A[i] = A[i + 1];
				    }
					s--;
					cout << "The value at the current position is deleted now" << endl;
					break; }
				case 'b':
				{
					if (find() == 1)
					{
						for (int i = p; i < s; i++)
						{
							A[i] = A[i + 1];
						}
						s--;
						cout << "The value is deleted now" << endl;
					}
					else
					{
						cout << "Operation Unsuccessful" << endl;
					}
					break; }
				case 'c':
				{cout << "\n"; break; }
				default:
				{cout << "No option choosen\n"; }
				}
			} while (c != 'c');
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::update_list()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "The list is Empty" << endl;
		}
		else
		{
			cout << "The position of element is " << p << " and its value is: " << A[p] << endl;
			cout << "Enter New Value: ";
			cin >> A[p];
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::copy_list()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "The list is empty" << endl;
		}
		else
		{
			int *A2;
			A2 = new int[s + 1];
			for (int i = 1; i <= s; i++)
			{
				A2[i] = A[i];
			}
			cout << "The copied list is: ";
			for (int i = 1; i <= s; i++)
			{
				cout << A2[i] << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::get()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "The list is empty" << endl;
		}
		else
		{
			cout << "The position of element is " << p << " and its value is: " << A[p] << endl;
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::length()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "The list is empty" << endl;
		}
		else
		{
			cout << "The size of the Elements of list is: " << s << endl;
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::start()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "The cursor can't move because the list is empty" << endl;
		}
		else
		{
			p = 1;
			cout << "Now the cursor is at the start of the list" << endl;
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::next()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "The cursor can't move because the list is empty" << endl;
		}
		else
		{
			if (p != s)
			{
				p++;
				cout << "Now the cursor is at the Next Position of the list" << endl;
			}
			else
			{
				cout << "The cursor can't move forward because we reached in the end of the list" << endl;
			}
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::back()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "The cursor can't move because the list is empty" << endl;
		}
		else
		{
			if (p != 1)
			{
				p--;
				cout << "Now the cursor is at the Back Position of the list" << endl;
			}
			else
			{
				cout << "The cursor can't move backward because we are in the start of the list" << endl;
			}
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::tail()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "The cursor can't move because the list is empty" << endl;
		}
		else
		{
			p = s;
			cout << "Now the cursor is in the End of the list" << endl;
		}
	}
	else
	{

		cout << "List is Not Created yet\n";
	}
}
void list::display_list()
{
	if (m != 0)
	{
		if (s != 0)
		{
			int x;
			do {
				cout << "1. Display list" << endl;
				cout << "2. Display list in reverse order" << endl;
				cout << "3. Exit" << endl;
				cout << "Please choose an option: ";
				cin >> x;
				switch (x)
				{
				case 1:
				{
					for (int i = 1; i <= s; i++)
					{
						cout << A[i] << " ";
					}
					cout << "\n";
					break; }
				case 2:
				{
					for (int i = s; i>= 1; i--)
					{
						cout << A[i] << " ";
					}
					cout << "\n";
					break; }
				case 3:
				{cout << "\n"; break;}
				default:
				{cout << "No option choosen\n"; }
				}
			} while (x != 3);
		}
		else
		{
			cout << "List is Empty\n";
		}
	}
	else
	{
		cout << "List is Not Created\n";
	}

}
void list::clear_list()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "You can't clear the list because the list is already empty" << endl;
		}
		else
		{
			s = 0;
			p = 0;
			cout << "Now the list is clear" << endl;
		}
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
int list::find()
{
			int n;
			int flag = 0;
			cout << "Enter the value you want to find: ";
			cin >> n;
			for (int i = 1; i <= s; i++)
			{
				if (A[i] == n)
				{
					p = i;
					flag = 1;
					cout << "The above inserted Value is Found in the list at position " << p << endl;
				}
			}
			if (flag == 1)
			{
				return 1;
			}
			else
			{
				cout << "Value not exists" << endl;
				return 0;
			}
}
void list::Find()
{
	if (m != 0)
	{
		if (s == 0)
		{
			cout << "You can't find any value because the list is empty" << endl;
		}
		else
		{
			int x;
			do {
				cout << "1. Find by asking user" << endl;
				cout << "2. Find and display maximum element from the list" << endl;
				cout << "3. Find and display minimum element of the list" << endl;
				cout << "4. Exit" << endl;
				cout << "Please choose an option: ";
				cin >> x;
				switch (x)
				{
				case 1:
				{find(); break; }
				case 2:
				{
					int n = 0;
					for (int i = 1; i <= s; i++)
					{
						if (A[i] > n)
						{
							n = A[i];
						}
					}
					cout << "The maximum element of the list is: " << n << endl;
					break; }
				case 3:
				{
					int n = A[1];
					for (int i = 1; i <= s; i++)
					{
						if (n > A[i])
						{
							n = A[i];
						}
					}
					cout << "The minimum element of the list is: " << n << endl;
					break; }
				case 4:
				{cout << "\n"; break; }
				default:
				{cout << "No option choosen\n"; }
				}
			} while (x != 4);
		}
	}
	else
	{
		cout << "List is not created yet\n";
	}
}
void list::deallocate()
{
	if (m != 0)
	{
		delete[]A;
		m = 0;
		s = 0;
		p = 0;
		cout << "The list is deallocated Now" << endl;
	}
	else
	{
		cout << "List is Not Created yet\n";
	}
}
void list::exit()
{
	cout << "Allah Hafiz";
}