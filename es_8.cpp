#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int prov1,prov2,prov3,media,somma;
	
	cout<<"inserisci primo voto"<<endl;
    cin>>prov1;
	
	cout<<"inserisci secondo voto"<<endl;
	cin>>prov2;
	
	cout<<"inserisci terzo voto"<<endl;
	cin>>prov3;
	
	somma=prov1+prov2+prov3;
	
	media=somma/3;
	
	cout<<"la media e': "<<media<<endl;	
}
