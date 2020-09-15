#include <iostream>
using namespace std;

int main() {
	int n,i,j,temp=0,tat=0;
	int arrTime[10],execTime[10],nexecTime[10],pro[10],npro[10];
	cout<<"Enter number of processes:"<<endl;
	cin>>n;
	for(i=0;i<n;i++) {
		pro[i]=i;
		npro[i]=i;
	}

	for(i=0;i<n;i++) {
		cout<<"Enter execution time of process "<<i<<":";
		cin>>execTime[i];
		cout<<"Enter arrival time of process "<<i<<":";
		cin>>arrTime[i];
		cout<<endl;
	}

	for(i=0;i<n;i++) {
		tat = tat+execTime[i];
	}

	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(arrTime[j]>arrTime[j+1]) {
				temp=arrTime[j+1];
				arrTime[j+1]=arrTime[j];
				arrTime[j]=temp;

				temp=pro[j+1];
				pro[j+1]=pro[j];
				pro[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++) {
		cout<<"    P"<<pro[i]<<"  ";
		execTime[pro[i]]=execTime[pro[i]]-1;
}
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(execTime[j]>execTime[j+1]) {
				temp=execTime[j+1];
				execTime[j+1]=execTime[j];
				execTime[j]=temp;

				temp=npro[j+1];
				npro[j+1]=npro[j];
				npro[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++) {
		if(execTime[i]!=0) {
			for(j=0;j<execTime[i];j++) {
				cout<<"    P"<<npro[i]<<"  ";
			}
		}
	}
	cout<<endl;
	for(i=0;i<tat+1;i++) {
		cout<<i<<"\t";
	}
	return 0;
}
