#include"Animal.h"
void personEat()
{

	printf("person  eat\n");
}
void personBeat()
{
	printf("person  beat\n");
}


struct  Animal person={
		.name = "person",
		.peat  = personEat,
		.pbeat = personBeat,
	};

struct  Animal *putPersonLink(struct Animal *phead)
{

	if(phead ==NULL){
		phead = &person;
	
		return phead;
	}else{

		person.next = phead;
		phead = &person;

		return phead;

	}

}



