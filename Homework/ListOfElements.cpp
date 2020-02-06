#include "pch.h"
#include "ListOfElements.h"
#include"Data.h"

using namespace std;

ListOfElements::ListOfElements()
{
	nextListElement = nullptr;
	value = nullptr;
}


ListOfElements::~ListOfElements()
{
}

shared_ptr <ListOfElements> ListOfElements::getNext()
{
	return nextListElement;
}

void ListOfElements::setNext(shared_ptr <ListOfElements> element)
{
	nextListElement = element;
}

shared_ptr <Data> ListOfElements::getValue()
{
	return value;
}

void ListOfElements::setValue(shared_ptr <Data> val)
{
	value = val;
}



