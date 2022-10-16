#include <stdio.h>
int main(void){
	for(int i=1;i<=5;i++){
		int space=5-i;
		int star=i*2-1;
		for(int j=0;j<space;j++){
			printf(" ");
		}
		for(int k=0;k<star;k++){
			printf("*");
		}
		printf("ÆN¬[:%d¼Ó %dªÅ®æ %d¬P\n",i,star);
	}
	return 0;
}
