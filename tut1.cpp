// 1
/* #include<iostream>
using namespace std;
class counter
{
    int count;
    public:
        void setv(){
        count=0;}
        void in(){
        count++;}
        void display(){
            count<<count;
        }
};
int main(){
counter obj1,obj2,obj3;
obj1.setv();
obj2.setv();
obj3.setv();
obj1.in();
obj2.in();obj2.in();
obj3.in();
obj1.display();
obj2.display();
obj3.display();
} */

//3
/* #include<iostream>
using namespace std;
class Student {
   private:
   int rollNo;
   char name[10];
   int marks;
   public:
   static int objectCount;
   Student() {
      objectCount++;
   }

   void getdata() {
      cout << "Enter roll number: "<<endl;
      cin >> rollNo;
      cout << "Enter name: "<<endl;
      cin >> name;
      cout << "Enter marks: "<<endl;
      cin >> marks;
   }

   void putdata() {
      cout<<"Roll Number = "<< rollNo <<endl;
      cout<<"Name = "<< name <<endl;
      cout<<"Marks = "<< marks <<endl;
      cout<<endl;
   }
};
int Student::objectCount = 0;
int main(void) {
   Student s1;
   s1.getdata();
   s1.putdata();
   Student s2;

   s2.getdata();
   s2.putdata();
   Student s3;

   s3.getdata();
   s3.putdata();
   cout << "Total objects created = " << Student::objectCount << endl;
   return 0;
}*/
//2
// #include<iostream>
// using namespace std;
// class counter{
//     int count;
//     public:
//         void set(){
//             count  = 0;
//         }
//         void inc(){
//             count++;
//         }
//         void display() const{
//             // count++;
//             cout << count;
//         }
// };
// int main(){
//     counter c1;
//     c1.set();
//     c1.inc();
//     c1.display();
     
//     return 0;
// }

// int counter
// {
//    int count:
//    public:
//    void initialize()
//    { count=0 ; }
//    void inc()
//    {count++,                                                                            }
//    void disp()
//    {cout<< count;}
// }
// 
#include<iostream>
using namespace std;

int main(){ 
int i=1,n=6;
   do{
   cout<<i*n<<endl;
   i++;
   
}while(i<=10);
return 0;
}