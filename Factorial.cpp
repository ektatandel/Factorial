
#include "stdafx.h"
#include <iostream>

using namespace std;

int factorial(int num);

int main()
{
	int num;
	cout << "Enter a number" << endl;
	cin >> num; //get input 

	cout << "Answer:" << factorial(num) << endl; //display the answer


	system("PAUSE");
	return 0;
}

int factorial(int num) //function returns the int as an answer
{
	if (num == 1)//base case if the nubmer is 1 then 1! should return 1
		return num;
	else
		return(num * factorial(num - 1));//call itself to calculate number - 1
}
