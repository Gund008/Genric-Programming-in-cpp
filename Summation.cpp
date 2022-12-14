//Write a generic program to accept N numbers from user and return summation of all Array elements.

#include<iostream>
using namespace std;

template<class T>
int Summation(T *iValue,int iSize)
{
    int iSum=0;
    int i=0;
    for(i=0;i<iSize;i++) //travl Array
    {
        iSum=iSum + (*iValue);
        iValue++;    //pointer Airthematic
    }
    return iSum;
}

//////////////////////////////////////////////////////////
int main()
{
    int Arr[5]={1,2,3,4,5};  //static Array
    int iRet=Summation(Arr,5);
    cout<<"Summation of Array elements:"<<iRet<<endl;

    char Crr[6]={'a','b','n','f','r'};
    int cRet=Summation(Crr,6);
    cout<<"Summation of Array elements:"<<cRet<<endl;

    return 0;
}