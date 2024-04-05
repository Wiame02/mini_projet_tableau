#include<iostream>
using namespace std;


using t_e = int[5];
//---------------------------------
int main (){
 t_e tableau;
tableau[0]=1;
tableau[1]=2;
tableau[2]=3;
tableau[3]=4;
tableau[4]=5 ;
int x ;
x= sizeof(tableau);
cout << x/7 << endl ;
cout << tableau[x] <<endl;

} 
