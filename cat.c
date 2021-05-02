#include"Animal.h"


void catEat()
{

	printf("cat  eat\n");
}

void catBeat()
{
	printf("cat beat\n");
}

struct  Animal cat ={
		.name = "tom",
		.peat = catEat,
		.pbeat = catBeat,
	};

struct  Animal* putCatLink(struct Animal *phead)
{

	if(phead ==NULL){
		phead = &cat;
	
		return phead;
	}else{

		cat.next = phead;
		phead = &cat;

		return phead;

	}

}
