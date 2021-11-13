#include <iostream>

using namespace std;
int n,d,nr;

int main()
{
    cin>>n;

    for(d=2;d<=n/2;d++)
    {if(n%d==0)
           nr++;}
           if(nr==0)
    cout<<"Numarul este prim";
else
    cout<<"Numarul nu este prim";

    return 0;
}
