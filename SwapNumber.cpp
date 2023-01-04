#include<iostream>
using namespace std;

template<class T>
class SwapX
{
    public:
    void Swap(T &x,T &y);
};

template<class T>
void SwapX<T>::Swap(T &x, T &y)
{
    T  temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    SwapX<int> obj1;
    int a=11,b=10;
    cout<<"Value of a"<<a<<"\n";
    cout<<"Value of b"<<b<<"\n";
    obj1.Swap(a,b);
    cout<<"Value of a"<<a<<"\n";
    cout<<"Value of b"<<b<<"\n";

    SwapX<double>obj2;
    double p=11.9,q=10.7;
    cout<<"Value of p"<<p<<"\n";
    cout<<"Value of q"<<q<<"\n";
    obj2.Swap(p,q);
    cout<<"Value of p"<<p<<"\n";
    cout<<"Value of q"<<q<<"\n";

    return 0;

}