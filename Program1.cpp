//WAP To create 10 element array and print it reverse.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[10];
    int i;
                                                             // 1 2 3 4 5 6 7 8 9 10
                                                             // 10 9 8 7 6 5 4 3 2 1
    cout<<"Enter the Elements of array :\n";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements are :";
    for(i=0;i<10;i++)
    {
        cout<<"\n"<<arr[i];
    }
    cout<<"\nReversed Elements are :";
    for(i=9;i>=0;i--)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}