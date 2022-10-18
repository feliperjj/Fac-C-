#include <stdio.h>
int main (){
	
	
	char nome[20],genero;
	int matricula,media,idade,salario,tempo,maisvi,fem,hom,i;
	
	
	for (i=0;i<2;i++){

	printf("\n Digite seu nome: ");
	scanf ("%s",&nome);
	printf("Digite sua Matricula: ");
	scanf ("%d",&matricula);
	printf ("Genero [M/F]: ");
	fflush (stdin);
	scanf ("%c", &genero);
	genero = toupper (genero);
	printf("Digite sua idade:");
	scanf ("%d",&idade);
	printf("Digite seu salario:");
	scanf ("%d",&salario);
	printf(" Tempo de Empresa:");
	scanf ("%d",&tempo);

	if(idade < 21){
		
		maisvi++;
	}
	else if(genero == "F"){
		
		fem++;
		
	}else if (genero == "M"){
		hom++;
		media = salario/hom; 
		
	}	
	
	}
		
	

	printf("\n Nome: %s",nome);
	printf("\n Genero: %c",genero);
	printf("\n Matricula: %d",matricula);
	printf("\n Tempo de casa %d",tempo);
	printf("\n Idade:%d ",idade);
	printf("\n Salario: %d",salario);
	printf("\n Media salarial dos Homens %d",media);
	printf("\n Quantidade de funcionarios com menos de 21 %d",maisvi);
	
	
	
	
}