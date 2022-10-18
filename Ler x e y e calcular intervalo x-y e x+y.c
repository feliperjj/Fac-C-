\* Faça um programa que leia
um número real x e um número inteiro y.
Em seguida, o programa deve ler 100
números reais e calcular quantos destes
estão no intervalo definido por [x-y,x+y].*/
#include <stdio.h>


int main(){
	
	
	int x,y;
	float sub,bax,cont,elemento;
	
	printf("Digite x:");
	scanf("%d"&x);
	printf("Digite y:");
	scanf("%d",&y);
	
	sub=x+y;
	bax=x-y;
	for(i=0;i<=100;i++){
		printf("Digite um elemento:");
		scanf("%d",&elemento);
		
		if ((numero >= bax) && (numero <= sub))
		{
			cont++;
		}
	}
	
	//exibindo o resultado
	printf ("\n\nForam digitados %d valores no intervalo [%.1f, %.1f]", cont, bax, sup);
}
	}
	
	
	
	
	
	
}