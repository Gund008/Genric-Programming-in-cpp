#include<iostream>
using namespace std;

template<class T>
class MyArray
{
    public:
    T Addtion(T ,T);
};

template<class T>
T MyArray<T>::Addtion(T i,T j)
{
    T Ans;
    Ans=i+j;
    return Ans;
}
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    MyArray<int> obj1;
    int a=11,b=10;
    int iRet=obj1.Addtion(a,b);
    cout<<iRet<<endl;

    MyArray<float> obj2;
    float x=11.2f,y=11.3f;
    float fRet=obj2.Summation(x,y);
    cout<<fRet<<endl;

    return 0;

}