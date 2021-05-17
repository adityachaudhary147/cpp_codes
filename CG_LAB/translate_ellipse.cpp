#include<iostream>
#include<graphics.h>
using namespace std;
void PlotEllipse_pts(int h,int k,int x,int y){
    putpixel(h+x,k+y,YELLOW);
    putpixel(h-x,k+y,YELLOW);
    putpixel(h-x,k-y,YELLOW);
    putpixel(h+x,k-y,YELLOW);
    cout<<"Plotting Points : "<<"("<<h+x<<","<<k+y<<")"<<" ,"<<"("<<h-x<<","<<k+y<<")"<<" ,"<<"("<<h-x<<","<<k-y<<")"<<" ,"<<"("<<h+x<<","<<k-y<<")"<<" ,"<<endl;
}
void DrawEllipse(int h,int k,int rx,int ry){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x,y,dx,dy,d1,d2;
    x=0;
    y=ry;
    d1=(ry*ry)-(rx*rx*ry)+(0.25*rx*rx);
    dx=2*ry*ry*x;
    dy=2*rx*rx*y;
    while(dx<=dy){
        PlotEllipse_pts(h,k,x,y);
        if (d1 < 0)
        {
            x++;
            dx = dx + (2 * ry* ry);
            d1 = d1 + dx + (ry* ry);
        }
        else
        {
            x++;
            y--;
            dx = dx + (2 * ry* ry);
            dy = dy - (2 * rx * rx);
            d1 = d1 + dx - dy + (ry*ry);
        }
}
d2 = ((ry* ry) * ((x + 0.5) * (x + 0.5))) +  ((rx * rx) * ((y - 1) * (y - 1))) - (rx * rx * ry * ry);
    while (y >= 0)
    {
         PlotEllipse_pts(h,k,x,y);
        if (d2 > 0)
        {
            y--;
            dy = dy - (2 * rx * rx);
            d2 = d2 + (rx* rx) - dy;
        }
        else
        {
            y--;
            x++;
            dx = dx + (2 * ry * ry);
            dy = dy - (2 * rx * rx);
            d2 = d2 + dx - dy + (rx* rx);
        }
    }
    return;
}
void Multiply(int T[3][3],int C[3][1],int Res[1][3]){
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            Res[i][j]=0;
            for(k=0;k<3;k++){
                Res[i][j] += T[i][k] *C[k][j];
 }}}}
int main(){
    int h,k,rx,ry,tx,ty;
    cout<<"Enter the coordinates the center of ellipse : ";
    cin>>h>>k;
    cout<<"\nEnter the radius along x : ";
    cin>>rx;
    cout<<"\nEnter the radius along y : ";
    cin>>ry;
    DrawEllipse(h,k,rx,ry);
    cout<<"\nEnter translation distance in x direction : ";
    cin>>tx;
    cout<<"\nEnter translation distance in y direction : ";
    cin>>ty;
    /*Matrices */
    int T[3][3]={{1,0,tx},{0,1,ty},{0,0,1}};
    int C[3][1]={{h},{k},{1}};
    int Res[1][3];
    Multiply(T,C,Res);
    /*New Coordinates*/
    int nh=Res[0][0];
    int nk=Res[0][1];
    /*Plot ellipse with new coordinates*/
    DrawEllipse(nh,nk,rx,ry);
    getch();
    closegraph();
    return 0;
}
