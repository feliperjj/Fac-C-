#include <stdio.h>
    
   int main(){
   	
   	int saldo=0,valorSaque,deposito,contSaque=0,depositoTotal,opcao,totalSaque,saldoTotal;
   	
   	
   	printf("Qual seu saldo:");
   	scanf("%d",&saldo);
   	
   	
   do
	    {
	        printf("Escolha uma das alternativas:");
	       
		   printf("\n 1 - Para Sacar:");
		   printf("\n 2 - Para Depositar:");
		   printf("\n 3 - Para Encerrar:");
			scanf("%d",&opcao);
		
   		
		   switch(opcao){
   			
   			case 1:
   				printf("Quanto voce quer sacar:");
   				scanf("%d",valorSaque);
   			if(saldo>0){
   			saldo = saldo-valorSaque;
   			contSaque++;
   			totalSaque += valorSaque; 
   		
		   	printf("Novo Saldo:%d",saldo);
   			   }else{
   			   	
   			   	printf("Voce não possui saldo");
				  
				  }
				  break;
				  case 2:
				  	printf("Digite o valor a ser depositado");
				  	scanf("%d",deposito);
				  	if(deposito<0)
				  	{
				  		printf("Impossivel depositar valor negativo");
					  }
					  else{
					  	depositoTotal +=deposito; 
					  	saldo = saldo+deposito;
					  	
				}
				break;
				case 3:
					printf("Obrigado por utilizar nossos serviços");
					break;
				  	
   			
   			
		   }
   		
   		
   		
   		
   		
	   }while(opcao!='F');
   	
   	
   	saldoTotal = saldo + depositoTotal - totalSaque;
   	
   	
   	printf("Total de saques efetuados: %d",contSaque);
   	printf("O total foi R$ %d depositos realizados",depositoTotal);
   	printf("O valor do saldo Final:%d",saldoTotal);
   	
   	
   	
   	
   }
   
   
