#include "pch.h"
#include "Task.h"
#include "Data.h"
#include<random>
#include <time.h>
#include<memory>
Task::Task()
{
	listHead = nullptr;
	size = 0;
}


Task::~Task()
{
}

int Task::addElement(shared_ptr<Data> data)
{
	srand(time(NULL));
	//int y = -1;
	shared_ptr<ListOfElements> New = shared_ptr<ListOfElements>(new ListOfElements());
	shared_ptr<ListOfElements> element = listHead;
	shared_ptr<ListOfElements>Follow = listHead;
	New->setValue(data);
	New->setNext(nullptr);
	
	if (listHead == nullptr) 
	{
		listHead = New;
		size++; 
		return New->getValue()->getPriority();
	}
	if ((New->getValue()->compareTo(element->getValue())) == -1)
	{
		listHead = New;
		New->setNext(element);
		return New->getValue()->getPriority();
	}
	while (element->getNext() != nullptr) {
		
		element = element->getNext();
		if (New->getValue()->compareTo(element->getValue()) == -1)
		{
			/*if (y < 0) 
			{
				listHead = New;
				New->setNext(element);
			}*/
			
				Follow->setNext(New);
				New->setNext(element);
				return New->getValue()->getPriority();
	
		}
		Follow = Follow->getNext();
	}
	//New->setNext(listHead);
	//listHead = New;
	//New->setNext(nullptr);
	element->setNext(New);
	size++;
	return 1;
}
shared_ptr<Data> Task::getElement(int id) 
{
	shared_ptr<ListOfElements>element = listHead;
	if (listHead == nullptr) 
	{
		return nullptr;
	}
	for (int i = 1; i < id; i++) 
	{
		element = element->getNext();
	}

	return element->getValue();
}
shared_ptr<Data> Task::getNextDataElement()
{
	if (listHead == nullptr)
	{
		return nullptr;
	}
	return listHead->getValue();
}

shared_ptr<Data> Task::deleteElement(int id)
{
	int y = -1;
	shared_ptr<ListOfElements> element = listHead;
	shared_ptr<ListOfElements> Follow = listHead;
	/// throw an exception when there is nothing in the list
	if (size == 1) 
	{
		listHead = nullptr;
		size--;
		return element->getValue();
		
	}
	if (id == 1) 
	{
		listHead = element->getNext();
		size--;
		return element->getValue();
	}
		for (int i = 1; i < id; i++)
		{
			element = element->getNext();
			if (y > -1) {
				Follow = Follow->getNext();
			}
			y++;
		}
		Follow->setNext(element->getNext());
		return element->getValue();
}

int Task::getListSize()
{
	return size;
}
