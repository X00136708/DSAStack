#ifndef LISTOFDOUBLES_H_
#define LISTOFDOUBLES_H_

#include <iostream>
using namespace std;

class DoubleListNode
{
	friend class ListOfDoubles;
public:
	DoubleListNode(double = 0);
private:
	double theValue;
	DoubleListNode *next;
};

class ListOfDoubles
{
public:
	ListOfDoubles();
	~ListOfDoubles();
	void displayList();
	void push(const double& val);
	void pop();
	double top();

private:
	struct Item;
	Item* head;
	

};
#endif