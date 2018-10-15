/*
Andrew Watts
COSC 2030
Lab05
October 15 
*/

#include<iostream>
#include"Lab05MyStack.h"
using std::cin;
using std::cout;
using std::endl;


int main() {
	string newin;
	cout << "Test for method 1:" << endl;
	cin >> newin;
	cout << stringReversal1(newin) << endl;
	cout << "Test for method 2:" << endl;
	cin >> newin;
	cout << stringReversal2(newin) << endl;
	cout << "Test for method 3:" << endl;
	cin >> newin;
	cout << stringReversal3(newin) << endl;
	cout << "Test for method 4:" << endl;
	cin >> newin;
	cout << stringReversal4(newin) << endl;


	system("pause");
	return(0);
}



