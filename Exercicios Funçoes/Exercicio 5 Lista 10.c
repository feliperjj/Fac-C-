#include <stdio.h>
int tabu(int tabuada);



int main(){
	int tabuada;
	return tabu(tabuada);
}
int tabu(int tabuada){
	
     int x;
    printf("\nDigite a tabuada que você deseja \n>>> ");
    scanf("%i", &tabuada);

    for(int x = 1; x<=10; ++x){
        //1 x 5 = 5
        printf("%dx%d = %d\n", x, tabuada, x * tabuada);
    }

    return 0;
}



