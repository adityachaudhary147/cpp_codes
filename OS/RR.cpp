#include <bits/stdc++.h>
using namespace std;
class process{
public:
          string id;
          int att,bt0,bt,ct,tat,wt;
          process(){}
          process(string a,int b,int t){
          id=a;
          att=b;
          bt0=t;
          bt=bt0;
          }
          };
int  main(){
cout<<"Enter the number of processes\n";
int n,s=0;
cin>>n;
process arr[n+1];
cout<<"Enter process id, arrival time and burst time\n";
for(int i=0;i<n;i++){
 string a;
 int b,t;
 cin>>a>>b>>t;
arr[i]=process(a,b,t);
s+=t;
}
cout<<"enter the time quantum\n";
int q,j,k;
cin>>q;
queue <string> ready;
string gc[s];
int i=0;
for(j=0;j<n;j++){
          if((arr[j].att<=i)&&(arr[j].bt>0)){
          ready.push(arr[j].id);
          }
          }
while(i<s){
          string temp=ready.front();

          ready.pop();
         for(k=0;k<n;k++){
          if(arr[k].id==temp){
             int t=min(arr[k].bt,q);
             arr[k].bt-=t;
             for(int l=0;l<t;l++){
                    gc[i]=arr[k].id;
                    i++;
             }
          static int f=k+1;
          for(j=f;j<n;j++){
          if((arr[j].att<=i)&&(arr[j].bt>0))
          {
          ready.push(arr[j].id);
          f++;
          }
          }
          if(arr[k].bt>0) {
          ready.push(arr[k].id);}
         break;
         }
         }
}
for(int j=0;j<n;j++){
for(i=s-1;i>=0;i--){
     if(arr[j].id==gc[i])
   {   arr[j].ct=i+1;
       arr[j].tat=arr[j].ct-arr[j].att;
       arr[j].wt=arr[j].tat-arr[j].bt0;
       break;
   }
}
}
cout<<setw(15)<<"Process ID"<<setw(15)<<"Arrival time"<<setw(15)<<"Burst Time"<<setw(20)<<"Completion Time"<<setw(20)<<"Turn Around Time"<<setw(20)<<"Waiting Time"<<"\n";
for(i=0;i<n;i++){
cout<<setw(15)<<arr[i].id<<setw(15)<<arr[i].att<<setw(15)<<arr[i].bt0<<setw(20)<<arr[i].ct<<setw(20)<<arr[i].tat<<setw(15)<<arr[i].wt<<"\n";
}
return 0;}
