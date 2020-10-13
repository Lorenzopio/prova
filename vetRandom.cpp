#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main (){
	
	int vet[40000],i,casuale;
	
	srand(time(NULL));
	
	for(i=0;i<40000;i++){
		
		casuale=rand()%50+1;
		
		vet[i]=casuale;
		
	}
	
	for(i=0;i<40000;i++){
		
		cout<<vet[i]<<"  ";
		
	}
	
	
	
	
	
}
