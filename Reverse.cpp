/*
Write generic program to accept values and reverse the contents.
Input:10  20   30  10   30  40  10  40  10
Output:10  40   10  40   30  10  30  20  10
*/

#include<iostream>
using namespace std;

template<class T>
void Reverse(T arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=iSize-1;iCnt>=0;iCnt--)
    {
        cout<<arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    for(int i=0;i<9;i++)
    {
        cout<<arr[i];                 
    }
    Reverse(arr,9);

    float brr[]={10.1f,20.2f,30.3f,10.4f,30.5f,40.6f,10.6f,40.7f,10.4f};
    for(float i=0;i<9;i++)
    {
        cout<<brr[i];                 
    }
    Reverse(brr,9);
    
    return 0;

}