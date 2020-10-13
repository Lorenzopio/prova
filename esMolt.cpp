#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int molt=1,i,num,n;
	
	cout<<"quanti numeri vuoi inserire ? "<<endl;
	cin>>num;
	
	for(i=0 ; i<num ;i++){
		
		cout<<"inserisci numero"<<endl;
		cin>>n;
		
		molt=molt*n;
		
	}
	
	cout<<"la moltiplicazione e': "<<molt<<endl;
}
