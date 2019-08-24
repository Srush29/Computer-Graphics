/* Experiment No. 3
Aim: Implementation of Quick Sort
Name: Srushti Samant
Roll No.: E073
*/
#include <iostream>
using namespace std;
int c;
int s;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int l, int u);

void quickSort(int arr[], int l, int u)
{
    if (l < u)
    {

        int pi = partition(arr, l, u);
        cout<<"Left Side: "<<endl;
        for(int i=0;i<pi;i++)
        {
            cout<<arr[i];
            cout<<"  ";
        }
        cout<<endl;
        cout<<"Right Side: "<<endl;
        for(int i=pi;i<u+1;i++)
        {
            cout<<arr[i];
            cout<<"  ";
        }
        cout<<endl;
        cout<<"No. of Comparisions: "<<c<<endl;
        cout<<"No. of Swaps: "<<s<<endl;



        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, u);
    }
}

int partition (int arr[], int l, int u)
{
    int pivot = arr[u];
    int i = (l - 1);
    for (int j = l; j <= u - 1; j++)
    {
        c++;
        if (arr[j] <= pivot)
        {   i++;
            swap(&arr[i], &arr[j]);
            s++;
        }
    }
    swap(&arr[i + 1], &arr[u]);
    s++;
    return (i + 1);
}

int main()
{
    int a[100],n,i;
    cout<<"Enter No. of elements: ";
    cin>>n;
    cout<<"\nEnter array elements (Unsorted): \n";

    for(i=0;i<n;i++)
        cin>>a[i];

    quickSort(a,0,n-1);
    cout<<"\nSorted Array: \n";

    for(i=0;i<n;i++)
        cout<<a[i]<<" | ";

    return 0;
}

