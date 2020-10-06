#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int const PLATEA=150;
	int const GALLERIA=100;
	int platea,galleria,postip,postig,incassop,incassog,incassot;
	
	cout<<"biglietti venduti platea"<<endl;
	cin>>platea;
	
	cout<<"biglietti venduti galleria"<<endl;
	cin>>galleria;
	
	postip=PLATEA-platea;
	postig=GALLERIA-galleria;
	
	cout<<"i posti rimanenti in platea sono: "<<postip<<endl;
	cout<<"i posti rimanenti in galleria sono: "<<postig<<endl;
	
	incassop=platea*40;
	incassog=galleria*30;
	
	incassot=incassop+incassog;
	
	cout<<"l'incasso totale e' di: "<<incassot<<endl;
	
}
