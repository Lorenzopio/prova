#include<iostream>
#include<cstdlib>
using namespace std;
int main ()
{
	
	char lettera;
	
	cout<<"inserisci S,s o N,n"<<endl;
	cin>>lettera;
	
	if (lettera=='S' ||  lettera=='s'){
		
		cout<<"Si"<<endl;
		
	}
	
	if(lettera=='N' || lettera=='n'){
		
		cout<<"No"<<endl;
	}

	if (lettera!='S' && lettera!='s' && lettera!='N' && lettera!='n'){
		
		cout<<"Errore"<<endl;
		
	}
	
}
