#include<stdio.h>
#include<conio.h>
int *swap(int num_1, int num_2, int num_3, int array[])// Function for swaping;
{
	num_1 = num_1 + num_2 + num_3; //Assign sum of values to num_1;
	num_2 = num_1 - (num_2 + num_3);
	num_3 = num_1 - (num_2 + num_3);
	num_1 =	num_1 - (num_2 + num_3);
	array[0] = num_1; //Assigning values to array;
	array[1] = num_2;
	array[2] = num_3;
	return array;	 
}
int main(int arg1, char *arg2[])
{
	int num_1, num_2, num_3, array[3];
	printf("Enter three numbers : ");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	printf("\n\n Before swaping  num_1 = %d and num_2 = %d and num_3 = %d", num_1, num_2, num_3);
	swap(num_1, num_2, num_3, array);// Swap function call;
	printf("\n\n After swaping  num_1 = %d and num_2 = %d and num_3 = %d", array[0], array[1], array[2]);
	getch();
}

