/*
Longest increasing subsequence / use of qsort
algo -> http://www.geeksforgeeks.org/dynamic-programming-set-21-box-stacking-problem/
qsort -> http://www.cplusplus.com/reference/cstdlib/qsort/
*/
#include<bits/stdc++.h>
using namespace std;
struct Box
{
    int h,w,d;
};
int compare (const void *a, const void * b)
{
    return ( (*(Box *)b).d * (*(Box *)b).w ) -
           ( (*(Box *)a).d * (*(Box *)a).w );
}
int maxStackHeight(Box arr[],int n)
{
    Box rot[3*n];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
      // Copy the original box
      rot[index] = arr[i];
      index++;

      // First rotation of box
      rot[index].h = arr[i].w;
      rot[index].d = max(arr[i].h, arr[i].d);
      rot[index].w = min(arr[i].h, arr[i].d);
      index++;

      // Second rotation of box
      rot[index].h = arr[i].d;
      rot[index].d = max(arr[i].h, arr[i].w);
      rot[index].w = min(arr[i].h, arr[i].w);
      index++;
   }

   // Now the number of boxes is 3n
   n = 3*n;

   /* Sort the array ‘rot[]’ in decreasing order, using library
      function for quick sort */
   qsort (rot, n, sizeof(rot[0]), compare);
   /* Initialize msh values for all indexes
      msh[i] –> Maximum possible Stack Height with box i on top */
   int msh[n];
   for (int i = 0; i < n; i++ )
      msh[i] = rot[i].h;
   /* Compute optimized msh values in bottom up manner */
   for (int i = 1; i < n; i++ )
      for (int j = 0; j < i; j++ )
         if ( rot[i].w < rot[j].w &&
              rot[i].d < rot[j].d &&
              msh[i] < msh[j] + rot[i].h
            )
         {
              msh[i] = msh[j] + rot[i].h;
         }
   /* Pick maximum of all msh values */
   int max = -1;
   for ( int i = 0; i < n; i++ )
      if ( max < msh[i] )
         max = msh[i];
   return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        Box arr[n];
        for(int i=0;i<n;++i)
            {
                scanf("%d %d %d",&arr[i].h,&arr[i].w,&arr[i].d);
                if(arr[i].w>arr[i].d)swap(arr[i].w,arr[i].d);
            }
        printf("%d\n",maxStackHeight(arr,n));
        scanf("%d",&n);
    }
    return 0;
}

