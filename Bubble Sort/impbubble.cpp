//Learnprogramo - programming made simple
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of element you want to store: ";
    cin>>n;
    int arr[n],i,j;
    cout<<"Enter array values:\n";
    //taking the array value 
    //from user
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //here this flag will help
    //to optimise the solution
    //first initialise flag=1
    int flag=1;
    //Now we will sort the array
    //if my flag value is 1 then only 
    //the loop will execute
    for(i=0;i<n-1 && flag==1;i++)
    {
        //here after each time of j loop
        // we will re-initialize the flag to 0
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            //checking if previous value is
            //grater than next one or not
            if(arr[j]>arr[j+1])
            {
                //temp will temporarly store
                //the value of arr[j]
                //then we will swap the values
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //Here if there is a swap then
                // we will make it 1
                flag=1;
            }
        }
    }
    cout<<"After Bubble sort the array is:\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}