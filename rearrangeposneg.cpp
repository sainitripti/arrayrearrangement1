#include<iostream>
using namespace std;

void swap(int *a,int *b);
void rearrange(int ar[],int n);
void print(int ar[],int n);

int main()
{
 int ar[]={1,-4,-6,5,-9,-7,-2,6};
 int n=sizeof(ar)/sizeof(ar[0]);
 print(ar,n);
 rearrange(ar,n);
 print(ar,n);
 return 0;
}

void swap(int *a,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}

void rearrange(int ar[],int n)
{
 int i,j;
 i=-1;
 for(j=0;j<n;j++)
 {
  if(ar[j]<0)
   {
     i++;
     swap(&ar[i],&ar[j]);
   }
 }
 int pos=i+1,neg=0;
 while(pos<n&&neg<pos&&ar[neg]<0)
 {
  swap(&ar[pos],&ar[neg]);
  pos++;
  neg+=2;
 }
}

void print(int ar[],int n)
{
 cout<<"\n";
 for(int i=0;i<n;i++)
  cout<<ar[i]<<"  ";
 cout<<"\n";
}

