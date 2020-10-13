#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main (){
	
	int casuale,i;
	
	srand(time(NULL));
	
	for(i=0;i<20;i++){
		
		casuale=rand()%50+1;
		
		cout<<casuale<<endl;
	
	}
	
	
}
