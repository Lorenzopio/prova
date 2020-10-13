#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int const ALL=5;
	
	int i,eta,contf=0,contm=0,sommam=0,sommaf=0,mediaf,mediam;
	
	char sesso;
	
	for(i=0;i<ALL;i++){
		
		cout<<"inserisci sesso"<<endl;
		cin>>sesso;
		
		cout<<"eta"<<endl;
		cin>>eta;
		
		if (sesso=='F'){
			
			contf++;
			
			sommaf=sommaf+eta;
		}
		
		if (sesso=='M'){
			
			contm++;
			
			sommam=sommam+eta;
			
		}
		
	}
	
	mediaf=sommaf/contf;
	
	mediam=sommam/contm;
	
	cout<<"la media dell'eta dei maschi e : " <<mediam<<endl;
	cout<<"la media dell'eta delle femmine e' : "<<mediaf<<endl;
	
}
