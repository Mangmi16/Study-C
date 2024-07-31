#include<stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int* ptr);

int main_pointer(void)

{

	//===Pointer
	//[Marian]
	//[Sivian]
	//[Moritz]

	//int Marian = 1;
	//int Sivian = 2;
	//int Moritz = 3;


	////===Adresse = Memory Adresse
	//printf("Marian Adress : %d, Password : %d\n", &Marian, Marian); 
	//printf("Sivian Adress : %d, Password : %d\n", &Sivian, Sivian);
	//printf("Moritz Adress : %d, Password : %d\n", &Moritz, Moritz);

	////
	//int * MissionMan; //pointer variable
	//MissionMan = &Marian;
	//printf("Address of place visited by mission man : %d , Password : %d\n", MissionMan, *MissionMan);

	//MissionMan = &Sivian;
	//printf("Address of place visited by mission man : %d , Password : %d\n", MissionMan, *MissionMan);

	//MissionMan = &Moritz;
	//printf("Address of place visited by mission man : %d , Password : %d\n\n", MissionMan, *MissionMan);



	//MissionMan = &Marian;
	//*MissionMan = *MissionMan * 3;
	//printf("Address where Mission Man changed the password : %d , Password : %d\n", MissionMan, *MissionMan);

	//MissionMan = &Sivian;
	//*MissionMan = *MissionMan * 3;
	//printf("Address where Mission Man changed the password : %d , Password : %d\n", MissionMan, *MissionMan);

	//MissionMan = &Moritz;
	//*MissionMan = *MissionMan * 3;
	//printf("Address where Mission Man changed the password : %d , Password : %d\n", MissionMan, *MissionMan);



	////===spy
	//int *spy = &MissionMan;

	//printf("\n\n=== A spy is on a mission. ===\n\n");
	//spy = &Marian;
	//*spy = *spy - 2;
	//printf("Address of place visited by spy : %d , Password : %d\n",spy , *spy);

	//spy = &Sivian;
	//*spy = *spy - 2;
	//printf("Address of place visited by spy : %d , Password : %d\n", spy, *spy);

	//spy = &Moritz;
	//*spy = *spy - 2;
	//printf("Address of place visited by spy : %d , Password : %d\n", spy, *spy);



	//printf("\n\n===They confirm the changed password.===\n\n");
	//printf("Marian Adress : %d, Password : %d\n", &Marian, Marian);
	//printf("Sivian Adress : %d, Password : %d\n", &Sivian, Sivian);
	//printf("Moritz Adress : %d, Password : %d\n", &Moritz, Moritz);

	//printf("MissionMan Adress : %d\n", &MissionMan);
	//printf("spy Adress : %d\n", &spy);

	////=== Array ?

	//int arr[3] = { 5, 10, 15 };
	//int *ptr = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("pointer arr[%d] : %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("pointer ptr[%d] : %d\n", i, ptr[i]);
	//}

	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;

	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("pointer arr[%d] : %d\n", i, arr[i]);
	//	printf("pointer arr[%d] : %d\n", i, *(arr +i));
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("pointer ptr[%d] : %d\n", i, ptr[i]);
	//	printf("pointer arr[%d] : %d\n", i, *(ptr + i));
	//}

	////== arr == arr  ==&arr[0]
	//printf("arr : %d\n", arr);
	//printf("arr[0] adress : %d\n\n", &arr[0]);


	//printf("The actual value of the address of the value of arr itself : %d\n", *arr); //*(arr+0)
	//printf("actual value of arr[0] : %d\n", *&arr[0]); 

	////== *& It's like there's nothing. offset
	//printf("actual value of arr[0] : %d\n", *&*&*&*&*&*&*&arr[0]);


 //   //=== SWAP
	//int a = 10;
	//int b = 20;
	//printf("Adress of a : %d\n", &a);
	//printf("Adress of b : %d\n", &b);
	////===Change the values ​​of a and b.
	//printf("Before Swap a = %d, b =%d \n", a, b);
	//swap(a, b);
	//printf("After Swap a = %d, b =%d \n", a, b);

	//printf("\n\n===Call by Value===\n\n");
	//
	//// Call by Value
	//// Transfer the address value itself in the memory space
	//printf("<Transfer the address value>Before Swap a = %d, b =%d \n", a, b);
	//swap_addr(&a, &b);
	//printf("<Transfer the address value>After Swap a = %d, b =%d \n", a, b);


	int arr2[3] = { 10, 20, 30 };

	changeArray(arr2);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n",arr2[i]);

	}
	return 0;
}

void swap(int a, int b)
{
	printf("in Swap funtoin Adress of a : %d\n", &a);
	printf("in Swap funtoin Adress of b : %d\n", &b);
	int temp = a;
	a = b;
	b = temp;
	printf("in Swap funtion a = %d, b =%d \n", a, b);
}

void swap_addr(int *a, int *b)
{
	printf("<Transfer the address value>in Swap funtoin Adress of a : %d\n", &a);
	printf("<Transfer the address value>in Swap funtoin Adress of b : %d\n", &b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("<Transfer the address value>in Swap funtion a = %d, b =%d \n", *a, *b);
}

void changeArray(int *ptr)
{
	ptr[2] = 50;
}