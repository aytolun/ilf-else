#include<stdio.h>

int main(){
	
	int gun1, gun2;
	int ay1, ay2;
	int yil1, yil2;
	
	printf("Lutfen birinci tarihi girin: (dd/mm/yyyy):");
	scanf("%d/%d/%d", &gun1, &ay1, &yil1);	
	
	printf("Lutfen ikinci tarihi girin: (dd/mm/yyyy)");
	scanf("%d/%d/%d", &gun2, &ay2, &yil2);
	
	if(yil1==yil2 && ay1==ay2 && gun1==gun2){
		
	printf("tarihler ayni\n");
	
	}

    else
 printf("tarihler farkli");
	
	return 0;
}
