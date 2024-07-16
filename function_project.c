#include <stdio.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();




int main(void)
{
	//There are 5 problems. For each problem, increasingly difficult formula quizzes are presented at random.
	//If you pass, you fail.

	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++)
	{
		// x * y = ?
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		//printf("%d x %d = ?", num1, num2);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);

		if (answer == -1)
		{
			printf("END");
			exit(0);
		}
		else if (answer == num1 * num2)
		{
			success();
			count++;
		}
		else
		{
			fail();
		}
	}

	printf("\n\n You got %d correct passwords out of 5.\n", count);

	return 0;

}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}


void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n\n\n########### No.%d Password ###########\n\n", level);
	printf("\n\t%d x %d = ?\n\n", num1, num2);
	printf("##################################\n");
	printf("\n Password?   (end = -1)\n\n");

}

void success()
{
	printf("\n\nGood !!!\n\n");
}

void fail()
{
	printf("\n\nFail !!!\n\n");
}