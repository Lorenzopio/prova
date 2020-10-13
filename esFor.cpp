#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int i,n,somma=0,media;
	
	
	
	for (i=0; i<5; i++){
		
		cout<<"inserisci numero"<<endl;
		cin>>n;
		
		somma=somma+n;
		
	}
	
	media=somma/5;
	
	cout<<"la somma e'"<<somma<<endl;
	
	cout<<"la media e': "<<media<<endl;
	
}
