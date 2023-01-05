//Write a genric program to Accept N values from user and return Addtion of that values.

#include<iostream>
using namespace std;

template<class T>
T AddN(T Arr[],int Size)
{
    T Sum;
    int iCnt=0;
   
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        Sum=Sum + Arr[iCnt];
    }
    return Sum;
}
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int arr[]={10,20,30,40,50};
    int iRet=AddN(arr,5);
    printf("%d\n",iRet);
   
    float brr[]={10.0f,3.7f,9.8f,8.7f};
    float fRet= AddN(brr,4);
    printf("%f\n",fRet);
    
    return 0;

}