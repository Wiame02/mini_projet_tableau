#include <iostream>
using namespace std;

//------------------------
const int N = 4;
using t_Nentier = int [N];

//-----------------------------
void remplir ( t_Nentier & tNe){
    int i; 
    int tmp;
     for (i =0 ; i <= 3; i++) {
         cout << "donne i " << endl;
         cin >> tmp;
            while (tmp < 0 ) {
                cin >> tmp ;
            }
         tNe [i] = tmp ;
     }
}
//----------------------------------------------
void affiche_tab (t_Nentier & tNe){
    cout << "[";
    for (int i=0 ; i< N-1; i++){
        cout << tNe[i] << "," ;
    }
    cout << tNe[N-1];
    cout << "]" ;
}
//-----------------------------------
bool miroire (t_Nentier & tNe) {
    int i;
    int j;
    while (i<= N and tNe[i]== N-i){
        i=i+1;
    }
    j=tNe[i]=N-i;
    return j;
} 
//--------------------------------------
//-------------------------------------------
void inv_tab (t_Nentier & tNe){
int i;
int tmp;
for (i=0 ; N/2;){
    tmp = tNe[i];
    tNe[i] =tNe[N-1-i];
    tNe[N-1-i] = tmp;
    }
}
//-----------------------------------------
int main (){
    t_Nentier (tNe) ;
    remplir (tNe) ;
    inv_tab (tNe) ;
    affiche_tab (tNe) ;
    
    
}
//-----------------------------------
