#include"Animal.h"

struct Animal* findByName(char *buf,struct Animal *phead)
{	
	struct Animal *tmp = phead;

	if(phead == NULL){
		printf("not head \n");
		return NULL;
	}else{

		while(tmp != NULL){
			if(strcmp(buf,tmp->name) == 0){
				return tmp;		
				
			}
			tmp = tmp->next;
		}

		return NULL;
	}
	

}


int main(void)
{
	char buf[128] = {'\0'};


	struct Animal *ptmp =NULL;
	struct Animal *phead = NULL;

	phead = putCatLink(phead);
	phead = putDogLink(phead);
	phead = putPersonLink(phead);


	
	while (1)
		{
			printf("input what you want name\n");
			scanf("%s",buf);
			ptmp = findByName(buf,phead);


			if(ptmp != NULL){
			
				ptmp->pbeat();
				ptmp->peat();
			}
			

			memset(buf,'\0',sizeof(buf));
		}

	return 0;
}
