#include <stdio.h>

struct GameInfo {
    char* name ;
    int year ;
    int price;
    char* company;

    struct GameInfo* friendGame;//Related companies
};


typedef struct GameInfomation //Can be erased
{
    char* name;
    int year;
    int price;
    char* company;

    struct GameInfo* friendGame;//Related companies
}GAME_INFO;

int main(void)
{

    //Game name
    //Year of release
    //price
    //company

    char* name = "My Game";
    int year = 2017;
    int price = 50;
    char* company = "My company";

    // another game
    //Game name
    //Year of release
    //price
    //company

    char* name2 = "your Game";
    int year2 = 2017;
    int price2 = 100;
    char* company2 = "your company";



    struct GameInfo gameInfo1;
    gameInfo1.name = "My Game";
    gameInfo1.year = 2017;
    gameInfo1.price = 50;
    gameInfo1.company = "My company";

    printf("--Game Info--\n");
    printf(" name     :  %s\n", gameInfo1.name);
    printf(" year     :  %d\n", gameInfo1.year);
    printf(" price    :  %d\n", gameInfo1.price);
    printf(" company  : %s\n", gameInfo1.company);

    struct GameInfo gameInfo2 = { "your Game",2017 ,100 ,"your company" };

    printf("\n--Game Info 2--\n");
    printf(" name     :  %s\n", gameInfo2.name);
    printf(" year     :  %d\n", gameInfo2.year);
    printf(" price    :  %d\n", gameInfo2.price);
    printf(" company  :  %s\n", gameInfo2.company);

    struct GameInfo gameArray[2] = {
         { "my Game",2017 ,50 ,"my company" },
         { "your Game",2017 ,100 ,"your company" }
    };

    struct GameInfo* gamePtr;
    gamePtr = &gameInfo1;
    printf("\n\n--Game Info Pointer--\n");
    /*printf(" name     :  %s\n", (*gamePtr).name);
    printf(" year     :  %d\n", (*gamePtr).year);
    printf(" price    :  %d\n", (*gamePtr).price);
    printf(" company  :  %s\n", (*gamePtr).company);*/
    // ==
    printf(" name     :  %s\n", gamePtr->name);
    printf(" year     :  %d\n", gamePtr->year);
    printf(" price    :  %d\n", gamePtr->price);
    printf(" company  :  %s\n", gamePtr->company);

    //struct in struct

    gameInfo1.friendGame = &gameInfo2;
    printf("\n\n-- Related companies Game Info --\n");

    printf(" name     :  %s\n", gameInfo1.friendGame->name);
    printf(" year     :  %d\n", gameInfo1.friendGame->year);
    printf(" price    :  %d\n", gameInfo1.friendGame->price);
    printf(" company  :  %s\n", gameInfo1.friendGame->company);

    //typedef
    //Assigning an alias to a data type

    int i = 1;
    typedef int wjdtn;
    typedef float tlftn;

    wjdtn wjdtnqustn = 3;
    tlftn tlftnqustn = 3.24f;

    printf("\n\nint : %d  float : %.2f", wjdtnqustn, tlftnqustn);

    typedef struct GameInfo info; // GameInfo >>> info
    info game1;

    game1.name = "K gmae";
    game1.year = 1996;
    game1. price = 20;
    game1.company = "Song";


    GAME_INFO game2;
    game2.name = "d gmae";
    game2.year = 1999;
    game2.price = 30;
    game2.company = "Sang";



 



    




    return 0;
}
