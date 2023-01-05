/*
Write a generic Program to accept N values and Search last occurence of any specific value.
Input:10,20,30,10,30,40,10,40,10
Value to Search:40
Output:8
*/

#include<iostream>
using namespace std;

template<class T>
T SearchLast(T arr[],int iSize,T No)
{
    int iOcc=0;
    int iCnt=0;
   
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]==No)
        {
            iOcc=iCnt;
        }
    }
   if(iOcc==-1)
   {
     return -1; 
   }
   else
   {
     return iOcc+1;
   }
    
}
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=SearchLast(arr,9,40);
    printf("%d\n",iRet);

    float brr[]={10.1f,20.2f,30.3f,10.1,30.5f,40.5f,10.6f,40.5f,30.3f};
    float fRet=SearchLast(brr,9,30.3f);
    printf("%f\n",fRet);
    return 0;
}