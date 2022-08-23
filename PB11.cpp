#include<bits/stdc++.h>
using namespace std;

int  rec(int num)
{
    if(num==0||num==1)
    {

        return num;
    }
    else
    {
        return(rec(num-1) + (rec(num-2)));
    }


}

int main()
{

    int n;
    cin>>n;
    int i=1;

    while(i<=n)
    {

        cout<<rec(i)<<" ";

        i++;
    }



}
