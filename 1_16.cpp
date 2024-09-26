#include <iostream>
using namespace std;

int main()
{
    float n1,n2, ans;
    cout<<"enter the numbers 1 and 2: ";
    cin>>n1>>n2;
    try
    {
        if(n2==0)
        {
            throw n2;
        }
        else
        {
            ans = n1/n2;
            cout<<"answer = "<<ans<<endl;
        }
    }
    catch( float num)
    {
        cout<<"ERROR: division by "<<num<<endl;
    }
}