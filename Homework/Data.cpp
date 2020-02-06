#include "pch.h"
#include "Data.h"
#include<memory>

Data::Data()
{
}


Data::~Data()
{
}
Data::Data(string assign, string sum, int pri, string dura)
{
	assignedName = assign;
	summary = sum;
	priority = pri;
	duration = dura;
}
string Data::getSummary()
{
	return summary;
}
string Data::getAssignedName()
{
	return assignedName;
}
int Data::getPriority()
{
	return priority;
}
string Data::getDuration()
{
	return duration;
}
int Data::compareTo(shared_ptr<Data>d)	//consider using an enum instead of an int
{
	if (this->priority < d->getPriority())
	{
		return -1;
	}
	else if (priority == d->getPriority())
	{
		return 0;
	}
	return 1;
}
void Data::setAssignedName(string s)
{
	assignedName = s;
}
void Data::setSummary(string p)
{
	summary = p;
}
void Data::setDuration(string m)
{
	duration = m;
}
void Data::setPriority(int n)
{
	priority = n;
}