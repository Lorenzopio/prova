#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main (){
	
	const int N=20;
	
	int i,casuale,vet[N],somma=0,molt=1;    
	
	srand(time(NULL));
	
	for (i=0;i<N;i++){
		
		casuale=rand()%5+1;
		
		vet[i]=casuale;
		
	}
	
	cout<<endl;
	
	for(i=0;i<N;i++){
		
		cout<<vet[i]<<"  ";
		
	}
	
	cout<<endl;
	
	for(i=0;i<N;i++){
		
		if(i%2==0){
			
			somma=somma+vet[i];
			
		}
		
		if(i%2!=0){
			
			molt=molt*vet[i];
			
		}
		
	}
	
	cout<<endl;
	
	cout<<"la somma delle celle in posizione pari e' : "<<somma<<endl;
	
	cout<<endl;
	
	cout<<"la moltiplicazione celle in posizione dispari e' : "<<molt<<endl;
	
}
