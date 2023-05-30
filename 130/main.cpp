#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("sortcif.in");
    int n;
    in>>n;
    vector<long long int>aux;
    vector<int>cif;
    for(int i=0;i<n;i++) {
        int temp;
        in>>temp;
        aux.push_back(temp);
        int kontor=0;
        while(temp!=0) {
            kontor+=temp%10;
            temp/=10;
        }
        cif.push_back(kontor);
    }
    int hossz=aux.size();
    for(int i=0;i<hossz;i++) {
        for(int j=i+1;j<hossz;j++) {
            if(cif[i]>cif[j] && i!=j) {
                long long int u=cif[i];
                cif[i]=cif[j];
                cif[j]=u;
                u=aux[i];
                aux[i]=aux[j];
                aux[j]=u;
            }
        }
    }
    ofstream out("sortcif.out");
    for(int i=0;i<hossz;i++) {
        out<<aux[i]<<" ";
    }
    return 0;
}
