#include <stdio.h>
int main(){
	int num, pim, i;
	printf("Insira um numero:  ");
	scanf("%d", &num);

//Vers�o While
i=1;
while (i<=1000){
	pim=i;
		if (pim%num==0){
			printf("PIM  ");
		}
		else{
			printf("%d  ", pim);
		}
		i++;
}

//Vers�o do While
/*i=1;
do{
	pim=i;
		if (pim%num==0){
			printf("PIM  ");
		}
		else{
			printf("%d  ", pim);
		}
		i++;
}
while(i<=1000);*/
}
