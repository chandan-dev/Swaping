#include<stdio.h>
#include<conio.h>
int *swap(int num_1, int num_2, int arr[])// Function for swaping;
{
	num_1 =  num_1 + num_2; //Assign sum of values to num_1;
	num_2 = num_1 - num_2;
	num_1 = num_1 - num_2;
	arr[0] = num_1; //Assigning values to array;
	arr[1] = num_2;
	return arr;	 
}
int main(int arg1, char *arg2[])
{
	int num_1, num_2, array[2];
	printf("Enter two numbers : ");
	scanf("%d %d", &num_1, &num_2 );
	printf("\n\n Before swaping  num_1 = %d and num_2 = %d", num_1, num_2);
	swap(num_1, num_2, array);// Swap function call;
	printf("\n\n After swaping  num_1 = %d and num_2 = %d", array[0], array[1]);
	getch();
}

