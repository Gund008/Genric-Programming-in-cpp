//Write a generic program to accept N numbers from user and return summation of  elements from array.
\
#include<iostream>
using namespace std;

template<class T>
int SumEven(T *Brr,int iSize)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((*Brr % 2)==0)
        {
            iSum=iSum + (*Brr);
        }
        Brr++;
    }
    return iSum;
}
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[6]={11,22,44,5,6,88};
    int iRet=SumEven(Arr,6);  //(100,6)
    cout<<"Summation of Even Elements:"<<iRet<<endl;

    char Brr[5]={'A','Y','G','K','N'};
    int cRet=SumEven(Brr,5);  
    cout<<"Summation of Even Elements:"<<cRet<<endl;

    return 0;
}