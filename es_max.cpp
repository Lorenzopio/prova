#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int i,num,n,max;
	
	
	cout<<"quante volte vuoi inserire un numero : "<<endl;
	cin>>num;
	
	cout<<"inserisci numero"<<endl;
	cin>>max;
	
	for(i=1;i<num;i++){
		
		cout<<"inserisci numero "<<endl;
		cin>>n;
		
		if(n>max){
			
			max=n;
			
		}
			
	}
	
	cout<<"il masssimo e' : "<<max<<endl;
	
}
