// #include<iostream>
// using namespace std;

// class Complex{
//     private:
//     int a,b;

//     public:
//      void input(int x=0,int y=0){
//         a=x;
//         b=y;
//     }

//     void show(){
//         cout<<a<<"+"<<b<<"j"<<endl;
//         cout<<endl;
//     }

  
//     Complex operator +(Complex &c){
//         Complex c3;
//         c3.a=a+c.a;
//         c3.b=b+c.b;
//         return c3;
//     }

//     Complex operator -(Complex &c){
//         Complex c3;
//         c3.a=a-c.a;
//         c3.b=b-c.b;
//         return c3;
//     }

// };
// int main(){
//     Complex c1,c2,c3;
//     int r,i;
//     cin>>r>>i;
//     c1.input(r,i);
//     c1.show();
//     cin>>r>>i;
//     c2.input(r,i);
//     c2.show();
//     c3 = c1 + c2;
//     cout<<"After adding : ";
//     c3.show();
//     c3= c2-c1;
//     cout<<"After subtraction: ";
//     c3.show();
//     return 0;
// }




//basic to class
#include<iostream>
using namespace std;

class Number{
    private:
    int n;

    public:
    void printDetails(){ cout<<n;  }
    Number(int n){ 
        this->n=n;
    }
};

int main(){
    Number numb=100;
    numb.printDetails();
    return 0;
}