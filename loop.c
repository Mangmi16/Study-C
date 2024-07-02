#include <stdio.h>

int main_loop(void)
{

	// ++ 
	/*int a = 10;
	printf("a ist %d\n", a);
	a++;
	printf("a ist %d\n", a);
	a++;
	printf("a ist %d\n", a);*/

	//int b = 20;
	//printf("b ist %d\n", ++b); //21
	//printf("b ist %d\n", b++); //21
	//printf("b ist %d\n", b); //22

	/*int i = 1;

	printf("hello world%d\n", i++);
	printf("hello world%d\n", i++);
	printf("hello world%d\n", i++);
	printf("hello world%d\n", i++);
	printf("hello world%d\n", i++);
	printf("hello world%d\n", i++);
	printf("hello world%d\n", i++);
	printf("hello world%d\n", i++);*/

	//for{}

	/*for (int i = 1; i <= 10; i++)
	{
		printf("hello world %d \n", i);
	}*/


	//while (Bedingung) {}

	/*int i = 1;
	while (i <= 10)
	{
		printf("hello world %d\n", i++);
	}*/


	//do{ } while (Bedingung)

	/*int i = 1;
	do {
		printf("hello world %d \n", i++);
	} while (i <= 10);*/

	/*for (int i = 1; i <= 3; i++)
	{
		printf("Erste Wiederholung : %d\n", i);
		for (int j = 1; j <= 5; j++)
		{
			printf("Zweite Wiederholung : %d\n", j);
		}

	}*/

	// For Loop Übung1 (x * x) 

	/*for (int i = 2; i <= 9; i++)
	{
		printf("\n\n%d \n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}*/


	//For Loop Übung2
	/* *
	   **
	   ***
	   ****
	   ***** */

	   /*for (int i = 0; i <5; i++)
	   {
		   for (int j = 0; j <= i; j++)
		   {
			   printf("*");
		   }
		   printf("\n");
		   }*/

		   /*  For Loop Übung3
				  *
				 **
				***
			   ****
			  *****
			   */


			   /*for (int i = 0; i < 5; i++)
			   {
				   for (int j = i; j < 5; j++)
				   {
					   printf(" ");
				   }
				   for (int k = 0; k <= i; k++)
				   {
						   printf("*");
				   }
				   printf("\n");
			   }*/

			   //
			   /*  *
				  ***
				 ******
				********
			   **********
			   */
	int floor;
	printf("How many floors will you build?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
	}
	for (int k = 0; k < i * 2 + 1; k++)
	{
		printf("*");
		
	}
	printf("\n");
    }







return 0;
}
