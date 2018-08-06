//This is a temprature convert program
#include<iostream>
using namespace std;
double convert(double n, char ch);
int main()
{
	char ch;
	double n,conv;
	cout << "Please entre convert type"<< endl;
	cout << "A. C to F" << endl;
	cout << "B. F to C" << endl;
	cin >> ch;
	cout << "Please entre the number: ";
	cin >> n;
	conv = convert(n,ch);
	cout << conv << endl;
	return 0;
}

double convert(double n, char ch)
{
	double conv;
	if(ch=='A')
	{
		conv=1.8*n+32.0;
		return conv;
	}
	else
	{
		conv=(n-32.0)/1.8;
		return conv;
	}
}