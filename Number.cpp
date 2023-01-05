/*
Write a generic Program which accept one value and one Number from user .print that value that Number of Times on Screen.
Input: M   7
Output: M  M  M  M  M  M  M

Input: 11 3
Output:11  11   11

Input:3.7  6
Output:3.7   3.7    3.7   3.7    3.7   3.7
*/

#include<iostream>
using namespace std;

template<class T>
class NumberX
{
    public:
    void Display(T,int);
};

template<class T>
void NumberX<T>:: Display(T Value,int iSize)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iSize;iCnt++)
    {
       cout<<Value<<"\t";
    }
    cout<<endl;
}
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    NumberX<char> nobj1;
    nobj1.Display('M',7);
    
    NumberX<float> nobj2;
    nobj2.Display(11,3);

    NumberX<double> nobj3;
    nobj3.Display(3.7,6);

    return 0;

}