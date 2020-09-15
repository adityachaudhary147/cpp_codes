//Author : Aditya Chaudhary
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void bresenham(int x1, int y1, int x2, int y2)
{
 int dx = x2-x1;
 int dy = y2-y1;
 int mode = 0;
 if(abs(dx/dy)<1) mode+=2;
 if(dx/dy<0) mode++;
 int mcs, ncs, mce, dm, dn;
 if(mode < 2)
 {
 mcs = dx>0? x1:x2;
 mce = x1+x2-mcs;
 ncs = dx>0? y1:y2;
 dm = abs(dx);
 dn = abs(dy);
 }
 else
 {
 mcs = dy>0? y1:y2;
 mce = y1+y2-mcs;
 ncs = dy>0? x1:x2;
 dm = abs(dy);
 dn = abs(dx);
 }
 int d1 = 2* dn;
 int d2 = 2* (dn-dm);
 int p = d1-dm;
 while (mcs<=mce)
 {
 if (mode<2) { putpixel(mcs,ncs, WHITE); cout<<"Plotted: "<<mcs<<","<<ncs<<endl;}
 else { putpixel(ncs,mcs, WHITE); cout<<"Plotted: "<<ncs<<","<<mcs<<endl;}
 mcs++;
 if(p<0) p+=d1;
 else { if (mode%2==0) {ncs++; p+=d2;} else {ncs--; p+=d2;}}
 }
}
int main()
{
 int x1,x2,y1,y2;
 cout<<"\nEnter x and y coordinates for p1: ";
 cin>>x1>>y1;
 cout<<"\nEnter x and y coordinates for p2: ";
 cin>>x2>>y2;
 int gd = DETECT ,gm, i;
 initgraph(&gd, &gm, " ");
 bresenham(x1,y1,x2,y2);
 getch();
 closegraph();
 return 0;
}
