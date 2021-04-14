#include<iostream>
using namespace std;
//Method-1: Using Left Operator
bool if_kth_bit_is_set_1(int N,int k)
{
    if(1<<(k-1)&N)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//Method-2: Using Right operator
bool if_kth_bit_is_set_2(int N,int k)
{
    if(N>>(k-1)&1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//Main function
int main()
{
    int N;
    cout<<"Enter Number of which k-th bit is to be checked:";
    cin>>N;
    int k;
    cout<<"Enter value of k:";
    cin>>k;
    cout<<"Output Using Left Shift Operator\n";
    if(if_kth_bit_is_set_1(N,k))
    {
        cout<<"k-th bit is Set"<<endl;
    }
    else
    {
        cout<<"k-th bit is not Set"<<endl;
    }
    cout<<"Output Using Right Shift Operator\n";
    if(if_kth_bit_is_set_2(N,k))
    {
        cout<<"k-th bit is Set"<<endl;
    }
    else
    {
        cout<<"k-th bit is not Set"<<endl;
    }
    return 0;
}
