//WAP to calculate volume of box 3
#include<iostream>
using namespace std;

class cuboid
{
private:
    int length,int width,int height;
    int vol;
public:
    cuboid(int l,int w,int h)
    {
        length=l;
        width =w;
        height=h;
        vol=l*b*h;
    }

    void display()
    {
        cout<<length<<end<<width<<endl<<height<<endl;
        cout<<vol<<endl;
    }
    cuboid operator +(cuboid c)
    {
        cuboid temp;
        temp.vol=c1.vol + c2.vol;
        return temp;
    }
};
int main(){
    cuboid c1(2,4,5),c2(5,7,8)
return 0 ;
}
