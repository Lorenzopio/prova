#include<iostream>
#include<cstdlib>
using namespace std;
int main (){
	
	int const POMODORI=100;
	int const PEPERONI=50;
	int pombuoni,pommorti,perditapom,pepbuoni,pepmorti,perditapep,perditatot;
	
	pombuoni=POMODORI*0.9;
	
	pommorti=POMODORI-pombuoni;
	
	perditapom=pommorti*1.20;
	
	pepbuoni=PEPERONI*0.80;
	
	pepmorti=PEPERONI-pepbuoni;
	
	perditapep=pepmorti*1.50;
	
	cout<<"la perdita dei pomodori e': "<<perditapom<<endl;
	cout<<"la perdita dei peperoni e':"<<perditapep<<endl;
	
	perditatot=perditapom+perditapep;
	
	cout<<"la perdita totale e' di :"<<perditatot<<endl;
	
}
