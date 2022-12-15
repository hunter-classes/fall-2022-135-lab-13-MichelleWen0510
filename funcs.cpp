#include <iostream>
#include <string>
#include "funcs.h"

std::string printRange(int left, int right)
{
	if(left<=right)
	{
		std::string s = std::to_string(left) + " " + printRange(left+1,right);
		return s;
	} else {
		std::string s = "";
	}
	return "";
}

int sumRange(int left, int right)
{
	if(left<=right)
	{
		int num = left + sumRange(left+1,right);
		return num;
	} else {
		return 0;
	}
}

int sumArray(int *arr, int size)
{
	return sumArrayInRange(arr,0,size-1);
}

int sumArrayInRange(int *arr, int left, int right)
{
	if(left<=right)
	{
		int num = arr[left] + sumArrayInRange(arr,left+1,right);
		return num;
	} else {
		return 0;
	}
}

bool isAlphanumeric(std::string s)
{
	if(std::isalnum(s[0]))
	{
		isAlphanumeric(s.substr(1));
	} else {
		return false;
	}
	return true;
}

bool nestedParens(std::string s)
{
	if(isAlphanumeric(s))
	{
		return false;
	}
	if(s.length()%2==1)
	{
		return false;
	}
	int first = s.length()/2;
	int second = (s.length()/2)+1;
	if(s[first]=='(' && s[second]==')')
	{
		std::string str = s.substr(0,first-1)+s.substr(second+1,first-1);
		nestedParens(str);
	}
	return true;
}
