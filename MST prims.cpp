#include <iostream>
#include <cstring>
#define INF 1000000
using namespace std;

int main ()
{
int n;

cout<<"Enter no. of edges\n";
cin>>n;
int a[n][n];
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
int ne;
int select[n];
memset(select, false, sizeof (select));
ne = 0;
select[0] = true;
int x;
int y;
cout << "Edge" << "   : " << "Weight";
cout << endl;
  while (ne < n - 1)
  {
      int min = INF;
      x = 0;
      y = 0;
      for (int i = 0; i < n; i++)
      {
        if (select[i])
        {
            for (int j = 0; j < n; j++)
            {
              if (!select[j] && a[i][j])
              {                                 // not in selected and there is an edge
                  if (min > a[i][j])
                  {
                      min = a[i][j];
                      x = i;
                      y = j;
                  }

              }
          }
        }
      }
      cout << x <<  " -> " << y << " :  " << a[x][y];
      cout << endl;
      select[y] = true;
      ne++;
    }

  return 0;
}
