#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin>>n;
        int turn=0;
        while(n!=1)
        {
            if((n & (n-1))==0)
            n/=2;
            else
            {
                int res = 1; 
                for (int j=63; j>0; j--) 
                { 
                    int curr = 1 << j; 
                    if ((curr & n)!=0) 
                    { 
                    res = curr;
                    break;} 
                    //cout<<curr<<" ";
                }
                n-=res;
            }
            turn++;
            //cout<<n<<" ";
        }
        if(turn%2 != 0)
        cout<<"Louise\n";
        else
        cout<<"Richard\n";
    }
    return 0;
}
