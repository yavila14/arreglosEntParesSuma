#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,n,suma;
	int e[30];
	n=2;
	cout <<"El arreglo enteros Pares es: \n" ;
	for(i=0;n<=20;i=i+1){
	    e[i]=n;
	    suma=suma+n;
		n=n+2;
	    cout <<e[i] <<"\n";
		}
		cout <<"La suma del arreglo es " << suma;
	return 0;
}
