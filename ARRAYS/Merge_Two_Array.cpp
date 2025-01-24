#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Size of Your First Array  : ";
    cin >> m;
    cout << "Enter Size of Your Second Array : ";
    cin >> n;
    int array1[m], array2[n], Merged_Array[m + n];
    cout << "Enter Array  First Element : ";
    for (int i = 0; i < m; i++)
    {
        cin >> array1[i];
    }
    cout << "Enter Array  Second Element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array2[i];
    } 
  for (int i = 0; i < m; i++)
  {
   Merged_Array[i]=array1[i];
  }
  for (int i = 0; i < n; i++)
  {
  Merged_Array[m+i]=array2[i];
  }

  for (int i = 0; i < (m+n)-1;)
    {
        if (Merged_Array[i] > Merged_Array[i + 1])
        {
            int temp = Merged_Array[i];
            Merged_Array[i] = Merged_Array[i + 1];
            Merged_Array[i + 1] = temp;
            i = 0;
        }
        else
        {
            i++;
        }
    }
  cout<<"Merged Array is  : "<<endl;
  for (int i = 0; i < m+n; i++)
  {
  cout<<Merged_Array[i]<<" ";
  }
  

    return 0;
}