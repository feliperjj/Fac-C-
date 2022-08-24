int main(){

int azero,razao,n;
int termo;
int cont;
	
	printf("Digite o indice: ");
	scanf("%d %d %d",&azero,&razao,&n);
	
	cont = 0;
	
	while(cont < n){
		
		
		termo = azero + cont * razao;
		printf("%d ",termo);
		cont++;
		
	}
		printf("\n");

	

}