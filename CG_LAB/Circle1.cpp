#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

void trigcirc(int x, int y, int r)
{
    int gd = DETECT ,gm;
    initgraph(&gd, &gm, " ");

    int tempx,tempy;
    for(float i=0; i<M_PI_4; i+=M_PI_4/(r/sqrt(2.0)))
    {
        tempx=r*sin(i);
        tempy=r*cos(i);
        putpixel(tempx+x,tempy+y,WHITE);
        putpixel(tempy+x,tempx+y,WHITE);
        putpixel(-tempx+x,-tempy+y,WHITE);
        putpixel(-tempy+x,-tempx+y,WHITE);
        putpixel(-tempx+x,tempy+y,WHITE);
        putpixel(tempy+x,-tempx+y,WHITE);
        putpixel(tempx+x,-tempy+y,WHITE);
        putpixel(-tempy+x,tempx+y,WHITE);
        cout<<"Plotting points: ("<<tempx+x<<","<<tempy+y<<"),("<<tempy+x<<","<<tempx+y<<"),("<<-tempx+x<<","<<-tempy+y<<"),("<<-tempy+x<<","<<-tempx+y<<"),("<<-tempx+x<<","<<tempy+y<<"),("<<tempy+x<<","<<-tempx+y<<"),("<<tempx+x<<","<<-tempy+y<<"),("<<-tempy+x<<","<<tempx+y<<")"<<endl;
    }
    getch();
    closegraph();
}
int main()
{
    unsigned int x,y,r;
    cout<<"Enter co-ordinates of center of the circle: ";
    cin>>x>>y;
    cout<<"Enter radius of circle: ";
    cin>>r;
    if (x<r||y<r)
    {
        cout<<"\n\nERROR: RADIUS TOO BIG F0R CIRCLE\n\n";
    }
    else
    {
        trigcirc(x,y,r);
    }
    return 0;
}
