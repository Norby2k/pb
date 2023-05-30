#include <iostream>
using namespace std;
long long int p,k;

int main()
{
    cin>>p>>k;
    long long int j=k/2;
    if(k%2)
        cout<<p+j*30;
    else
        cout<<p+j*10+(j-1)*20;
    return 0;
}
