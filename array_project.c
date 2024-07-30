#include <stdio.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	printf("\n\n=== Find hair loss medication ===\n\n");
	int answer;
	int treatment = rand() % 4;

	int conShowBottele = 0; // Number of bottles to show in this game
	int prevCntShowBottle = 0; //  Number of bottles shown in the previous game
	//Improved correct answer rate by varying the number of bottles shown to each other (2 at first -> 3 next)
	//3 chances (3 attempts to administer hair growth medication)

	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 }; //4 Bottle
		do {
			conShowBottele = rand() % 2 + 2; // Show Bottle

		} while (conShowBottele == prevCntShowBottle);
		prevCntShowBottle = conShowBottele;

		int isIncluded = 0; // Does it contain hair growth agents?
		printf("> %dth attempt Apply ", i);

		//Select the nummber of bottle to show
		for (int j = 0; j < conShowBottele; j++)
		{
			int randBottle = rand() % 4; //0~3

			//If the bottle has not yet been selected, select it
			
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isIncluded = 1;
				}

			}
			else
			{
				j--;
			}
		}
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
				printf(" No.%d ", k + 1);
		}
		printf("potion to hair.\n\n");

		if (isIncluded == 1)
		{
			printf("success! hair grew!\n\n");
		}
		else
		{
			printf("Fail! hair didn't grow.\n\n");
		}
		printf("Press any key to continue.");
		getchar();

     }
	printf("\n\n What is a hair growth agent??");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("\n\nThat's correct!");
	}
	else
	{
		printf("\nWrong answer! The correct answer is %d.", treatment + 1);
	}

	return 0;
}
