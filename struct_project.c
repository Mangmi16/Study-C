#include<stdio.h>


typedef struct {
	char* name;
	int age;
	char* character;
	int level;
}CAT;

//현재까지 보유한 고양이
int collection[5] = { 0,0,0,0,0 };

CAT cats[5];

void initCats();
void printCat(int selected);
int checkCollection();



int main(void)
{
	srand(time(NULL));

	initCats();
	
	while (1)
	{
	
		printf("======Cat Collecter======\n\nClick any Keys");
		getchar();

		int selected = rand() %5;//0~4
		printCat(selected);
		collection[selected] = 1;

		int collectAll = checkCollection();

		if (collectAll == 1)
		{
			break;
		}

	}


	return 0;
}

void initCats()
{
	cats[0].name = "SchuSchu";
	cats[0].age = 5;
	cats[0].character = "docile";
	cats[0].level = 1;

	cats[1].name = "MiuMiu";
	cats[1].age = 3;
	cats[1].character = "Just sleep.";
	cats[1].level = 2;

	cats[2].name = "Kater";
	cats[2].age = 7;
	cats[2].character = "tough";
	cats[2].level = 5;

	cats[3].name = "NiaOng";
	cats[3].age = 1;
	cats[3].character = "I like only expensive things";
	cats[3].level = 7;

	cats[4].name = "PicPic";
	cats[4].age = 5;
	cats[4].character = "ferocity";
	cats[4].level = 4;




}

void printCat(int selected)
{
	printf("\n\n===	You got this cat.===\n\n");
	printf("name       :  %s\n", cats[selected].name);
	printf("age        :  %d\n", cats[selected].age);
	printf("character  :  %s\n", cats[selected].character);
	printf("level      :  ");

	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("*");

	}
	printf("\n\n");

}

int checkCollection()
{
	int collectAll = 1;

	printf("\n\n===Collection===\n\n");
	for (int i = 0; i < 5; i++)
	{
		if (collection[i] == 0)
		{
			printf("%10s", " (Empty Box) ");
			collectAll = 0;
		}
		else
		{
			printf(" %10s", cats[i].name);

		}
	}
	if (collectAll)
	{
		printf("\n\n Congartulation!!! You get all kind of cats\n");
	}
	printf("\n=================================\n\n");
	return collectAll;

}