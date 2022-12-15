#include <iostream>
#include "funcs.h"

int main()
{
	std::cout << printRange(5,10) << std::endl;
	int x = sumRange(1,3);
	std::cout << "Sum of 1 to 3: " << x << std::endl;
	x = sumRange(-2,10);
	std::cout << "Sum of -2 to 10: " << x << std::endl;
	int size = 10;
	int *arr = new int[size];
	arr[0]=12;
	arr[1]=17;
	arr[2]=-5;
	arr[3]=3;
	arr[4]=7;
	arr[5]=-15;
	arr[6]=27;
	arr[7]=5;
	arr[8]=13;
	arr[9]=-21;
	int sum1 = sumArray(arr,size);
	std::cout << "Sum is of array: " << sum1 << std::endl;
	sum1 = sumArray(arr,5);
	std::cout << "Summ of first 5: " << sum1 << std::endl;
	std::cout << "ABCD " << isAlphanumeric("ABCD") << std::endl;
	std::cout << "-abc 123 " << isAlphanumeric("-abc 123") << std::endl;
	std::cout << "(()) " << nestedParens("(())") << std::endl;
	std::cout << "(() " << nestedParens("(()") << std::endl;
	std::cout << "(a) " << nestedParens("(a)") << std::endl;
}
