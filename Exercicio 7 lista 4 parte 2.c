#include <stdio.h>

int main(){
	
	int x,i,contho=0,contmu=0,gostf=0,gosth=0,naogost=0,total,aceit=0;
	char genero,opiniao;
	printf("Qual o numero de pessoa entrevistadas?");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++){
		
		printf("Genero [M/F]?");
		fflush(stdin);
		scanf("%c",&genero);
		genero = toupper (genero);
		
		printf("Gostou ou nao do produto [G/N]?");
		fflush(stdin);
		scanf("%c",&opiniao);
		opiniao = toupper(opiniao);
		if((genero=='F')&&(opiniao == 'G')){
			
			contmu++;
			gostf++;
			}else if((genero=='M')&&(opiniao=='G')){
					
									contho++;
									gosth++;
				
							}else{
					
					naogost++;
					
				}
				total = contmu+contho;
			printf("O numero de pessoas que gostaram do produto foi:%d \n",total);
			printf("Numero de pessoas que nao gostaram:%d \n",naogost);
						if(contmu>contho){
							
							
						printf("Publico com maior aceitacao foi feminino");
						}else{
							
							if(contho>contmu){
								
								printf("O publico com maior aceitacao foi o masculino");
							}else{
								
								("Foi aceito por ambos os publicos igulamente");
							}
						}
							
		
			
		
		
		
		
	}
}

	
	
	
