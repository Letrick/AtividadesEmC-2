#include<iostream>
//Exercicio 4 - Com DO 
int main () {
int contagem = 1;
		
		do{
			if( contagem % 5 == 0)
				std::cout << contagem << "\n";
				contagem++;
		}while(contagem <= 500);
		
	}