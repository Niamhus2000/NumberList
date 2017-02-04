//program to implement a linked list of values

#include "NumberList.h"
#include <iostream>
using namespace std;

int main()
{
	NumberList n1;
	n1.add(1);
	n1.add(2);
	n1.add(3);
	n1.print();
	n1.getN();
	n1.remove(2);
	n1.print();
	n1.calcAverage();

	int x;
	cin >> x;
	return 0;
}