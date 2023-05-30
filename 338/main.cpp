#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int S=0,save=1;
    for (int i=1; i<=n; i++)
    {
        save=i;
        for (int j=1; j<i; j++)
            save*=i;
        S+=save;
    }

    cout<<"Rezultatul este "<<S;
    return 0;
}

