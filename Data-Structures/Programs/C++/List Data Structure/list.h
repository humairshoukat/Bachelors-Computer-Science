#pragma once
class list
{
private:
	int *A;
	int m;
	int s;
	int p;
public:
	list()
	{
		A = nullptr;
		m = 0;
		s = 0;
		p = 0;
	}
	~list()
	{
	}
	void create_list();
	void insert_list();
	void delete_list();
	void update_list();
	void copy_list();
	void get();
	void length();
	void start();
	void next();
	void back();
	void tail();
	void display_list();
	void clear_list();
	int find();
	void Find();
	void deallocate();
	void exit();
};
