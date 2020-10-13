#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int i,n,num,min;
	
	cout<<"quanti numeri voi inserire ?"<<endl;
	cin>>n;
	
	cout<<"inserisci numero"<<endl;
	cin>>min;
	
	for(i=1;i<n;i++){
		
		cout<<"inserisci numero"<<endl;
		cin>>num;
		
		if(num<min){
			
			min=num;
			
		}
		
	}
	
	cout<<"il minimo e' : "<<min<<endl;
}
