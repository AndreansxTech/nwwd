#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
int l1,l2,m1,m2;
int cal;
void kolor(int k)
{
    if (k==212)
    {
        kolor(7);cout<<"[  ";
        kolor(2);cout<<"OK";
        kolor(7);cout<<"  ]";
    }
    else
        SetConsoleTextAttribute(color,k);
}
void rys(int r)
{
    if (r==1)
    {
        kolor(13);
        cout<<"X";kolor(7);
cout<<R"(
- + -

     )";
    }
    else if (r==2)
    {
        kolor(2);cout<<"x\n";kolor(7);
cout<<"- + -\n";
kolor(13);cout<<"X\n\n";kolor(7);
    }
    else if (r==3)
    {
        kolor(2);cout<<"x   ";kolor(13);cout<<"X\n";kolor(7);
        cout<<"- + -\n";kolor(2);cout<<"x\n\n";kolor(7);
    }
    else if (r==4)
    {
        kolor(2);cout<<"x   x\n";
        kolor(7);cout<<"- + -\n";
        kolor(2);cout<<"x   ";kolor(13);cout<<"X\n\n\n";kolor(7);
    }
    else if (r==5)
    {
        kolor(2);cout<<"x   x\n";
        kolor(7);cout<<"- + -\n";
        kolor(2);cout<<"x   x\n\n";
        kolor(7);
    }
}
void wpis()
{
    kolor(13);cout<<"X";kolor(14);cout<<" to miejsce gdzie teraz wpisujesz\n a ";kolor(2);
    cout<<"x";kolor(14);cout<<" to tam gdzie juz wpisales\n\n";
    kolor(11); rys(1);
    cout<<"Podaj licznik pierwszej liczby: ";kolor(9);cin>>l1;cout<<"\n\n";kolor(11);
    rys(2);cout<<"Podaj mianownik pierwszej liczby: ";kolor(9);cin>>m1;cout<<"\n\n";kolor(11);

    rys(3);cout<<"Podaj licznik drugiej liczby: ";kolor(9);cin>>l2;cout<<"\n\n";kolor(11);
  //  rys(2);cout<<"Podaj mianownik pierwszej liczby: ";kolor(9);cin>>m1;cout<<"\n\n";kolor(11);
    rys(4);cout<<"Podaj mianownik drugiej liczby: ";kolor(9);cin>>m2;cout<<"\n\n";kolor(11);rys(5);
}
int nwd(int a,int b)
{
    while (b!=0)
    {
        int c=b;
        b=a%b; a=c;
    }
    return a;
}
void wyciag_cal(int licz,int mian)
{
    int cal=licz/mian;
    licz=licz%mian;
    if (cal!=0)
    {
        kolor(11);
        cout<<"Calosci: ";kolor(2);cout<<cal<<"\n";kolor(7);
    }
}
void dodawanie()
{
    int licz=l1*m2+m1*l2; int mian=m1*m2;
    int wartnwd=nwd(licz,mian);
    licz=licz/wartnwd;mian=mian/wartnwd;
    wyciag_cal(licz,mian);kolor(11);
    kolor(212);cout<<"  Wynik dodawania tych ulamkoww to: ";kolor(13);cout<<licz/mian;kolor(11);cout<<" i ";
    licz=licz-mian;
    kolor(13);cout<<licz;kolor(11);cout<<" / ";kolor(13);cout<<mian<<endl;kolor(7);
}
int main()
{
    wpis();
    dodawanie();
    return 0;
}
