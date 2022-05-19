
/*#include<iostream>
using namespace std;
class items{
    private:
      int books,pen;
    public:
     items()
      {
          books =0 ;
          pen = 0;
      }
      items(int b,int p)
      {
          books = b;
          pen = p;
      }
      void display()
      {
          cout<<"NO OF BOOKS"<<" "<<books<<endl<<"NO OF PEN"<<" "<<pen<<endl;
      }

      items operator + (items c2)
      {
          items temp;
          temp.books=books+ c2.books;
          temp.pen=pen + c2.pen;
          return temp;
      }

};
int main()
{
    items c1(45,10),c2(32,23),c3;
    c3=c1+c2;
    c3.display();
    return 0;
}*/

#include <iostream>
using namespace std;
class items
{
private:
    int books, pen;

public:
    items()
    {
        books = 0;
        pen = 0;
    }
    items(int b, int p)
    {
        books = b;
        pen = p;
    }
    void display()
    {
        cout << "NO OF BOOKS"
             << " " << books << endl
             << "NO OF PEN"
             << " " << pen << endl;
    }

    items operator+(items c2)
    {
        items temp;
        temp.books = books + c2.books;
        temp.pen = pen + c2.pen;
        return temp;
    }
    bool operator ==(items c)
    {
        if (books == c.books)
        {
            cout << endl
                 << "value are equal: (" << books << " , " << pen << ')';
            return true;
        }
        else
        {
            cout << endl<< "values are not equal";
            return false;
        }
    }
    friend ostream &operator<<(ostream &output, items &c)
    {
        output << "b : " << c.books << " p : " << c.pen;
        return output;
    }
};
int main()
{
    items c1(45, 10), c2(32, 23), c3;
    c3 = c1 + c2;
    cout << c3;
    if (c1 == c2)
    {
        cout << "\n it is true " << endl;
    }
    else
    {
        cout << "\n it is false" << endl;
    }
}

// overload equal to operator to compare  two times class objects
