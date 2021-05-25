//Fractional Knapsack Code
#include<iostream>
#include<utility>//for pair
#include <algorithm>//for sort
using namespace std;
bool myCmp(pair<int,int> a,pair<int,int> b)
{
    return ((double)a.second/a.first)>((double)b.second/b.first);
}
double knapsack(pair<int,int> arr[],int n, int capacity)
{
    double res=0.0,rem_capacity=capacity;
    sort(arr, arr+n, myCmp);
    for(int i=0;i<=n;i++){
        if(arr[i].first<=rem_capacity){
            rem_capacity-=arr[i].first;
            res+=arr[i].second;
        }else{
            res+=arr[i].second*(rem_capacity/arr[i].first);
            break;
        }
    }
    return res;
}
int main()
{
    pair<int,int> arr[]={make_pair(50,600),make_pair(20,500),make_pair(30,400)};
    int n=3;
    double capacity=70;
    double res=knapsack(arr,n,capacity);
    cout<<res;
    return 0;
}
