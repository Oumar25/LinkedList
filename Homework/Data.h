#pragma once
#include<iostream>
#include<string>
using namespace std;
class Data
{
public:
	Data();
	~Data();

	Data(string, string, int, string);

	string getSummary();
	string getAssignedName();
	int getPriority();
	string getDuration();

	void setSummary(string);
	void setAssignedName(string);
	void setPriority(int);
	void setDuration(string);

	int compareTo(shared_ptr<Data> d);
	

private:
	
	string summary, assignedName, duration;
	int priority;
};

