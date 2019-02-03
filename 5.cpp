#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name, catagory;
    int age;
    Person() {};
    Person(string n,int a, string c)
    {
        name=n;
        age=a;
        catagory=c;
    }
    int cal1()
    {
        return age;
    }
    void putData();
};
void Person :: putData()
{
    cout<<"Name : "<<name<<endl;
}
class Player : public Person
{
public:
    int age;
    string name, catagory;
    Player_details() {};
    void setData(string n,int d, string c)
    {
        name=n;
        age=d;
        catagory=c;

    }
    string getcatagory()
    {
        return catagory;
    }
    int cal()
    {
        return cal1();
    }
    void putInfo();
    void player_info()
    {
        cout<<"Player Name: "<<name<<endl;
        cout<<"Player Age: "<<age<<endl;
    }
    void playerDetails()
    {
        cout << setw(10) << name << setw(13) << age << endl << endl;
    }
};
void Player :: putInfo()
{
    putData();
    cout<<"Player Catagory : "<<catagory<<endl;
}
int main()
{
    Player s[16];
    int t=0, c1=0, c2=0, c3=0, c4=0;
    s[0].setData("Mahfuj", 12, "Fast Bowler");
    s[1].setData("Rakib", 13, "Fast Bowler");
    s[2].setData("Sabbir",20, "Fast Bowler");
    s[3].setData("Helal",20, "Fast Bowler");
    cout<<"Player Details: "<<endl;
    cout<<"Fast Bowler : "<<endl<<endl;
    for(int i=0; i<=3; i++)
    {
        s[i].player_info();
        cout<<endl;
    }
    cout<<endl<<endl;
    s[4].setData("Mahfuj", 12, "Spin Bowler");
    s[5].setData("Rakib", 13, "Spin Bowler");
    s[6].setData("Hafij",20, "Spin Bowler");
    s[7].setData("Helal",20, "Spin Bowler");
    cout<<"Spin Bowler: "<<endl<<endl;
    for(int i=4; i<=7; i++)
    {
        s[i].player_info();
        cout<<endl;
    }
    cout<<endl<<endl;
    s[8].setData("Mahfuj", 12, "Batsman");
    s[9].setData("Rakib", 20, "Batsman");
    s[10].setData("Helal",19, "Batsman");
    s[11].setData("Habib",18, "Batsman");
    cout<<"Batsman: "<<endl<<endl;
    for(int i=8; i<=11; i++)
    {
        s[i].player_info();
        cout<<endl;
    }
    cout<<endl<<endl;
    s[12].setData("Mahfuj", 12, "Wicketkeeper");
    s[13].setData("Rakib", 13, "Wicketkeeper");
    s[14].setData("Habib",20, "Wicketkeeper");
    s[15].setData("Helal",17, "Wicketkeeper");
    cout<<"Wicketkeeper: "<<endl<<endl;
    for(int i=12; i<16; i++)
    {
        s[i].player_info();
        cout<<endl;
    }
    cout<<endl<<endl;
    Player ar[8];
    //int t=0;
    for(int i=0; i<15; i++)
    {
        if(s[i].cal()>20 && c1<1)
        {
            ar[t] = s[i];
            c1++;
            t++;
        }
        if(s[i].cal()>20 && c2<2)
        {
            ar[t] = s[i];
            c2++;
            t++;
        }
        if(s[i].cal()>20 && c3<1)
        {
            ar[t] = s[i];
            c3++;
            t++;
        }
        if(s[i].cal()>20 && c4<4)
        {
            ar[t] = s[i];
            c4++;
            t++;
        }
    }
    int cnt=1;
    for(int i = 0; i < t; i++)
    {
        cout<<"Player No. : "<<cnt<<endl;
        ar[i].putInfo();
        cout<<endl;
        cout<<endl;
        cnt++;
    }
    cout<<"Selected Player : "<<endl;
    for(int i=0; i<16; i++)
    {
        if(i==2 || i==7 || i==9 || i==14)
        s[i].player_info();
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    return 0;

}
