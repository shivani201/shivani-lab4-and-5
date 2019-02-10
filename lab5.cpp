
#include<iostream>
using namespace std;
void quicksort(int array[],int f,int l)
{
	//for the case its only one element left
	if(f<l)
	{
		int pivot=l,temp;
		for(int i=l-1;i>=f;i--)
		{
			if(array[i]>array[pivot])
			{
				temp=array[i];
				for(int j=i;j<pivot;j++)
				{
					array[j]=array[j+1];
				}
				array[pivot]=temp;
				pivot--;
			}
		}
		quicksort(array,f,pivot-1);
		quicksort(array,pivot+1,l);
	}
}
void output(int array[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	//declaring variables
	int n;
	//taking the inputs
	cout<<"Enter the length of array:-";
	cin>>n;
	int array[n];
	cout<<"start entering elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	quicksort(array,0,n-1);
	output(array,n);
	return 0;
}

   
