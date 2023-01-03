#include<iostream>
using namespace std;

template<class T>
T Addition(T iNo1 ,T iNo2)
{
    T iAns;
    iAns=iNo1 + iNo2;
    return iAns;
}

int main()
{
    double a=11.9;
    double b=10.1;
    double dRet=0;
    dRet=Addition(a,b);
    cout<<"Addition is:"<<dRet<<endl;

    int x=11,y=10,iRet=0;
    iRet=Addition(x,y);
    cout<<"Addtion is:"<<iRet<<endl;

    float iNo1=11.11f,iNo2=10.4f,fRet=0;
    fRet=Addition(iNo1,iNo2);
    cout<<"Addtion is:"<<fRet<<endl;
    
    return 0;

}