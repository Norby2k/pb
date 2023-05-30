#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> pie;
    int maxi=0;
    for(int i=0;i<n;i++) {
        int temp;
        cin>>temp;
        pie.push_back(temp);
        if(temp>maxi) {
            maxi=temp;
        }
    }
    vector<int> aux;
    int a=0,b=1,c=0;
    aux.push_back(a);
    aux.push_back(b);
    while(c<maxi) {
        c=a+b;
        a=b;
        b=c;
        aux.push_back(c);
    }
    for(int i=0;i<n;i++) {
        bool k=false;
        int hossz=aux.size();
        for(int j=0;j<hossz;j++) {
            if(pie[i]==aux[j]) {
                k=true;
                break;
            }
        }
        if(k==true) {
            cout<<"DA"<<endl;
        }
        else {
            cout<<"NU"<<endl;
        }
    }
    return 0;
}
