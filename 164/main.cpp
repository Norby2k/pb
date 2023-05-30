#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream in("halfsort2.in");
    int n;
    in>>n;
    vector<int>par;
    vector<int>impar;
    for(int i=1;i<=n;i++) {
        int temp;
        in>>temp;
        if(i%2==0) {
            par.push_back(temp);
        }
        else {
            impar.push_back(temp);
        }
    }
    int hossz=par.size();
    for(int i=0;i<hossz;i++) {
        for(int j=i+1;j<hossz;j++) {
            if(par[i]>par[j] && i!=j) {
                int p=par[i];
                par[i]=par[j];
                par[j]=p;
            }
            if(impar[i]<impar[j] && i!=j) {
                int p=impar[i];
                impar[i]=impar[j];
                impar[j]=p;
            }
        }
    }
    ofstream out("halfsort2.out");
    for(int i=0;i<hossz;i++) {
        out<<impar[i]<<" "<<par[i]<<" ";
    }
    return 0;
}
