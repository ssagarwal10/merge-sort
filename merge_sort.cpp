
//TITLE:Design and implement Merge  Sort algorithm using Divide and Conquer method for a given input.

//CODE:

#include<iostream>

using namespace std;
void mergesort(int [],int,int);
void merge(int[],int,int);
int main()
{
  int n,i;
  cout<<"\nEnter the length of the array\n";
  cin>>n;
  int arr[n];
  cout<<"\nEnter the array elements\n";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }

mergesort(arr,0,n-1);

cout<<"\nThe sorted array is:\n";
for(i=0;i<n;i++)
  {
    cout<<arr[i]<<endl;
  }

}

void mergesort(int arr[],int l, int h)
{
  if(h>l)
  {
    mergesort(arr,l,(l+h)/2);
    mergesort(arr,((l+h)/2)+1,h);
    merge(arr,l,h);
  }
}

void merge(int arr[], int l, int h)
{
    int b[h];
    int i,j,m,k=l;
    i=l;
    j=((l+h)/2)+1;
    m=j-1;
    while (i<=m && j<=h)
    {
      if(arr[i]<arr[j])
      {
        b[k]=arr[i];
        i++;
      }
      else
      {
        b[k]=arr[j];
        j++;
      }
      k++;
    }

    if(i>m)
    {
      while(j<=h)
      {
        b[k]=arr[j];
        j++;
        k++;
      }
    }
    else
    {
      while(i<=m)
      {
        b[k]=arr[i];
        i++;
        k++;
      }
    }
    k=l;
    while(k<=h)
    {
      arr[k]=b[k];
      k++;
    }

}


//OUTPUT:

Enter the length of the array
5

Enter the array elements
3
3
1
2
4

The sorted array is:
1
2
3
3
4
