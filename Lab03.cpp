// Kirk Anderson i got help from Matt Mcmenamin
// 10/1/2018
//cosc lab 3

#include "stdafx.h"

#include <iostream>
using std::endl;
using std::cout;
using std::cin;

short sumShort(short val);
long sumLong(long val);
float productFloat(float val);
double productDouble(double val);
float productRecip(float val);


int main()
{
	short num = 0;
	cout << "enter number " << endl;
	cin >> num;

	cout << "the sum is " << "\n" << sumShort(num) << endl;


	long num2 = 0;
		cout << "enter in a long to find to larger number " << endl;
		cin >> num2;

		cout << "answer " << "\n" << sumLong(num2) << endl;


			float num3 = 1;
			cout << " enter a long value to find the factoral " << endl;
			cin >> num3;

			cout << " here is the factoral " << "\n" << productFloat(num3) << endl;



			double num4 = 1;
			cout << "enter a double value for a factoral " << endl;
			cin >> num4;

			cout << "here is the factoral for your double " << "\n" << productDouble(num4) << endl;


			float num5 = 1;
			cout << "enter in a long for a factoral " << endl;
			cin >> num5;

			cout << "here is the answer " << "\n" <<productRecip(num5) << endl;

			system("pause");
    
}

short sumShort(short val)
{
	if (val >= 1)
	{
		long sum = 0;
			for (long i = 1; i <= val; i++)
			{
				sum += i;
			}
			return sum;
	}
	return 0;
}

long sumLong(long val)
{
	if (val >= 1)
	{
		long sum = 0;
		for (long i = 1; i <= val; i++)
		{
			sum += i;
		}
		return sum;
	}
	return 0;
}

float productFloat(float val)
{
	if (val >= 1)
	{
		float factorial = 1;
		for (long i = 1; i <= val; i++)
		{
			factorial *= i;
		}
		return factorial;
	}
	return 0;
}

double productDouble(double val)
{
	if (val >= 1)
	{
		double factorial = 1;
		for (long i = 1; i <= val; i++)
		{
			factorial *= i;
		}
		return factorial;
	}
	return 0;
}

float productRecip(float val)
{
	if (val >= 1)
	{
		float sum = 0;
		for (long i = 1; i <= val; i++)
		{
			sum = s 1 / i;
		}
		return sum-1;
	}
	return 0;
}


