#pragma once
#include<iostream>
#include<string>
#include"Data.h"
#include"ListOfElements.h"
class Task
{
public:
	Task();
	~Task();

	int addElement(shared_ptr<Data>);
	shared_ptr<Data> getElement(int id);
	shared_ptr<Data> getNextDataElement();
	 shared_ptr<Data> deleteElement(int id);
	 int getListSize();
	//void pop();
	//shared_ptr<Data> top();			//can also be called peek
	//bool isEmpty();
	//int getSize();

private:
	shared_ptr<ListOfElements> listHead;
	int size;
};

