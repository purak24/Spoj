#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef long long int lli;
lli  _mergeSort(lli arr[], lli temp[], lli left, lli right);
lli merge(lli arr[], lli temp[], lli left, lli mid, lli right);
  
lli mergeSort(lli arr[], lli array_size)
{
    lli *temp = (lli *)malloc(sizeof(lli)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
  

lli _mergeSort(lli arr[], lli temp[], lli left, lli right)
{
  lli mid, inv_count = 0;
  if (right > left)
  {
    
    mid = (right + left)/2;
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
lli merge(lli arr[], lli temp[], lli left, lli mid, lli right)
{
  lli i, j, k;
  lli inv_count = 0;
  
  i = left; 
  j = mid;  
  k = left; 
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
      inv_count = inv_count + (mid - i);
    }
  }
  
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  
  while (j <= right)
    temp[k++] = arr[j++];
  
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  
  return inv_count;
}
  
int main(int argv, char** args)
{
  lli t;
  cin>>t;
  while(t--)
  {	
  	lli n;
  	cin>>n;
  	lli arr[n];
	for(lli i=0;i<n;i++)cin>>arr[i];
  	cout<<mergeSort(arr, n)<<endl;
  	
  }
}
