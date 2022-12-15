#include <stdio.h>
//
//Desenvolver uma função que, dados dois vetores vet1 e
//vet2, contendo quant1 e quant2 elementos,
//respectivamente, verifique se um terceiro vetor, vet3,
//com quant3 elementos, consiste na interseção de vet1
//e vet2, retornando o valor 1 se for, ou 0, caso contrário.






int intersection(int quant1, int quant2, int quant3, int vet1[quant1], int vet2[quant2], int vet3[quant3]) {
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < quant1 && j < quant2 && k < quant3; i++, j++, k++) {
        while (vet1[i] != vet2[j]) {
            if (vet1[i] < vet2[j]) {
                i++;
            } else {
                j++;
            }
        }
        if (vet3[k] != vet1[i]) {
            return 0;
        }
    }
    return 1;
}


//A função compara cada elemento do vetor vet3 com cada elemento de vet1 e vet2 e retorna 1 se todos os elementos de vet3 forem encontrados nas duas outras listas. Caso contrário, ela retorna 0.
//
//Para usar a função, basta chamá-la passando os três vetores e as quantidades de elementos de cada um como argumentos:
//
//Copy code
//int quant1 = 5;
//int quant2 = 7;
//int quant3 = 4;
//int vet1[5] = {1, 2, 3, 4, 5};
//int vet2[7] = {1, 2, 3, 6, 7, 8, 9};
//int vet3[4] = {1, 2, 3, 5};
//
//int result = intersection(quant1, quant2, quant3, vet1, vet2, vet3);


Verificar Progressão
#include <stdbool.h>
#include <stdio.h>
//Implementar uma função que, dado um vetor com
//quant números inteiros, determine se a diferença entre
//o 1o e o 2o elementos é igual à diferença entre o 2o e o
//3o, e igual à diferença entre o 3o e o 4o, e assim
//sucessivamente, até a diferença entre o penúltimo e o
//último valores.
//Caso o vetor atenda ao critério apresentado, a função
//deverá retornar 1; caso contrário, 0.

// Retorna true se o vetor v tiver o tamanho n e a diferença entre cada par
// consecutivo de elementos for igual.
//
// Exemplo: se v = [10, 5, 0, -5], a função retornará true porque a
// diferença entre 10 e 5 é 5, a diferença entre 5 e 0 é 5 e a diferença entre
// 0 e -5 também é 5.
bool is_arithmetic_progression(int v[], int n) {
  // Verifica se o vetor tem pelo menos dois elementos.
  if (n < 2) {
    return false;
  }

  // Calcula a diferença entre o primeiro e o segundo elementos.
  int diff = v[1] - v[0];

  // Verifica se a diferença entre cada par consecutivo de elementos é igual.
  for (int i = 1; i < n - 1; i++) {
    if (v[i + 1] - v[i] != diff) {
      return false;
    }
  }

  // Se o código chegar até aqui, o vetor é uma progressão aritmética.
  return true;
}


 
 
 #include <stdio.h>
#define TAM 10
void combinar_vetores(int *vetA, int *vetB, int *vetC, int tamanhoA, int tamanhoB) {
  int i, j;
  
  // Primeiro elemento de vetC será o primeiro de vetA
  vetC[0] = vetA[0];
  
  // Segundo elemento de vetC será o último de vetB
  vetC[1] = vetB[tamanhoB - 1];
  
  // Iniciamos os contadores i e j em 1, para começar a percorrer
  // os vetores a partir do segundo elemento
  i = 1;
  j = 1;
  for (int k = 2; k < tamanhoA + tamanhoB; k++) {
    // Se o índice i for menor que o tamanho de vetA, adicionamos o elemento
    // na posição i em vetC e incrementamos i
    if (i < tamanhoA) {
      vetC[k] = vetA[i];
      i++;
    }
    
    // Se o índice j for menor que o tamanho de vetB, adicionamos o elemento
    // na posição j em vetC e incrementamos j
    if (j < tamanhoB) {
      vetC[k] = vetB[j];
      j++;
    }
  }
}
int exibirVetor(int vetor[],int tamanho){
	
	int i;
	
	for (i=0;i<tamanho;i++){
		
		printf("%d",vetor[i]);
		
	}
	
	
	
}
int main(){
	int vetC[TAM];
	int vetA[TAM] = {0,1,3,4,4,5,6,7,8,9}; 
	int vetB[TAM] = {5,4,7,3,8,5,6,7,8,9};
	
	combinar_vetores(vetA, vetB, vetC,TAM,TAM);
	exibirVetor(vetA,TAM);
	printf("\n");
	exibirVetor(vetB,TAM);
	printf("\n");
	exibirVetor(vetC,TAM);

	
}














