#include<iostream>
using namespace std;
//Method 1:Naive Method
bool isPowerOf2_1(int N)
{
    if(N==0)
    {
        return false;
    }
    int dividend=2;
    while(N!=1)
    {
        if(N%2!=0)
        {
            return false;
        }
        N=N/2;
    }
    return true;
}
//Method 2:Based on the fact that Binary Representation of any power of 2 has only one set bit
//Therefore Using Brian Kerningam's Algorithm to count total set bits
bool isPowerOf2_2(int n)
{
    if(n==0)
    {
        return false;
    }
    int bit_count=0;
    while(n>0)
    {
        n=n&(n-1);
        bit_count++;
    }
    if(bit_count==1)
    {
        return true;
    }else{
        return false;
    }
}
//Method 3:Using Brain Kerningam's Algorithms Idea to write one line solution
bool isPowerOf2_3(int n)
{
    if(n==0)
    {
        return false;
    }
    return !(n&n-1);
}

int main()
{
    int N=67;

    cout<<"By method 1"<<endl;
    if(isPowerOf2_1(N))
    {
        cout<<"Yes "<<N<<" is power of 2"<<endl;
    }else{
        cout<<N<<" is not the power of 2"<<endl;
    }

    cout<<"By method 2(Better)"<<endl;
    if(isPowerOf2_2(N))
    {
        cout<<"Yes "<<N<<" is power of 2"<<endl;
    }else{
        cout<<N<<" is not the power of 2"<<endl;
    }

    cout<<"By method 3(Best)"<<endl;
    if(isPowerOf2_3(N))
    {
        cout<<"Yes "<<N<<" is power of 2"<<endl;
    }else{
        cout<<N<<" is not the power of 2"<<endl;
    }
    return 0;
}
