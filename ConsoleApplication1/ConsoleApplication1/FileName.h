#pragma once

#include<iostream>
using namespace std;

namespace MyFunctions
{

	void sayHello()
	{
		cout << "Hello from MyFunctions namespace!" << endl;
	}

	int SumNumbers(int a, int b)
	{
		return a + b;
	}

}