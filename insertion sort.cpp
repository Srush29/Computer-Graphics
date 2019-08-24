/* Experiment No. 1
Aim: Implementation of Insertion Sort
Name: Srushti Samant
Roll No.: E073
*/

#include<iostream>

using namespace std;

int main()
{
    int i,j,n,x,a[30],ch=1,pass=0,c=0;
    while(ch=1)
    {
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"\nEnter the elements (Unsorted):\n";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<=n;i++)
    {
        int s=0;
        x=a[i];
        j=i-1;
        pass++;
       while((x<a[j])&&(j>=0))      /*checks whether the current element in the array is smaller than the previous
                                      element as well as j variable is greater than or equal to 0 or not if yes
                                      go inside the loop or else run the next line*/
        {
            s++;
            a[j+1]=a[j];    //moves element forward
            j=j-1;
            a[j + 1] = x; //putting the element in its proper position

         for(int t=0;t<n;t++)
       {
           //cout<<"\n";
           cout<<a[t]<<" | ";
       }
       cout<<"\n";
        }

          if(s == 0 )
            {
                c = 1;
            }
            else
            {
                c = s;
            }


     cout<<"Pass: "<<pass<<endl<<"Swaps: "<<s<<endl<<"Comparisions: "<<c<<endl<<"The array is : ";
            for(int i = 0; i <n; i++)
            {
                cout<<a[i]<<" | ";
            }
            cout<<endl;
    }
    cout<<"\nSorted Elements:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" | ";
    }
    cout<<"\nDo You Want to sort new Elements?\n1.Yes\n2.No\n";
    cin>>ch;
    }

    return 0;
}




