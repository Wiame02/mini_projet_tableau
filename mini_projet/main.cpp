#include <iostream>
using namespace std;

//------------------------
const int N = 4;
using t_Nentier = int [N];

//-----------------------------
// une proc ́edure remplir qui permet la saisie de N entiers positifs par l’utilisateur. Ces
//derniers sont ensuite sauvegardés dans un tableau passé en paramétre de cette procedure. 
void remplir ( t_Nentier & tNe){
    int i; 
    int tmp;
     for (i =0 ; i  < N ;i++) 
    {
         cout << "donne i " << endl;
         cin >> tmp;
        while (tmp < 0 ) 
        {
             cin >> tmp ;
        }
         tNe [i] = tmp ;
    }
}
//----------------------------------------------
// une procédure affiche_tab qui affiche tous les  ́eléments du tableau passé en
//paramétre de cette procédure.
void affiche_tab (t_Nentier & tNe){
    cout << "[";
    for (int i=0 ; i < N-1; i++)
    {
        cout << tNe[i] << "," ;
    }
    cout << tNe[N-1];
    cout << "]" ;
}
//---------------------------------------------
// une fonction miroir qui permet de savoir si le tableau donné est symétrique ou pas.
bool miroire (t_Nentier & tNe) {
    int i;
    bool j;
    i=0 ;
    while (i<= N &&  j )
    {
        i=i+1;
        j=tNe[i]== tNe[N-i-1];
    }
    return j;
} 
//-------------------------------------------
// une procédure inv_tab qui inverse les  ́eléments du tableau
void inv_tab(t_Nentier & tNe){
int i;
int tmp;
for (i=0 ; i < N/2 ; i++)
    {
    tmp = tNe[i];
    tNe[i] =tNe[N-1-i];
    tNe[N-1-i] = tmp;
    }
}
//-----------------------------------------
// fonction par_tab qui v ́erifie si un tableau donné est paritair
bool par_tab (t_Nentier & tNe)
{
     if (sizeof(tNe) % 2 ==0) 
   {
       return true; //rend vrai si la table est pair
   } 
   else
   {
       return false; //rend faux si la table impaire

   }

} 
//-------------------------------------------------
//procédure trie_tab qui trie les  ́eléments du tableau donné de manière croissante.
void tri_tab(t_Nentier & tNe){
int i;
int j;
int R ; 
    for (i=0 ; i < N ;i++)
    {
        for (j=i +1 ; j < N ;j++)
        {
            if (tNe[i] > tNe[j])
            {   
             R = tNe[i] ;
             tNe[i]= tNe[j];
            tNe[j]= R ;
            } 
        }
    } 
}

//-----------------------------------------------
// une fonction recherche_MD qui permet de trouver un  ́elément (ou des  ́eléments)
//médians du tableau 
float recherche_MD(t_Nentier tNe){
    if (N % 2 == 0 ) 
   {
       return (tNe[N / 2] + tNe[ N/ 2 -1]) / 2.0;
   } 
    else
   {
       return tNe[N / 2] ;
   } 
}

//-------------------------------------------------
int main () {
    t_Nentier tNe;
    remplir(tNe);
    miroire (tNe);
    inv_tab (tNe); 
    par_tab (tNe);
    tri_tab (tNe);
    recherche_MD (tNe);
    affiche_tab (tNe );

   
}







