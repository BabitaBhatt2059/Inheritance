#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void display(){
        cout<<"m base class";

    }
};
class cow:public animal{
    public: void display(){
        cout<<"m derived class of cow";

    }
};
class dog:public animal{
    public:void display()
    {
        cout<<"m derived class of dog";
    }
};
int main(){
    animal *aptr;
    animal aa;
    cow cc;
    dog dd;
    aptr=&aa;
    aptr->display();
    aptr=&cc;
    aptr->display();
    aptr=&dd;
    aptr->display();


    
return 0;
}