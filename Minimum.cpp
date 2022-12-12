//Write a generic program to accept N numbers from user and return smallest value.

#include<iostream>
using namespace std;

template<class T>

T Minimum(T Arr[],int iNo)
{
    int iCnt=0;
    int Min=Arr[0];
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
          if(Arr[iCnt]<Min)
          {
             Min=Arr[iCnt];
          }
    }
    return Min;
}

//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int Arr[4]={55,99,33,44};
    int iRet=Minimum(Arr,4);
    cout<<"Minimum element is:"<<iRet<<"\n";

    char Crr[5]={'a','b','z','e','f'};
    char cRet=Minimum(Crr,5);
    cout<<"Minimum character is:"<<cRet<<"\n";

    return 0;
}