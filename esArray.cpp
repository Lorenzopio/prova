#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int vet[5],i,numero;
	
	for (i=0 ; i<5; i++){
		
		cout<<"inserisci numero"<<endl;
		cin>>numero;
		
		vet[i]=numero;
		
	}
	
	for (i=0;i<5;i++){
		
		cout<<vet[i] <<"  ";
		
	}
}
