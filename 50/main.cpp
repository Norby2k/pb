#include <iostream>
using namespace std;
int main()
{
    long long n,i,S=0,p=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p*=i; S+=p;
    }
    cout<<"Rezultatul este"<<" "<<S;
}
