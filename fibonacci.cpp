#include<iostream>
using namespace std;
int main()
{ 
	int first=0,next=1,step,num,i;
	cout<<"enter number:";
	cin>>num;
	cout<<first<<" "<<next<<" ";
	for(i=2;i<num;i++)
	{
		step=first+next;
		cout<<step<< " ";
		first=next; 
		next=step;
	}
    return 0;



}