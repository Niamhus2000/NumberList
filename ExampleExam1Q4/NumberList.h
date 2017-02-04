#pragma once

class NumberList
{
public:
	NumberList *next;
	NumberList *head;
	NumberList *tail;
	double number;
	NumberList();
	int getN();
	bool add(double i);
	bool remove(double i);
	void print();
	double calcAverage();
};
