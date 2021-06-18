 #include <iostream>
  //Exercicio 6 - DO - WHILE

int main (){


int numImpar = 1;
		
		do{
			if( numImpar % 2 != 0)
				std::cout << numImpar << "\n";
				numImpar++;
		}while(numImpar <= 100);
}