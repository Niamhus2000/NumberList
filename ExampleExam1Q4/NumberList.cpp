#include "NumberList.h"
#include <iostream>
using namespace std;

NumberList::NumberList()
{
	next = head = tail = 0;
	number = 0;
}


//returns the number of entries in the list
int NumberList::getN()
{
	NumberList *curr = head;
	int counter = 0;
	while (curr != 0)
	{
		counter++;
		curr = curr->next;
	}
	cout << "amount of numbers in list: " << counter << endl;
	return counter;
}

//adds a number to the list
bool NumberList::add(double number)
{
	NumberList *curr = head;
	while (curr != 0)
	{
		if (curr->number == number)
		{
			cout << "number already in list" << endl;
			return false;
		}
		curr = curr->next;
	}
	NumberList *p = new NumberList;
	p->number = number;
	p->next = NULL;
	if (tail == NULL)
	{
		head = tail = p;
	}
	else
	{
		tail->next = p;
		tail = p;
		
	}
	return true;
}


//removes a number from the list
bool NumberList::remove(double number)
{
	NumberList *curr = head;
	NumberList *prev = NULL;
	while (curr != NULL)
	{
		if (curr->number == number) //match found
		{
				prev->next = curr->next;
				if (curr = tail)
				{
					tail = prev;
				}
			
			delete[] curr;
			return true;
		}
		prev = curr;
		curr = curr->next;
	}
	cout << "number not found" << endl;
	return false;
}


//prints the list
void NumberList::print()
{
	NumberList *curr = head;
	while (curr != 0)
	{
		cout << curr->number << endl;
		curr = curr->next;
	}
}


//finds the average value of the list
double NumberList::calcAverage()
{
	NumberList *curr = head;
	int counter = 0;
	double total = 0;
	double average = 0;
	while (curr != 0)
	{
		total = total + curr->number;
		counter++;
		curr = curr->next;
	}
	average = total / counter;
	cout << "total is: " << total << endl;
	cout << "average is: " << average << endl;
	return average;
}