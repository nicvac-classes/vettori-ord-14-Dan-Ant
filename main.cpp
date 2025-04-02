#include <iostream>
#include <vector>
using namespace std;

int main() {
int i,j,n;
string s;
float t;
bool scambio;
cout << "Quanti studenti ci sono?" << endl;
cin >> n;
float voti[n];
string nomi[n];
i=0;
while (i<n)
{
    cout << "Nome studente" << endl;
    cin>> nomi[n];
    cout << "Voto studente" << endl;
    cin >> voti[n];
    i=i+1;
}
i=0;
scambio=true;
while (i<=n-1 and scambio)
{
    j=0;
    scambio=false;
    while(j<=(n-2)-i)
    {
        if (voti[j]>voti[j+1])
        {
            t=voti[j];
            voti[j]=voti[j+1];
            voti[j+1]=t;
            s=nomi[j];
            nomi[j]=nomi[j+1];
            nomi[j+1]=s;
            scambio=true;
        }
        j=j+1;
    }
    i=i+1;
}
i=0;
while (i<n)
{
    cout << nomi[i] << " " << voti[i];
    i=i+1;
}
}


