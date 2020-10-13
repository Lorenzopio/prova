#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	char lettere[5],carattere;
	int i;
	
	for(i=0;i<5;i++){
		
		cout<<"inserisci lettera"<<endl;
		cin>>carattere;
		
		lettere[i]=carattere;
		
	}
	
	for(i=0;i<5;i++){
		
		cout<<"  "<<lettere[i];
		
	}	
	
	
	cout<<"\n";
	
	for(i=5;i>=0;i--){
		
		cout<<""<<lettere[i];
		
	}
	
}
