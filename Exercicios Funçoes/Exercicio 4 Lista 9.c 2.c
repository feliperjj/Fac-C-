int mdc (int num1,int num2);






int main(){
	
	int num1,num2;
	
	printf("Digite a e b ");
	scanf("%d %d",&num1,&num2);
	
	printf("O mmc eh %d",mdc(num1,num2));
	
	
	
	
	
}
int mdc (int num1,int num2){
	
	
	
	int resto;
	do{
	resto = num1%num2;
	num1=num2;
	num2=resto;
	
	}	while(resto!=0);
			
	
		printf("%d",num1);	
	}

	
	
	
	
	

