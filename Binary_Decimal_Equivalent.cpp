#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include <queue>
using namespace std;


typedef struct ListNode
{
	string  value;
	struct ListNode *Next;
	struct ListNode *Prev;
}node;



void push(node** head_ref, string  new_data)
{
	/* allocate node */
	node* new_node = new node();

	/* put in the data  */
	new_node->value = new_data;

	/* link the old list off the new node */
	new_node->Next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}


string GetStringFromList(node* test)
{
	string mmeh = "";
	while(test != NULL)
	{
		mmeh = mmeh + test->value;
		test = test->Next;
	}

	return mmeh;

}

//easier
int CountList(node *nodex)
{
	int count = 0;
	while (nodex != NULL)
	{
		count = count + 1;
		nodex = nodex->Next;
	}

	return count;
}


int binaryToDecimal(int n)
{
	int num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0 
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value;
}

int ConvertToDecimal(string binarystring, int count)
{
	int deci = 0;

	for (int i = 0; i < count; i++)
	{
		
		int b = i;// encodings for converting to int
		int m = 2;
		while (b - 1> 0)
		{
			m = m * 2;
			b--;
		}



		if (i == 0)
			deci = deci + ((binarystring[i] - '0') * 1);
		else

			deci = deci + ((binarystring[i] - '0' )* m);
	}



	return deci;

}

int main()
{
	node *head2 = NULL;
	push(&head2, "0");
	push(&head2, "0");
	push(&head2, "0");
	push(&head2, "1");
	push(&head2, "1");
	push(&head2, "0");
	push(&head2, "0");
	push(&head2, "1");
	push(&head2, "0");

	int ovunt  = CountList(head2);
	string reverseTest = GetStringFromList(head2 );
	int n = stoi(reverseTest); 
         int value =binaryToDecimal(n);
	return 0; 

}

		
