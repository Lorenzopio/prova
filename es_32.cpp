#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	
	
	float voto1,voto2,voto3,voto4,media,somma;
	
	cout<<"inserisci voto"<<endl;
	cin>>voto1;
	
	cout<<"inserisci voto"<<endl;
	cin>>voto2;
	
	cout<<"inserisci voto"<<endl;
	cin>>voto3;
	
	cout<<"inserisci voto"<<endl;
	cin>>voto4;
	
	somma=voto1+voto2+voto3+voto4;
	media=somma/4;
	
	if(media>=6){
		
		cout<<"lo studente ha la media di: "<<media<<" e risulta sufficiente"<<endl;
		
	}
	
	if(media<6){
		
		cout<<"lo studente ha la media di: "<<media<<" e risulta insufficiente"<<endl;
		
		
	}
	
}
