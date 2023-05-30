#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("2prim.in");
    ofstream out("2prim.out");
    int kontor=0;
    int n;
    in>>n;
    for(int i=0;i<n;i++) {
        int temp;
        in>>temp;
        temp%=100;
        bool prim=true;
        if(temp<2) {
            prim=false;
        }
        if(temp%2==0 && temp!=2) {
            prim=false;
        }
        if(prim==true) {
            for(int d=2;d*d<=temp;d++) {
                if(temp%d==0) {
                    prim=false;
                }
            }
        }
        if(prim==true) {
            kontor++;
        }
    }
    out<<kontor;
    return 0;
}
