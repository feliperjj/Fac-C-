// imprimir pim quando o número não for primo
#include <stdio.h>
int main(){
	int num, pim, i;
	printf("Insira um numero:  ");
	scanf("%d", &num);
	//Versăo for
	for (i=1; i<=1000; i++){
		pim=i;
		if (pim%num==0){
			printf("PIM  ");
		}
		else{
			printf("%d  ", pim);
		}
	}
}

//Versăo While
/*i=1;
while (i<=1000){
	pim=i;
		if (pim%num==0){
			printf("PIM  ");
		}
		else{
			printf("%d  ", pim);
		}
		i++;
}*/

//Versăo do While
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
