#include<stdio.h>
#include<time.h>

int level;
int arrayFish[6];
int * cursor;

void initData();
void printFishes();
void decreaseWater(long elapesdTime);
int checkFishAlive();



int main(void)
{

	long startTime = 0;
	long totalElapsedTime = 0;
	long prevElapsedTime = 0;

	int num;
	initData();

	cursor = arrayFish;

	startTime = clock();
	while (1)
	{
		printFishes();
		printf("Which number fish tank would you like to water?\n");
		scanf_s("%d", &num);

		if (num < 1 || num > 6)
		{
			printf("\nThe input value is incorrect.\n");
			continue;
		}


		//totalElapsedTime
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("total elapsed time : %ld sec\n", totalElapsedTime);

		//Time elapsed since last watering.
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("Last elapsed time : %ld\n", prevElapsedTime);

		//Decrease (evaporation) of fish tank water
		decreaseWater(prevElapsedTime);

		// Water the fish tank entered by the user.
		// If there is 0 water in the fish tank, do not water.
		if (cursor[num - 1] <= 0)
		{
			printf("%d fish is already dead.\n", num);
		}

		//Water cannot be more than 100.

		else if (cursor[num - 1] + 1 <= 100)
		{
			printf("Water No.%d fish tanks.\n",num);
			cursor[num - 1] += 1;

		}

		//Level up occurs once every 20 seconds.
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf("\n\n==========\n==========\n\***level up!!! Lv.%d -> Lv.%d***\n ==========\n==========\n\n ", level - 1, level);
			
			if (level == 5)
			{
				printf("\n\nClear the game!!!\n");
				exit(0);
			}

		}
		// check for dead fish
		if (checkFishAlive() == 0)
		{
			printf("All the fish died.\n");
			exit(0);
		
		}
		else
		{
			printf("the fish is alive\n\n");

		}
		
		prevElapsedTime = totalElapsedTime;


	}
		return 0;
	}




	void initData()
	{
		level = 1;
		for (int i = 0; i < 6; i++)
		{
			arrayFish[i] = 100; // Water level in fish tank. (0~100)
		}
	}

void printFishes()
{
	printf("No.%3d  No.%3d  No.%3d  No.%3d  No.%3d  No.%3d\n" ,1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %6d ", arrayFish[i]);
	
	}
	printf("\n\n");
}
void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);

		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1;
	}
	return 0;
}

