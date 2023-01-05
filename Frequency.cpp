/*
Write a generic Program to accept N Values and count frequency of any Specific value.
Input:10  20  30  10 30  40  10 40  10
Value to check frequency:10
output:4                   
*/    

#include<iostream>
using namespace std;

template<class T>
T  Frequency(T Arr[],int iSize,T iValue)
{
    int iCnt=0;
    for(int i=0;i<iSize;i++)
    {
        if(Arr[i]==iValue)
        {
           iCnt=iCnt + 1;
        }
    }
    return iCnt;

}
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=Frequency(arr,9,10);
    printf("%d\n",iRet);

    float brr[]={10.1f,20.1f,30.5f,10.1f,30.3f,40.3f,10.1f,40.3f,10.5f};
    float fRet=Frequency(brr,9,10.1f);
    printf("%f\n",fRet);
    return 0;
}