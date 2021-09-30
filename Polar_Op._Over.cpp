#include<iostream>
#include<math.h>

using namespace std;

class polar
{
    float rad,ang,x,y;
public:
    polar(){rad=ang=x=y=0;};
    polar(float a,float b)
    {
        rad=a;
        ang=b;
    }
    void getdata (void);
    void display (void);
    polar operator+ (polar);
};

void polar::getdata()
{
    cout<<"\nEnter the value of radius ";
    cin>>rad;
    cout<<"\nEnter the angle ";
    cin>>ang;
}

void polar::display (void)
{
    cout<<"\nRadius = "<<rad;
    cout<<"\nAngle = "<<ang;
}

polar polar::operator+ (polar a)
{
    polar temp;
    x=rad*cos(ang*11.0/630);
    y=rad*sin(ang*11.0/630);
    a.x=a.rad*cos(a.ang*11.0/630);
    a.y=a.rad*sin(a.ang*11.0/630);
    temp.x = x + a.x;
    temp.y = y + a.y;
    temp.rad = sqrt(temp.x*temp.x + temp.y*temp.y);
    temp.ang = atan(temp.y*1.0/temp.x)*630/11.0;
    return temp;
}

main()
{
    polar a,b,c;
    a.getdata();
    b.getdata();
    c=a+b;
    c.display();
}
