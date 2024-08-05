#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//10 different animal picture cards (2 of each card)
//Receives two input values ​​from the user and flips the card if the same animal is found
//The game ends when all card pairs are found
// Tell me the total number of failures
int arrayAnimal[4][5]; //20 total cards
int checkAnimal[4][5]; //check
void initAnimalArray();

int conv_pos_x(int x);
int conv_pos_y(int y);
int getEmptyPosition();

char* strAnimal[10];
void initAnimalName();
void shuffleAnimal();

void printAnimals();
void printQuestion();
int foundAllAnimals();

//0 0 0 0 0    0  1  2  3  4 -> 0 0 0 0 0
//0 0 0 0 0    5  6  7  8  9 -> 1 1 1 1 1
//0 0 0 0 0   10 11 12 13 14 -> 2 2 2 2 2
//0 0 0 0 0   15 16 17 18 19 -> 3 3 3 3 3

int main(void)
{
    srand(time(NULL));
    initAnimalArray();
    initAnimalName();
    shuffleAnimal();

    int failCount = 0;

    while (1)
    {
        int select1 = 0;
        int select2 = 0;

        printAnimals();
        printQuestion();
        printf("Select 2 cards to check: ");
        scanf_s("%d %d", &select1, &select2);

        if (select1 == select2)
            continue;

        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);

        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);

        if ((checkAnimal[firstSelect_x][firstSelect_y] == 0
            && checkAnimal[secondSelect_x][secondSelect_y] == 0) // Check if the card is turned over
            &&
            (arrayAnimal[firstSelect_x][firstSelect_y]
                == arrayAnimal[secondSelect_x][secondSelect_y])) //&& Are the two animals the same?
        {
            printf("\n\nBinggo!!! : %s \n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            checkAnimal[firstSelect_x][firstSelect_y] = 1;
            checkAnimal[secondSelect_x][secondSelect_y] = 1;

        }
        else
        {
            printf("\n\n XXX ! (This card is either incorrect or has already been answered correctly). \n\n");
            printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            printf("\n\n");

            failCount++;
        }

        if (foundAllAnimals() == 1)
        {
            printf("\n\nGame Clear\n\n");
            printf("Fail : %d \n", failCount);
            break;
        }
    }
    return 0;
}

void initAnimalArray()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arrayAnimal[i][j] = -1;
        }
    }
}

void initAnimalName()
{
    strAnimal[0] = "Dog";
    strAnimal[1] = "Cat";
    strAnimal[2] = "Monkey";
    strAnimal[3] = "Rabbit";
    strAnimal[4] = "Giraffe";
    strAnimal[5] = "Horse";
    strAnimal[6] = "Elephant";
    strAnimal[7] = "Turtle";
    strAnimal[8] = "Parrot";
    strAnimal[9] = "Squirrel";
}

void shuffleAnimal()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int pos = getEmptyPosition();
            int x = conv_pos_x(pos);
            int y = conv_pos_y(pos);

            arrayAnimal[x][y] = i;
        }
    }
}

int getEmptyPosition()
{
    while (1)
    {
        int randPos = rand() % 20; //0~19

        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if (arrayAnimal[x][y] == -1)
        {
            return randPos;
        }
    }
    return 0;
}

int conv_pos_x(int x)
{
    return x / 5;
}

int conv_pos_y(int y)
{
    return y % 5;
}

void printAnimals()
{
    printf("\n==== secret ====\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%8s", strAnimal[arrayAnimal[i][j]]);
        }
        printf("\n");
    }
    printf("\n==========================\n");
}

void printQuestion()
{
    printf("\n\nMission\n");
    int seq = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            //If you turn the card over and get the correct answer, you get the 'animal name'.
            if (checkAnimal[i][j] != 0)
            {
                printf("%8s", strAnimal[arrayAnimal[i][j]]);
            }
            //If you haven't flipped it yet, indicate the number.
            else
            {
                printf("%8d", seq);
            }
            seq++;
        }
        printf("\n");
    }
}

int foundAllAnimals()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (checkAnimal[i][j] == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}