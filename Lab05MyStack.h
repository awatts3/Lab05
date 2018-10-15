/*
Andrew Watts
COSC 2030
Lab05
October 15
*/
#ifndef MY_STACK
#define MY_STACK

#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<list>
using std::stack;
using std::string;
using std::vector;
using std::list;

string stringReversal1(string input);

string stringReversal2(string input);

string stringReversal3(string input);

string stringReversal4(string input);

class MyStack
{
public:
	MyStack();
	 bool isEmpty() const;
	 void push(char& c);
	 char pull();

private:
	//vector<char> characters;
	list<char> characters;

};


#endif // !MY_STACK
