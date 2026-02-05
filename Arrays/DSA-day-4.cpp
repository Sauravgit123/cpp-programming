#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort(vector<int> &v)
{

   int c = 0;
   for (int el : v)
   {

      if (el == 0)
      {
         c++;
      }
   }

   for (int i = 0; i < v.size(); i++)
   {
      if (i < c)
      {
         v[i] = 0;
      }
      else
         v[i] = 1;
   }
}

int main()
{
   int n;
   cout << "Enter the no. of elements in vector :";
   cin >> n;
   vector<int> v;
   cout << "Enter the elements :";
   for (int i = 0; i < n; i++)
   {
      int e;
      cin >> e;
      v.push_back(e);
   }
   sort(v);
   for (int i = 0; i < n; i++)
   {
      cout << v[i];
   }

   return 0;
}