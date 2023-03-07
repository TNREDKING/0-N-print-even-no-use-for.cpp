#include<iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter no to print 0 to even no's print:\n";
    cin>>N;
    for(int i=0; i<=N; i++)
    {
        if(i%2==0)
        {
            cout<< "\n";
            cout<<i;

        }
    }
    return 0;
}