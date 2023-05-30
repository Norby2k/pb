#include <iostream>

using namespace std;

int main()
{
    int n,a,max=10,b,cifmin=0;
    cin>>n;
    for (int i=1;i<=n;i++) {
        cin>>a;
        b=a;
        while (b>=10) b/=10;
        if (b==max && a>cifmin) cifmin=a;
        if (b<max) max=b;

    }
    cout<<cifmin;

    return 0;
}
