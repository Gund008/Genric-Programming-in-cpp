/*
Write a generic program which accept N values and search the first occurence of any specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40
Output : 6
*/

#include<iostream>
using namespace std;

template<class T>                           //template class

       T  frequency(T Arr[],int iSize,T iNo)   // template function 
       {
              int icnt=0;
   
             for(icnt=0;icnt<iSize;icnt++)
              {
                 if(Arr[icnt]==iNo)
                 {
                    icnt++;
                    break;
                 }
              }
              return icnt;
       }     


//////////////////////////////////////////////////////////////////////////////////////

int main()
{
   
    int Arr[9]={10,20,30,10,30,40,10,40,10};
 
    int iRet=frequency(Arr,9,40);
    cout<<"Frequency:"<<iRet<<"\n";

    char Brr[6]={'A','B','C','D','E','F'};
    char cRet=frequency(Brr,6,'E');
    cout<<"Frequency:"<<cRet<<"\n";

    double Crr[5]={1.1,1.2,1.3,1.4,1.5};
    double dRet=frequency(Crr,5,1.4);
    cout<<"Frequency:"<<dRet<<"\n";

    return 0;
}