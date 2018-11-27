#include "listofdoubles.h"
#include <iostream>
using namespace std;

DoubleListNode::DoubleListNode() {

}
DoubleListNode::DoubleListNode(double val)
	:next(NULL), theValue(val)
{}

ListOfDoubles::ListOfDoubles()
	: head(NULL)
{}

struct ListOfDoubles::Item {
	Item(const double& d) : val(d), next(nullptr)
	{}
	double val;
	Item *next;
};


void ListOfDoubles::push(const double& val) {
	if (head == NULL) {
		head = new Item(val);
	}
	else {
		Item* tmp = head;
		head = new Item(val);
	}
}

ListOfDoubles::~ListOfDoubles()
{
	DoubleListNode *temp;
	while (head)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}

void ListOfDoubles::pop() {

}

double ListOfDoubles::top() {

}



void ListOfDoubles::displayList() 
{
	DoubleListNode *temp = head;
	while (temp)
	{
		cout << temp->theValue << endl;
		temp = temp->next;
	}
}



