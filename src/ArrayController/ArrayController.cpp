/*
 * ArrayController.cpp
 *
 *  Created on: Feb 9, 2016
 *      Author: tjar2074
 */

#include "ArrayController.h"

ArrayController::ArrayController()
{
//	this->intNode.setValue(5);
//	this->stringArrayNode.setValue("words are fun");
//	myIntArray = new ArrayController<int>(5);
}

ArrayController::~ArrayController()
{

}

void ArrayController :: start()
{
	int num = 0;
	int first = 9;
	int second = 13;
	int third = 6;
	int fourth = 1;
	int fifth = 3;

	double one = 1.1;
	double two = 2.3;
	double three= 3.5;
	double four = 4.7;
	double five = 5.9;

	int myIntArray [5] = { first, second, third, fourth, fifth };
	double myDoubleArray [5] = { one, two, three, four, five };

	for(num = 0; num < 5; num++)
	{
		cout << "the integer number at spot " << num << " is " << myIntArray[num] << endl;
		cout << "the double number at spot " << num << " is " << myDoubleArray[num] << endl;
	}

}



