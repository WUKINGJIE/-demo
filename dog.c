#include"Animal.h"
void dogEat()
{

	printf("dog  eat\n");
}

void dogBeat()
{
	printf("dog beat\n");
}

struct  Animal dog= {
		.name = "dog",
		.peat = dogEat,
		.pbeat = dogBeat,

	};


struct  Animal *putDogLink(struct Animal *phead)
{

	if(phead ==NULL){
		phead = &dog;
	
		return phead;
	}else{

		dog.next = phead;
		phead = &dog;

		return phead;

	}

}

