#include "Lab05MyStack.h"
/*
Andrew Watts
COSC 2030
Lab05
October 15
*/

string stringReversal1(string input)
{
	stack<char> chars;
	string out;

	for (unsigned int i = 0; i < input.size();i++) {
		chars.push(input.at(i));
	}
	while (!chars.empty()) {
		out.push_back(chars.top());
		chars.pop();
	}
	return out;
}

string stringReversal2(string input)
{
	vector<char> chars;
	string out;

	for (unsigned int i = 0; i < input.size(); i++) {
		chars.push_back(input.at(i));
	}
	while (!chars.empty()) {
		out.push_back(chars.back());
		chars.pop_back();
	}
	return out;
}

string stringReversal3(string input)
{
	list<char> chars;
	string out;

	for (unsigned int i = 0; i < input.size(); i++) {
		chars.push_back(input.at(i));
	}
	while (!chars.empty()) {
		out.push_back(chars.back());
		chars.pop_back();
	}
	return out;
}

string stringReversal4(string input)
{
	MyStack A;
	string out;
	for (unsigned int i = 0; i < input.size(); i++) {
		A.push(input.at(i));
	}
	while (!A.isEmpty()) {
		out.push_back(A.pull());
	}

	return (out);
}

MyStack::MyStack()
{

}

bool MyStack::isEmpty() const
{
	return characters.empty();
}

void MyStack::push(char & c)
{
	characters.push_back(c);
}

char MyStack::pull()
{
	char a;
	a = characters.back();
	characters.pop_back();
	return a;
}
