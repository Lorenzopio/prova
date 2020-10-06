#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int ora1,min1,sec1,ora2,min2,sec2,somma1,somma2,differenza;
	
	cout<<"inserisci ora"<<endl;
	cin>>ora1;
	
	cout<<"inserisci minuti"<<endl;
	cin>>min1;
	
	cout<<"inserisci secondi"<<endl;
	cin>>sec1;
	
	cout<<"inserisci ora"<<endl;
	cin>>ora2;
	
	cout<<"inserisci minuti"<<endl;
	cin>>min2;
	
	cout<<"inserisci secondi"<<endl;
	cin>>sec2;
	
	somma1=(ora1*3600)+(min1*60)+sec1;

	somma2=(ora2*3600)+(min2*60)+sec2;
	
	differenza=somma1-somma2;
	
	cout<<"la differenza di secondi e':"<<differenza<<endl;
	
}
