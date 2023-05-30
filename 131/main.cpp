#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream in("sortcif2.in");
    int n;
    in>>n;
    vector<long long int>aux;
    vector<int>cif;
    for(int i=0;i<n;i++) {
        int temp;
        in>>temp;
        aux.push_back(temp);
        int u;
        while(temp!=0) {
            u=temp%10;
            temp/=10;
        }
        cif.push_back(u);
    }
    for(int i=0;i<cif.size();i++) {
        for(int j=i+1;j<cif.size();j++) {
            if(cif[i]>cif[j] && i!=j) {
                long long int t=aux[i];
                aux[i]=aux[j];
                aux[j]=t;
                t=cif[i];
                cif[i]=cif[j];
                cif[j]=t;
            }
        }
    }
    ofstream out("sortcif2.out");
    for(int i=0;i<n;i++) {
        out<<aux[i]<<" ";
    }
    return 0;
}
