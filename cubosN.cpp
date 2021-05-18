#include <iostream>
#include <cmath>

using namespace std;

int* charbychar(int n);
int cubes(int n);

int main(){

	int num = 0;
	for(int i = 100; i <=999; i++){	
		num=0;	
	for(int j=0; j<=2; j++){
		int* nArr = charbychar(i);
		num += pow(nArr[j], 3);
	}
		if(num == i){
			cout<<i<<" : "<<num<<endl;
		}
	}
	return 0;
}
//Divide y venceras - Divide el numero por caracteres y lo introduce en un arreglo
int* charbychar(int n){
	int counter,i=0;
	//La vida útil de una variable estática es a lo largo del programa.
	static int num[3]; 
	while(n>0){	
		counter = n%10;
		n /= 10;
		num[i] = counter;
		i++;
	}	
	return num;
}




