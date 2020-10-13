#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int const NUMERI=10;
	
	int i,num,contp=0,contd=0;
	
	for(i=0;i<NUMERI;i++){
		
		cout<<"inserisci numero "<<endl;
		cin>>num;
		
		if (num%2==0){
			
			contp++;
			
		}
		
		if(num%2!=0){
			
			contd++;
			
		}
	}
	
	cout<<"i numeri pari sono : "<<contp<<endl;
	cout<<"i numneri dispari sono :"<<contd<<endl;
}
