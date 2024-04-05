#include <iostream>
using namespace std;

//------------------------
const int N = 4;
using t_Nentier = int[N];

//-----------------------------
void remplir(t_Nentier &tNe)
{
    int i;
    int tmp;
    for (i = 0; i < N; i++)
    {
        cout << "donne i " << endl;
        cin >> tmp;
        while (tmp < 0)
        {
            cin >> tmp;
        }
        tNe[i] = tmp;
    }
}
//----------------------------------------------
void affiche_tab(t_Nentier &tNe)
{
    cout << "[";
    for (int i = 0; i < N - 1; i++)
    {
        cout << tNe[i] << ",";
    }
    cout << tNe[N - 1];
    cout << "]";
}
//---------------------------------------------
bool miroire(t_Nentier &tNe)
{
    int i;
    bool j;
    i = 0;
    while (i <= N && j)
    {
        i = i + 1;
        j = tNe[i] == tNe[N - i - 1];
    }
    return j;