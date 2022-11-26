#include <stdio.h>


float quest3 (float *n1, float *n2,float *n3);


void main ()
{

	float n1,n2,n3;
	
	printf ("Entre com tres numeros: ");
	scanf ("%f %f %f", &n1, &n2,&n3);
	quest3(&n1,&n2,&n3);
	 printf("\nOrdem:Maior: %.2f Segundo Maior: %.2f Menor: %.2f", n1, n2, n3);



}

float quest3 (float *n1, float *n2,float *n3)
{
	
   float aux;
    
    //aqui testa quem é o maior entre n1 e n2
    if (*n1<*n2)
    {
        aux=*n1;
        *n1=*n2;
        *n2=aux;
    }
    //agora testa se o n1 é maior que n3. se for, ele é o maior de todos
    if (*n1<*n3)
    {
        aux=*n1;
        *n1=*n3;
        *n3=aux;
    }
    //se o n1 for mesmo o maior de todos, basta testar quem vai ficar no meio. ai se o n2 for maior que o n3, ele fica
    if (*n2<*n3)
    {
        aux=*n2;
        *n2=*n3;
        *n3=aux;
    }
    //n coloquei else pq ai o que sobra é o n3 mesmo

   

	
}

	
