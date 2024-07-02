#include <stdio.h>
int main(void)
{
	//srand((time(NULL));  // reset(redom)
	//int num = rand() % 3+1; // 1~3


	/* printf("before reset\n");
	for (int i = 0; i < 7; i++)
		printf("%d  ", rand() % 50);

	srand(time(NULL)); //reset
	printf("\nafter reset\n");
	for (int i = 0; i < 7; i++)
		printf("%d  ", rand() % 50);*/

	// Rock Paper Scissors



	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("Rock");
	}
	else if (i ==1 )
	{
		printf("Scissors");
	}
	else if (i == 2)
	{
		printf("Paper");
	}
	else
	{
		printf("none");
	}*/


	//case
	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0:printf("Rock"); break;
	case 1:printf("Scissors"); break;
	case 2:printf("Paper"); break;
	default:printf("none"); break;
	}*/


	//age(8~13)Elementary  student / age (14~16) Middle schooler / age(17~19) High School student


	/*int age;
	printf("Please enter your age.");
	scanf_s("%d", &age);*/

	/*switch(age)
	{
	case 8:printf("Elementary  student"); break;
	case 9: printf("Elementary  student"); break;
	case 10: printf("Elementary  student"); break;
	case 11: printf("Elementary  student"); break;
	case 12: printf("Elementary  student"); break;
	case 13: printf("Elementary  student"); break;
	case 14: printf("Middle schooler"); break;
	case 15: printf("Middle schooler"); break;
	case 16: printf("Middle schooler"); break;
	case 17: printf("High School student"); break;
	case 18: printf("High School student"); break;
	case 19: printf("High School student"); break;
	default : printf("not a student"); break;
	}*/

	/*switch (age)
	{
	case 8:
	case 9:
	case 10: 
	case 11:
	case 12: 
	case 13: printf("Elementary  student"); break;
	case 14: 
	case 15:
	case 16: printf("Middle schooler"); break;
	case 17:
	case 18: 
	case 19: printf("High School student"); break;
	default: printf("not a student"); break;
	}*/

	// Up and Down

	srand(time(NULL));
	int num = rand() % 100 + 1;
		printf("Nummber  : %d\n", num);
	int answer = 0;
	int chance = 5;

	while (1)
	{
		
		printf("Chance : ");
		for (int i= 0;i<chance;i++ )
		{
			printf("*");
		}
		
		printf("\n");

		printf("Take a guess the Nummber 1~100  : \n");
	
		scanf_s("%d", &answer);
	
		

		if  (answer > num)
		{
			printf("Down \n\n");
			
		}
		else if (answer < num)
		{
			printf("UP\n\n");
			
		}
		else if (answer == num)
		{
			printf("Correct\n\n");
			break;
		}
		else
		{
			printf("error");
			break;
		}
		chance--;
		if (chance == 0)
		{
			printf("You have not a chance");
			break;
		}
		
		
	}




	return 0;
}