Codificar uma função que, dado um vetor com quant
valores reais, altere os seus elementos da seguinte
forma:
− Se for a primeira posição, substitui-lo pelo
maior elemento do vetor;
− Se for a última posição, substitui-lo pelo
anterior;
− Se a posição for par, substitui-lo pela diferença
do anterior pelo seguinte;
− Se a posição for ímpar, diminuir uma unidade
de seu valor.Linguagem c sem utilizar stdbool

Para codificar essa função em C, você pode usar os seguintes passos:

Defina a função altera_vetor que recebe um vetor v e o tamanho n do vetor. Essa função deve retornar void, pois ela altera os elementos do vetor em vez de retornar um novo vetor.
Copy code
void altera_vetor(double v[], int n) {
    // Corpo da função
}
Dentro da função, crie uma variável maior que irá armazenar o maior valor do vetor. Inicialize maior com o primeiro elemento do vetor.
Copy code
void altera_vetor(double v[], int n) {
    double maior = v[0];

    // Corpo da função
}
Use um laço de repetição for para percorrer os elementos do vetor e atualizar o valor de maior caso encontre um elemento maior que ele.
Copy code
void altera_vetor(double v[], int n) {
    double maior = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    // Corpo da função
}
Agora, use um segundo laço de repetição for para percorrer os elementos do vetor novamente. Dentro desse laço, verifique se o índice i é par ou ímpar, e aplique as alterações nos elementos do vetor de acordo com as regras especificadas.
Copy code
void altera_vetor(double v[], int n) {
    double maior = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            // Se for a primeira posição, substitui-lo pelo
            // maior elemento do vetor
            v[i] = maior;
        } else if (i == n - 1) {
            // Se for a última posição, substitui-lo pelo
            // anterior
            v[i] = v[i - 1];
        } else if (i % 2 == 0) {
            // Se a posição for par, substitui-lo pela
            // diferença do anterior pelo seguinte
            v[i] = v[i - 1] - v[i + 1];
        } else {
            // Se a posição for ímpar, diminuir uma unidade
            // de seu val

///////////////////////////////////////////////////////

//Faça uma função que, dado um vetor de inteiros,
//desloque os valores das posições p1 a p2 n posições
//para a direita.
//Observação: caso não seja possível o deslocamento, a
//função deverá retornar 0; caso contrário, o deslocamento
//será realizado e o valor 1 retornado pela função.


int shift_right(int n, int *vector, int p1, int p2, int num_positions) {
  if (p1 < 0 || p2 >= n || p1 > p2) {
    // Verificar se os índices p1 e p2 são válidos
    return 0;
  }

  if (p2 + num_positions >= n) {
    // Verificar se é possível realizar o deslocamento
    return 0;
  }

  // Salvar os valores das posições p1 a p2 em uma
  // sequência temporária
  int temp[p2 - p1 + 1];
  for (int i = p1; i <= p2; i++) {
    temp[i - p1] = vector[i];
  }

  // Deslocar os valores para a direita
  for (int i = p2; i >= p1; i--) {
    vector[i + num_positions] = vector[i];
  }

  // Inserir os valores salvos na sequência temporária
  // nas novas posições
  for (int i = 0; i < p2 - p1 + 1; i++) {
    vector[p1 + i] = temp[i];
  }

  return 1;
}

//Nesta função, primeiro são verificados se os índices p1 e p2 são válidos e se é possível realizar o deslocamento para a direita. 
//Em seguida, os valores das posições p1 a p2 são salvos em uma sequência temporária. 
//Depois, os valores do vetor são deslocados para a direita a partir da posição p1. 
//Por fim, os valores salvos na sequência temporária são inseridos nas novas posições.
// Se não for possível realizar o deslocamento, a função retorna 0; caso contrário, retorna 1.



