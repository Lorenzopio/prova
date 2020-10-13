#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	float prezzo,sconto,totale;
	int quantita;
	char pagamento;
	
	cout<<"inserisci quantita'"<<endl;
	cin>>quantita;
	
	cout<<"inserisci prezzo"<<endl;
	cin>>prezzo;
	
	cout<<"contanti o rateali ?"<<endl;
	cin>>pagamento;
	
	totale=quantita*prezzo;
	
	if(pagamento=='c'){
		
		sconto=totale*0.10;
		totale=totale-sconto;
		
		cout<<"il prezzo totale e': "<<totale<<endl;
		
	}
	
	if (pagamento=='r'){
		
		sconto=totale*0.15;
		totale=totale+sconto;
		
		cout<<"il prezzo e': "<<totale<<endl;
		
	}
	
	if(pagamento!='r' && pagamento!='c'){
		
		cout<<"ERRORE"<<endl;
		
	}
	
}
