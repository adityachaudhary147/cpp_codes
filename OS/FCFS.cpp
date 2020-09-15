#include <bits/stdc++.h>
using namespace std;
struct Schedule
{	string pro_id;
int artime,bt,ct,ta,wt;
};
bool compare(Schedule p1,Schedule p2)
{
return p1.artime<p2.artime;
}
int main()
{	Schedule process[100];
int cpunon=0;
int n,i;
cout<<"Enter the number of process: ";
cin>>n;
cout<<"Enter the pro_id arrival time and burst time of "<<n<<" process\n";
for(i=0;i<n;i++)
{
cin>>process[i].pro_id;
scanf("%d",&process[i].artime);
scanf("%d",&process[i].bt);
}
sort(process,process+n,compare);
cpunon=process[0].artime-0;
process[0].ct=process[0].artime+process[0].bt;
process[0].ta=process[0].ct-process[0].artime;
process[0].wt=0;
for(i=1;i<n;i++)
{		if(process[i].artime<=process[i-1].ct)
{
process[i].ct=process[i-1].ct+process[i].bt;
process[i].ta=process[i].ct-process[i].artime;
process[i].wt=process[i].ta-process[i].bt;
}
else
{
process[i].ct=process[i].bt+process[i].artime;
process[i].ta=process[i].ct-process[i].artime;
process[i].wt=process[i].ta-process[i].bt;
cpunon+=process[i].artime-process[i-1].ct;
}
}
cout<<endl;
cout<<setw(15)<<"Process ID"<<setw(15)<<"Arrival time"<<setw(15)<<"Burst Time"<<setw(20)<<"Completion Time"<<setw(20)<<"Turn Around Time"<<setw(20)<<"Waiting Time"<<"\n";
int sumtat=0,sumwt=0;
for(i=0;i<n;i++)
{cout<<setw(15)<<process[i].pro_id<<setw(15)<<process[i].artime<<setw(15)<<process[i].bt<<setw(20)<<process[i].ct<<setw(20)<<process[i].ta<<setw(20)<<process[i].wt<<"\n";
sumtat+=process[i].ta;
sumwt+=process[i].wt;
}
float av_tat=(float)(sumtat*1.0/n*1.0);
float av_wt=(float)(sumwt*1.0/n*1.0);
cout<<"Average Turn Around Time: "<<av_tat<<"\n";
cout<<"Average Waiting Time: "<<av_wt<<"\n";
return 0;
}
