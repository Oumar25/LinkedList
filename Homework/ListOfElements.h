#pragma once
#include<iostream>
#include<string>
#include"Data.h"
#include<memory>
using namespace std;
class ListOfElements
{
public:
	ListOfElements();
	~ListOfElements();

	shared_ptr<ListOfElements> getNext();
	void setNext(shared_ptr<ListOfElements>);
	shared_ptr <Data> getValue();
	void setValue(shared_ptr <Data> val);

private:
	shared_ptr <Data> value;
	shared_ptr <ListOfElements> nextListElement;	//used for forward linkes

};		//used for forward links


