#include <iostream>
#include "mymath.h"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Hello world! " << endl;
	cout << MyMath::Add(1, 5) << endl;
	cout << MyMath::Sub(11, 5) << endl;
	// cout << MyMath::Multi(1, 5) << endl;
	// cout << MyMath::Div(10, 5) << endl;


	return 0;
}