#include "stdio.h"
#include "string.h"

typedef struct
{
	char name[50];
	int nim;
	int age;
	float height;
	float weight;
}

Person;

int main()
{
	Person person1;
	strcpy(person1.name, "Fauzan Azhima Joendi");
	person1.nim = 24343090;
	person1.age = 18;
	person1.height = 183.5;
	person1.weight = 90.5;
	printf("NAMA : %s\n", person1.name);
	printf("NIM : %i\n", person1.nim);
	printf("UMUR : %i\n", person1.age);
	printf("TINGGI : %.1f\n", person1.height);
	printf("BB : %.1f\n", person1.weight);
	return 0;
}