#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,rem,temp;
	cout<<"enter number:";
	cin>>n;
	temp=n;
	while(n!=0)
	{

        rem=n%10;
		rev=rev+rem*rem*rem;
		n=n/10;
	}
	//cout<<"reverse number"<<rev;
	if (rev==temp)
	{
		cout<<"number is armstrong";

	}else
	{
		cout<<"number is not armstrong";
	}
	return 0;
}