#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	float maglietta,sconto,scontot;
	
	cout<<"inserisci costo maglietta"<<endl;
	cin>>maglietta;
	
	sconto=maglietta*0.15;
	
	scontot=maglietta-sconto;
	
	cout<<"il costo sara di: "<<scontot<<endl;
	
	
}
