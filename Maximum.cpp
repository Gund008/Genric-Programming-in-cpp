//Write a generic program to accept N numbers from user and return largest value.


#include<iostream>
using namespace std;

template<class T>
T largest(T Brr[],int iNo)
{
    int i=0;
    int iMax=Brr[0];
    for(i=0;i<iNo;i++)
    {
        if(Brr[i]>iMax)
        {
           iMax=Brr[i];
        }
    }
    return iMax;
    
}
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int Arr[5]={11,2,3,44,5};  //static Array
    int iRet=largest(Arr,5);
    cout<<"Largest element is:"<<iRet<<"\n";
    
    float Brr[5]={1.1,2,3,4.4,5};  //static Array
    int fRet=largest(Arr,5);
    cout<<"Largest element is:"<<fRet<<"\n";

    char Crr[4]={'W','A','M','Y'};
    char cRet=largest(Crr,4);
    cout<<"Largest Character is:"<<cRet<<"\n";

    return 0;
}