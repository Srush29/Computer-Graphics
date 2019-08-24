/* Experiment No. 4
Aim: Implementation of Merge Sort
Name: Srushti Samant
Roll No.: E073
*/
#include<iostream>
using namespace std;

int c;

void merging(int arr[], int l, int m, int u);

void mergeSort(int arr[], int l, int u)
{
    if (l < u)
    {
        int m = l+(u-l)/2;

        cout<<"\nLeft Side: "<<"\n";
        for(int i=0;i<=m;i++)
        {
            cout<<arr[i];
            cout<<"  ";
        }
        cout<<"\nNo. of Comparisons: "<<c<<"\n";
        cout<<"\n";
        cout<<"\nRight Side: "<<"\n";
        for(int i=m+1;i<u+1;i++)
        {
            cout<<arr[i];
            cout<<"  ";
        }
        cout<<"\n";
        cout<<"\nNo. of Comparisons: "<<c<<"\n";

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, u);

        merging(arr, l, m, u);
    }
}

void merging(int arr[], int l, int m, int u)
{
    int i, j, k;
    int n1 = m + 1;
    int n2 =  u - m;
    int Left[n1], Right[n2];


    for (i = 0; i < n1; i++)
 {

     Left[i] = arr[l + i];

}
    for (j = 0; j < n2; j++)
    {
        Right[j] = arr[m + 1+ j];

    }

    i = 0;
    j = 0;
    k = l;



    while (i < n1 && j < n2)
    {
        c++;
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;

        }
        k++;
    }

         while (i < n1)
    {
        arr[k] = Left[i];
        i++;
        k++;

    }

    while (j < n2)
    {
        arr[k] = Right[j];
        j++;
        k++;

    }

}


int main()
{
    int a[100],n,i;
    cout<<"Enter No. of elements: ";
    cin>>n;
    cout<<"\nEnter array elements (Unsorted): \n";

    for(i=0;i<n;i++)
        cin>>a[i];

    mergeSort(a,0,n-1);
    cout<<"\nSorted Array: \n";

    for(i=0;i<n;i++)
        cout<<a[i]<<" | ";

    return 0;
}

