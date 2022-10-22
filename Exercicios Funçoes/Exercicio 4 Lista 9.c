int mmc (int num1,int num2);






int main(){
	
	int num1,num2;
	
	printf("Digite a e b ");
	scanf("%d %d",&num1,&num2);
	
	printf("O mmc eh %d",mmc(num1,num2));
	
	
	
	
	
}


int mmc (int num1,int num2){
	
	
	
	int mmc,aux,i;
	for (i=2;i<= num2;i++){
		aux = num1*1;
		
		if((aux%num2)==0){
			
			
			mmc = aux; 
			i = num2+1;
		}
		
		
	}
	printf("%d",mmc);
	
	
	
	
	
}