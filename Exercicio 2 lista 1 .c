#include <stdio.h>

int main(){

int idade;

printf("Digite a idade do nadador:");
scanf("%d",&idade);


if (idade <= 4){
	
	printf ("Infantil A");
}
else if(idade <= 7 ){
	
	printf("Infantil B");
	
}
else if(idade <=10){
	
	
	printf("Infantil C");
	
	
}
else if(idade <= 13){
	
	printf("Juvenil A");
	
}
else if(idade <= 17){
	
	printf("Juvenil B");
}
else{
	
	printf("Adulto");
}






















}