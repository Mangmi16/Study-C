#include <stdio.h>

int main(void)
{
	//Array
	int subway_1 = 30; // 
	int subway_2 = 40;
	int subway_3 = 50;
	//
	//printf("There are %d people riding in subway car 1.", subway_1);
	//printf("There are %d people riding in subway car 2.", subway_2);
	//printf("There are %d people riding in subway car 3.", subway_3);

	int subway_array[3]; // [0] [1] [2]
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("There are %d people riding in subway car No.%d\n",subway_array[i], i + 1);
	}


	//Values ​​must be reset.

	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", arr[i]);

	}*/


	//The size of an array is always declared as a constant value.

	/*int size = 10;
	int arr[10];*/


	/*int arr[10] = { 1,2 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", arr[i]);

	}*/

	// 1 2 0 0 0 0 0 0 0 0 

	//int arr[] = { 1,2 }; // == arr[2]



	/*float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);

	}*/

	//character vs string


	//char c = 'A'; // == A
	//printf("%c\n", c);


	//The end of the string must contain the NULL character \0, meaning 'end'.

	//char str[7] = "coding"; // ==[c] [o] [d] [i] [n] [g] [\0]
	//printf("%s\n", str);

	//char str_1[] = "coding";
	//printf("%d\n", sizeof(str_1));

	//for (int i = 0; i < sizeof(str_1); i++)
	//{
	//	printf("%c\n", str_1[i]);
	//}

	//Eng = 1 Chr 1byte
	//Kor = 1 Chr 2byte	
	//char kor[] = "나도코딩"; // 2*4 +1 = 9 byte
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));


	/*char c_array[7] = { 'c','o','d','i','n','g','\0' };
	printf("%s\n", c_array);*/
	/*char c_array[6] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);*/

	/*char c_array[10] = { 'c','o','d','i','n','g' };*/
	/*printf("%s\n", c_array);
	for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);
	}*/

	//printf("%s\n", c_array);
	//for (int i = 0; i < sizeof(c_array); i++)

	//{
	//	printf("%d\n", c_array[i]); //ASCII Code
	//}
	// scan string
	/*char name[256];
	printf("Name");
	scanf_s("%s\n", name, sizeof(name));
	printf("%s\n",name);*/

	// ASCII Code ANSI 
	//7bit, total 128 Code(0~127)
	//a ; 97
	//A ; 65
	//0 ; 48

	printf("%c\n", 'a');
	printf("%d\n", 'a');

	printf("%c\n", 'b');
	printf("%d\n", 'b');

	printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("%c\n", '\0');
	printf("%d\n", '\0');

	printf("%c\n", '0');
	printf("%d\n", '0');

	printf("%c\n", '1');
	printf("%d\n", '1');


	for (int i= 0 ; i < 128; i++)
	{
		printf("ASCII CODE Number %d : %c\n", i, i);
	}
	return 0;
}