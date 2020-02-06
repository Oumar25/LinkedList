#include "pch.h"
#include <iostream>
#include"Data.h"
#include"ListOfElements.h"
#include"Task.h"
#include<string>

using namespace std;

void displayList(Task &);

int main()
{
	bool exit = true;
	int  id2;
	string summary, assignName, input2, priority, duration;
	string input;
	
	cout << "This program track the work!!" << endl;
	Task * task = new Task();
	while (exit == true)
	{
		cout << "Type C to create new task, G to get task, R to remove element and" << endl;
		cout << "D to get the next data in the list and E to exit" << endl;
		
		cin >> input;
		cin.ignore();
		if (input == "C" || input == "c")
		{
			cout << "Input The Work Summary: ";
			getline(cin, summary);
			cout << endl;

			do {
				cout << "Enter the Priority Of you Task (Between 1-5): ";
				getline(cin, priority);
			} while (priority != "1" && priority != "2" && priority != "3" && priority != "4" && priority != "5");

			cout << "Enter the Duration Of you Task (Between 1-15 days): ";
			do
			{
				cin >> duration;
			} while (stoi(duration) > 15 || stoi(duration) < 1);
			cin.ignore();
			cout << "Input The Assign Name of the Work: ";
			getline(cin, assignName);
			cout << endl;
			cout <<"The ID is"<< task->addElement(shared_ptr<Data>(new Data(assignName, summary, stoi(priority), duration)));
		}
		if (input == "G" || input == "g")
		{
			int id;
			cout << "Enter The ID of the Task:";
			cin >> id;
			cout << "The Summary: " << task->getElement(id)->getSummary() << endl;
			cout << "The Priority: " << task->getElement(id)->getPriority() << endl;
			cout << "The Duration: " << task->getElement(id)->getDuration() << endl;
			cout << "The Assigned Name: " << task->getElement(id)->getAssignedName() << endl;

		}
		if (input == "R" || input == "r")
		{
			cout << "Enter The ID of the Task You Want to Remove:";
			cin >> id2;
			cout << "Deleting " << task->deleteElement(id2)->getSummary() << endl;
			cout << "Deleting " << task->deleteElement(id2)->getSummary() << endl;
			cout << "Deleting " << task->deleteElement(id2)->getSummary() << endl;
			cout << "Deleting " << task->deleteElement(id2)->getSummary() << endl;
		}
		if (input == "E" || input == "e")
		{
			cout << "Thank You!!" << endl;
			exit = false;
		}
		if (input != "E" && input != "e" &&input != "R" && input != "r"&& input != "G" && input != "g"&& input != "C" && input != "c")
		{
			cout << "You have input the wrong input." << endl;
			cout << endl;
		}
		//cin>> input;
		cout << endl;
	} 


	
	
	cin.get();
	cin.clear();
	//Task* task = new Task();

	//Task * node = new Task();
	//cout << endl; 
	//cout<<node->
	////cout << node->addElement(shared_ptr<Data>(new Data("Sum1", "Sum1", 1, 1)));
	//cout << endl;
	//cout<<task->
	
	/*cout << node->addElement(shared_ptr<Data>(new Data("Sum2", "Sum2", 2, 2)));
	cout << node->addElement(shared_ptr<Data>(new Data("Sum3", "Sum3", 3, 1)));
	
	cout << node->getElement(1)->getSummary() << endl;
	cout << node->getElement(2)->getSummary() << endl;
	cout << node->getElement(3)->getSummary() << endl;
	cout << node->getElement(4)->getSummary() << endl;

	
	cout << "deleting "<<node->deleteElement(4)->getSummary() << endl;

	cout <<"getting next "<< node->getNextDataElement()->getSummary();
	cout << endl;
	cout << node->getElement(1)->getSummary() << endl;
	cout << node->getElement(2)->getSummary() << endl;
	cout << node->getElement(3)->getSummary() << endl;*/
	/*delete ;
	task = nullptr;*/
	return 0;
}

//void displayList(Task & list)		//note passing the list by reference
//{
//	if (list.getListSize() == 0)
//	{
//		cout << "List empty" << endl;
//	}
//	else
//	{
//		//list.resetList();					//start scan from beginning of list
//		int elementNumb = 0;
//		while (true)
//		{
//			Data * data = list->G;
//			if (data == nullptr)
//			{
//				return;
//			}
//			cout << "List Element: " << elementNumb++ << " = " << data->getValue() << endl;
//		}
//	}
//}