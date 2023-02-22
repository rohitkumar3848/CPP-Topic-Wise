#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    //Function Objects(Functor): Function Wrapped in class so that it is available like an object.
    int arr[]={1,23,43,2,12,43,11};
    //sort(arr,arr+7);
    sort(arr,arr+7),greater<int>();
    for(int i=0; i<7;i++)
    {
        cout<<arr[i]<<endl;
    } 
    return 0;
}