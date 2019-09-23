#include<bits/stdc++.h>
using namespace std;

class INFO
{
public:
    int day, month,year,match,wicket,run;
    INFO() {}
    INFO(int a, int b, int c,int d, int e, int f)
    {
        day = a;
        month = b;
        year = c;
        match=d;
        wicket=e;
        run=f;
    }

    void show()
    {
        cout<<"Date of birth : "<<day<<"."<<month<<"."<<year<<endl;
        cout<<"Match : "<<match<<endl;
        cout<<"Wicket : "<<wicket<<endl;
        cout<<"Runs : "<<run<<endl;
    }

    int putyear()
    {
        return year;
    }
};

class Person
{
public:
    INFO Iob;
    string name;
    void getINFO(string name, INFO INFO)
    {
        this->name = name;
        Iob = INFO;
    }
    int fun()
    {
        return Iob.putyear();
    }
    void putINFO()
    {
        cout<<"Name : "<<name<<endl;
        Iob.show();
    }
};


class Player: public Person,public INFO
{
public:
    INFO Iop;
    string category;
    void getPlayer(string na, INFO duc, string category)
    {
        getINFO(na, duc);
        this->category = category;
    }
    string getcategory()
    {
        return category;
    }
    int fun1()
    {
        return fun();
    }
    void putInfo();
};
void Player :: putInfo()
{
    putINFO();
    cout<<"Player Category : "<<category<<endl;
}
int main()
{
    Player TEAM[15];
    Player arr[8];
    int c1=0,c2=0,c3=0,c4=0,t=0,cnt=1,i;

    TEAM[0].getPlayer("Liton_Das",         INFO(5,11,1992,150,0,5600), "keeper");
    TEAM[1].getPlayer("Nasir_Hossain",          INFO(5,9,1996,50,70,560),   "spinbowler");
    TEAM[2].getPlayer("Rubel_Hossain",      INFO(5,10,1996,72,98,190),  "fastbowler");
    TEAM[3].getPlayer("Shafiul_Islam",                INFO(5,1,1996,200,205,1400),"fastbowler");
    TEAM[4].getPlayer("Tamim_Iqbal",            INFO(5,11,1991,203,0,6500), "batsman");
    TEAM[5].getPlayer("Imrul_kayes",            INFO(5,11,1986,135,0,3100), "batsman");
    TEAM[6].getPlayer("Sakib_al Hassan",        INFO(5,11,1993,201,264,580),"batsman");
    TEAM[7].getPlayer("Soumya_Sarkar",         INFO(5,11,1992,11,5,360),   "batsman");
    TEAM[8].getPlayer("Nurul_Hasan",              INFO(5,12,1996,36,0,890),   "keeper");
    TEAM[9].getPlayer("Ariful_Haque",          INFO(5,10,1996,120,76,2900),"batsman");
    TEAM[10].getPlayer("Sabbir_Rahman",         INFO(5,9,1995,76,45,1200),  "batsman");
    TEAM[11].getPlayer("Mominul_Haque",               INFO(5,12,1996,43,17,630),  "batsman");
    TEAM[12].getPlayer("Taskin_Ahmed",         INFO(5,9,1997,65,97,134),   "fastbowler");
    TEAM[13].getPlayer("Mustafizur_Rahman",                  INFO(5,05,1996,15,21,54),   "fastbowler");
    TEAM[14].getPlayer("Mushfiqur_rahim",             INFO(5,06,1995,23,0,534),   "keeper");

    for(i=0; i<15; i++)
    {
        if(TEAM[i].getcategory()=="keeper" && (2018-TEAM[i].fun1()>20) && (2018-TEAM[i].fun1()<30)&& c1<1)
        {
            arr[t] = TEAM[i];
            c1++;
            t++;
        }
        if(TEAM[i].getcategory()=="fastbowler" && (2018-TEAM[i].fun1()>20) && (2018-TEAM[i].fun1()<30) && c2<2)
        {
            arr[t] = TEAM[i];
            c2++;
            t++;
        }
        if(TEAM[i].getcategory()=="spinbowler" && (2018-TEAM[i].fun1()>20) && (2018-TEAM[i].fun1()<30) && c3<1)
        {
            arr[t] = TEAM[i];
            c3++;
            t++;
        }
        if(TEAM[i].getcategory()=="batsman"  && (2018-TEAM[i].fun1()>20) && (2018-TEAM[i].fun1()<30) && c4<4)
        {
            arr[t] = TEAM[i];
            c4++;
            t++;
        }
    }

    for(i = 0; i < t; i++)
    {
        cout << "Player Number >>  " << cnt <<endl;
        arr[i].putInfo();
        cout<<endl<< "............................................................................" << endl;
        cnt++;
    }
    return 0;
}
