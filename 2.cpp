#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        string mob_num;
        Person() {};
        Person(string n,int a, string mob)
        {
            name=n;
            age=a;
            mob_num=mob;
        }
        /*Person(string n,int d,int m)
        {
            name=n;
            age=a;
            mob_num=mob;
        }*/
};
class Customer : public Person
{
    public:
        int age;
        string mob_num;
        string name;
        Person1() {};
        void setData(string n,int d, string m)
        {
            name=n;
            age=d;
            mob_num=m;

        }
        void customer_info()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Mobile Number: "<<mob_num<<endl;
        }
    };
class Book
{
public:
    int book_id,price;
    static int trans;
    char *author,*title,*publ;
    int stock;
public:
    book()
    {
        author = new char[30];
        title = new char[30];
        publ = new char[30];
    }
    void add()
    {
        cout<<"Enter the details of the book\n";
        cout<<" Title of book:\t";
        cin>>title;
        cout<<"Author :\t";
        cin>>author;
        cout<<"Publication :\t";
        cin>>publ;
        cout<<"Price :\t";
        cin>>price;
        cout<<"Stock:\t";
        cin>>stock;
    }
    void display()
    {
        cout<<"BOOK :\t"<<title<<"\nAuthored by\t"<<author<<"\nPublished by\t"<<publ<<"\nhaving cost:\t"<<price;
        cout<<"Stock:\t"<<stock;
    }
    void update(Book b[])
    {
        int i,flag=0;
        int id,price;
        int n=25; // where n is total number of books avialable
        cout<<"Enter the book ID that you want to update";
        cin>>book_id;
        for(i=0; i<n; i++)
        {
            if(id==b[i].book_id)
            {
                cout<<"Book Found\n";
                cout<<"Add the new cost\n";
                cin>>price;
                cout<<"Reocord updated successfully\n";
                flag=0;
            }
            else
                flag=1;
        }
        if(flag=1)
        {
            cout<<"Book not found\n";
        }
    }
    void search(Book b[])
    {
        int i,flag=0;
        int id;
        int n=25;
        cout<<"Enter the book id to b searched\n";
        cin>>id;
        for(i=0; i<n; i++)
        {
            if(id==b[i].book_id)
            {
                cout<<"Book found\n";
                b[i].display();
                flag=0;
            }
            else
                flag=1;
        }

        if(flag=1)
        {
            cout<<"BOok not found\n";
        }
    }

    friend void purchase();

    void deleterecord(Book b[])
    {
        int i,n=25;
        int flag=0,id;
        cout<<"Enter the book ID that you want to delete\n";
        cin>>id;
        for(i=0; i<n; i++)
        {
            if(b[i].book_id==id)
            {
                cout<<"book found\n";
                delete b[i].title;
                delete b[i].author;
                delete b[i].publ;
                b[i].stock =-1;
                flag=1;
                break;
            }
            else
                flag=0;
        }

        if(flag=0)
        {
            cout<<"Book not found";
        }
    }
    static void transactions()
    {
        int trans;
        cout<<"\n Successful transactions are = "<<trans;
    }
};
class Book1: Book
{
    //int id;
    float a;
    int n, i;
    int flag=0, id;
public:
    void deleterecord(Book b[])
    {
        int i,n=25;
        int flag=0,id;
        cout<<"Enter the book ID that you want to delete\n";
        cin>>id;
        for(i=0; i<n; i++)
        {
            if(b[i].book_id==id)
            {
                cout<<"book found\n";
                delete b[i].title;
                delete b[i].author;
                delete b[i].publ;
                b[i].stock =-1;
                flag=1;
                break;
            }
            else
                flag=0;
        }

        if(flag=0)
        {
            cout<<"Book not found";
        }
    };
    void purchase(Book b[])
    {
        int i,flag=0;
        int id,n=25;
        char ans;
        int trans;
        int stock;
        cout<<"Enter the book ID:\t";
        cin>>id;
        for(i=0; i<n; i++)
        {
            if(b[i].book_id==id)
            {
                cout<<"Book is available\n";
                cout<<"Would you like to purchase it\n";
                cin>>ans;
                if(ans =='y' || ans == 'Y')
                {
                    cout<<"Book price :\t"<<b[i].price;
                    trans++;
                    stock--;
                    cout<<"Purchase successful\n";
                    flag=0;
                }
                else
                {
                    cout<<"better Next time\n";

                }
            }
            else
            {
                flag=1;
            }
        }
        if(flag=1)
        {
            cout<<"book not available \n";
        }
    }

};


int main()
{
    Customer s[3];
    s[0].setData("Mahfuj", 12, "017******");
    s[1].setData("Rakib", 13, "017*******");
    s[2].setData("Helal",20, "017********");
    cout<<"THE DETAILS Of Customer: "<<endl<<endl;
        for(int i=0; i<3; i++){
            s[i].customer_info();
            cout<<endl;
        }
    cout<<endl<<endl;

    Book B[25];
    int i, ch,c = 1 ;

    i = 0;

    do
    {

        cout<<"\n1.Add a book\n2.Update a book record\n3.Search a book\n4.Purchase a book\n5.Display all book\n6.Diplay transactions\n7.Remove book\nEnter what do you want to do?";
        cin>>ch;

        switch(ch)
        {
        case 1:
            B[i].add();
            i++;
            break;
        case 2:
            B[i].display();
            i++;
            break;
        case 3:
            B[i].update(B);
            break;
        case 4:
            B[i].search(B);
            break;
        /*case 5:
            B[i].purchase(B);
            break;*/
        case 6:
            B[i].transactions();
            break;
        case 7:
            B[i].deleterecord(B);
            break;
        default:
            cout<<"\nSorry, you entered wrong choice \n Please try again";
        }

        cout<<"\n Do you want to continue?\n1.Yes 2.No";
        cin>>c;

    }
    while(c==1);
    {
        return true;
    }
    return 0;
}
