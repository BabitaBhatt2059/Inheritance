#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    void getx(){
        cout<<"value of x:";
        cin>>x;
    }
};
class B:public A{
    protected:
    int y;
    public:
    void gety(){
        cout<<"value of y:";
        cin>>y;
    }
};
class C:public B{
    protected:
    int z;
    public:
    void getx(){
        cout<<"value of z:";
        cin>>z;
    }
};
class D:public C{
    protected:
    int s;
    public:
    void sum(){
        s=x+y+z;
        cout<<"sum is:"<<s;
        
    }
};
int main(){
    D aa;
    aa.sum();
    
return 0;
}