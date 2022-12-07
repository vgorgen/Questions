// linked_list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>

struct MyNode
{
	int x;
	struct MyNode* next;
};

int max_table = 10;
int arr[10];

int hash(int key)
{
	return key % max_table;
}


int main()
{
	
	int num[] = { 12, 32, 43, 54, 66, 45 };
	for (int i = 0; i < max_table; i++)
	{
		if (arr[hash(num[i])] == NULL)
		{
			arr[hash(num[i])] = num[i];
			
		}
		else
		{
			arr[hash(num[i]) + 1] = num[i];
		}
		printf("arr: %d\n", arr[i]);
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
