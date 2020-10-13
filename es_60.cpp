#include<iostream>
#include<cstdlib>
using namespace std;
int main () {
	
	int const ANNOC=2020;
	
	int i,anno,eta,contp=0,contm=0;
	
	for(i=0;i<5;i++){
		
		cout<<"inserisci anno di nascita "<<endl;
		cin>>anno;
		
		eta=ANNOC-anno;
		
		if(eta>=65){
			
			contp++;
			
		}
		
		if(eta<18){
			
			contm++;
			
		}
		
	}
	
	cout<<"i dipendenti pensionati sono : "<<contp<<endl;
	
	cout<<"i dipendenti minorenni sono : "<<contm<<endl;
	
}

