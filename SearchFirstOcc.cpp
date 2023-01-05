/*
Write generic program to accept N values and search first Occurence of any specific value
Input:10,20,30,10 30,40,10,40,10
Value to Search:40
Output:6
*/

#include<iostream>
using namespace std;

template<class T>
T SearchFirst(T arr[],int iSize,T No)
{
    int iOcc=0;
    int iCnt=0;
   
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(arr[iCnt]==No)
        {
            iOcc=iCnt;
            break;
        }
    }
    return iOcc+1;
}
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[]={10,20,30,10,30,40,10,40,10};
    int iRet=SearchFirst(arr,9,40);
    printf("%d\n",iRet);

    float brr[]={10.1f,20.2f,30.3,10.1,30.5f,40.5f,10.6f,40.5f,10.2f};
    float fRet=SearchFirst(brr,9,40.5f);
    printf("%f\n",fRet);
    return 0;
}