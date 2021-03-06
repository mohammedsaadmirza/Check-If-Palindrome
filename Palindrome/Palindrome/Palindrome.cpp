// Palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool IsPalindrome(string);

int main()
{
	string a = "abccba";
	string b = "abcbba";
	string d = "abcdefghihgfedcba";
	string e = "abcdefghidgfedcba";

	cout << "string a: " << IsPalindrome(a) << endl;
	cout << "string b: " << IsPalindrome(b) << endl;
	cout << "string d: " << IsPalindrome(d) << endl;
	cout << "string e: " << IsPalindrome(e) << endl;

    return 0;
}

bool IsPalindrome(string a)
{
	for (int i = 0; i < (a.size() / 2); i++)
	{
		if (a.at(i) != a.at(a.size() - 1 - i))
		{
			return false;
		}
	}
	return true;
}