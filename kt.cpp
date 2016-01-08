#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "iostream"
using namespace std;

void main()
{
	int a[30], n=0, x;
	while(n<=0 || n>=30);
	{
		cout<<"Nhap n: ";
		cin>>n;
	}
	srand(time(NULL));
	for(int i=0; i<n;i++)
	{
		a[i]=rand()%10;
		cout<<a[i]<<" ";
	}
	cout<<"\nNhap gia tri muon tim: ";
	cin>>x;
	
	for(int i=0; i<n;i++)
		if(a[i]==x)
			cout<<"Tim thay x tai vi tri: "<<i<<" "<<endl;
}

