#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct Animal
{
	char name[128];
	int age;
	int sex;

	void (*peat)();
	void (*pbeat)();	

	struct Animal *next;
};



struct  Animal* putCatLink(struct Animal * phead);
struct  Animal* putDogLink(struct Animal * phead);
struct  Animal* putPersonLink(struct Animal * phead);


