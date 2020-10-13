#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main (){
	
	int casuale;
	
	srand(time(NULL));
	
	casuale=rand()%50+1;
	
	cout<<casuale;
	
	
}
