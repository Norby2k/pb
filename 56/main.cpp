#include <iostream>

using namespace std;

int main()
{
    long long temp;
    long long int C=0; //kontor
    cin>>temp;
    if(temp!=0) {
        long long n=1;
        while(n!=0) {
            cin>>n;
            if(n<0) {
                n=-n;
            }
            if(n==0) {
                break;
            }
            if(temp%10==n%10) {
                C++;
            }
            temp=n;
        }
    }
    cout<<C;
    return 0;
}
