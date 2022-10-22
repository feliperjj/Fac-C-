#include <stdio.h>
float convert(float c,float f);


int main (){
	
 float c,f;	
	 printf("C = ");
	  scanf("%f", &c);
	
   
		return convert(c,f);
 
  


	
}

float convert(float c,float f){
	
	 f = (9 * c + 160) / 5;
		printf("F = %f", f);
	}