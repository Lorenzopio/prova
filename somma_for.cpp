#include<iostream>
#include<cstdlib>
using namespace std;
int main () {
	
	int i,num,n,somma=0,media;
	
	cout<<"quanti numeri vouoi inserire ? "<<endl;
	cin>>num;
	
	for(i=0;i<num;i++){
		
		cout<<"inserisci numero "<<endl;
		cin>>n;
		
		somma=somma+n;
		
	}
	
	
    media=somma/num;	

	cout<<"la somma dei numeri e' : "<<somma<<endl;
	
	cout<<"la media e' : "<<media<<endl;
}
