#include<iostream>
using namespace std;

template<class T>
class MyArrayX
{
    public:
    void Display(T Arr[],int iNo);
};

template<class T>
void MyArrayX<T>:: Display(T Arr[],int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        cout<<Arr[iCnt]<<endl;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    MyArrayX<int> obj1;
    int Data[]={10,20,30,40};  //static Array
    obj1.Display(Data,4);

    MyArrayX<char>obj2;
    char Datac[]={'a','b','c','d','e'};  //static Array
    obj2.Display(Datac,5);

    return 0;

}