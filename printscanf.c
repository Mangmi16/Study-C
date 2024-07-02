#include <stdio.h>
int main_printscanf(void)
{
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	return 0;*/

	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);
	return 0;*/

	/*Konstante
	const int Year = 1000;
	printf("Geburtsjahr : %d\n", Year);
	return 0;8*/
	
	/*Berechnen
	int add = 3 + 7;
	printf("3+7 = %d\n", add);;
	printf("%d + %d = %d\n", 30, 79, 30*79);
	return 0;*/

	//scanf
	/*int input;
	printf("bitte nummer eingeben :");
	scanf_s("%d", &input);
	printf("nummer : %d\n", input);
	return 0;*/

	/*int ein, zwei, drei;
	printf("bitte 3  ganze zahl :");
	scanf_s(" %d %d %d", &ein, &zwei, &drei);
	printf("erste zahl : %d, ", ein);
	printf("zweite zahl : %d, ", zwei);
	printf("dritte zahl : %d sind ", drei);
	return 0;*/



	/*char c = 'a';
	printf("%c\n", c);
	return 0;*/
	
	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	return 0;*/

   //Project
   //Umfragen 
	char name[20];
	printf("Wie heissen Sie?\n");
	scanf_s("%[^\n]", &name, sizeof(name));

	char stadt[20];
	printf("\nWelche Stadt wohnen Sie?\n");
	scanf_s(" %[^\n]", &stadt, sizeof(stadt));


	char Job[20];
	printf("\nWas ist Ihr Job?\n");
	scanf_s(" %[^\n]", &Job, sizeof(Job));

	int  age;
	printf("\nWie viel Jahr alt sind Sie?\n");
	scanf_s("%d", &age);
	
	float weight;
	printf("\nWie viel wiegen Sie?\n");
	scanf_s("%f", &weight);

	
	
	double height;
	printf("\nWie groﬂ sind Sie?\n");
	scanf_s("%lf", &height);

 


	printf("\n\n____Profile____\n\n");

	printf("Name    : %s\n", name);
	printf("stadt   : %s\n", stadt);
	printf("job     : %s\n", Job);
	printf("alter   : %d\n", age);
	printf("gewicht : %.2fkg\n", weight);
	printf("groesse : %.2lfcm\n", height);
	return 0;
}


