//Learnprogramo - programming made simple
#include<iostream>
using namespace std;
void qsort(int data[],int low,int high);
int main()
{
system("cls");
int data[50],n,c=1;
while(c==1)
{
cout<<"\nEnter the size of the array:\n"; cin>>n;
cout<<"\nEnter the elements of the array\n"; for(int i=0;i<n;i++)
{
cin>>data[i];
cout<<"\n"; } qsort(data,0,n-1); cout<<"\nThe sorted array is: \n"; for(int i=0;i<n;i++)
{
cout<<" "<<data[i];
}
cout<<"\nPress 1 to continue: "; cin>>c;
}
}
void qsort(int data[],int low,int high)
{
int pivot,temp,i,j;
i=low;
j=high;
pivot=data[(low+high)/2];
while(i<=j) { while(data[i]<pivot)
i++;
while(pivot<data[j])
j--;
if(i<=j) { temp=data[i]; data[i]=data[j]; data[j]=temp; i++; j--; } } if(low<j)
(data,low,j);
if(i<high)
qsort(data,i,high);
}