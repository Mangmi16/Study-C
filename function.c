#include <stdio.h>
void p(int num);
//void function_withOut_return();
//int function_with_return();
//void function_without_parameter();
//void function_with_parameter(int num1, int num2, int num3);
//int apple(int total, int ate); //total - ate


int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
int main_Function(void)


// declaration


{

	//Rechner

	//int num = 2;
	////printf("num is %d\n", num); //2
	//p(num);
	////2+3
	//num = num + 3;
	////printf("num is %d\n", num);//5
	//p(num);
	////5-1
	//num -=1;
	////printf("num is %d\n", num);//4
	//p(num);
	////4x3
	//num *= 3;
	////printf("num is %d\n", num);//12
 //   p(num);
	//// 12/6 
	//num /= 6;
	////printf("num is %d\n", num);//2
	//p(num);
 
	

 //function_withOut_return();

 //int ret = function_with_return();
 //p(ret);

 //function_without_parameter();

 //function_with_parameter(12, 2, 8);


 //int ret = apple(5, 1); //5-1
 //printf("2..rest apple is %d\n", ret);

 //printf("3..%d of apple eat %d apple, rest apple is %d\n",10, 4, apple(10,4));



 int num = 2;
 num = add(num, 3);
 p(num);

 num = sub(num, 1);
 p(num);

 num = mul(num, 3);
 p(num);

 num = div(num, 6);
 p(num);


	return 0;
}


//Return Function
//Argument : 36
//Function : o + 4
//Retern :  ?
//void function_name(int num, int num2, char c)
//{
//
//}


////Function
void p(int num)
{
	printf("num ist %d\n", num);
}
//
////Function With Out return
//void function_withOut_return()
//{
//	printf("none Return");
//}

//Function With  return
//int function_with_return()
//{
//	printf("with return");
//
//	return 10;
//}

////Function_without_parameter

//void function_without_parameter()
//{
//	printf("None Parameter");
//}



////Function_with_parameter

//void function_with_parameter(int num1, int num2, int num3)
//{
//	printf("With parameter, prameter is %d, %d, %d.\n", num1, num2, num3);
//}

//// Return and parameter

//int apple(int total, int ate)
//
//{
//	printf("1..Return and Parameter\n");
//	return total - ate;
//}

//rechner function

int add(int num1, int num2)
{
	return	num1 + num2;
}

int sub(int num1, int num2)
{
	return	num1 - num2;
}
int mul(int num1, int num2)
{
	return	num1 * num2;
}

int div(int num1, int num2)
{
	return	num1 / num2;
}
