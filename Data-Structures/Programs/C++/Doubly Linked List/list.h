#pragma once
#include"Node.h"
class list
{
private:
	Node *headnode;
	Node *currentnode;
	int s;
public:
	list()
	{
		headnode = nullptr;
		currentnode = nullptr;
		s = 0;
	}
	~list()
	{
	}
	void insert_list();
	void delete_list();
	void update_list();
	void get();
	void length();
	void start();
	void next();
	void back();
	void tail();
	void display_list();
	void clear();
	int find();
	void Find();
	void exit();
};
