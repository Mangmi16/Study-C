#include<stdio.h>

int main_Mulidimensional_Array(void)
{
	//Mulidimensional Array

//	int i; // o
//	int arr[5]; // ooooo
	//[0],[1], [2], [3], [4]

//	int arr2[2][5];
	//0 0 0 0 0
	//0 0 0 0 0 
	//arr2[0][0] arr2[0][1] arr2[0][2] arr2[0][3] arr2[0][4]
	//arr2[1][0] arr2[1][1] arr2[1][2] arr2[1][3] arr2[1][4]


//	int arr3[4][2];
	//0 0
	//0 0
	//0 0
	//0 0

//	int arr4[3][3][3];
	//0 0 0   //0 0 0
	//0 0 0   //0 0 0
	//0 0 0   //0 0 0

	//0 0 0
	//0 0 0
	//0 0 0


	int arr5[5] = { 1,2,3,4,5 };

	int arr2[2][5] = { 
		{1,2,3,4,5},
		{1,2,3,4,5}
	};

	int arr333[3][3][3] = 
	{
		{
		{1,2,3},
		{1,2,3},
		{1,2,3}
		},
		{
	    {11,12,13},
	    {11,12,13},
	    {11,12,13}
	},
	{
		{21,22,23},
	    {21,22,23},
	    {21,22,23}
	}
};
	int arr3[4][2] = {
	{1,2},
	{1,2},
	{1,2},
	{1,2}
	};

	/*for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2d array <%d,%d> : %d \n", i,j, arr3[i][j]);
		}
		printf("\n");
	}*/

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 ; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				printf("3d array <%d,%d,%d> : %d \n", i, j,k, arr333[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
