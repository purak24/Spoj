#include <iostream>
using namespace std;
int main()
{
    int p;
    cin>>p;
    while(p--)
    {
        int n;
        cin>>n;
        int z=0;
        for(int i = 5; i <= n; i*=5)
            z += n/i;
        cout<<z<<endl;
    }
}
