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

void double_pointer(vector<int> &v)
{

   int l = 0, r = v.size() - 1;

   while (l < r)
   {
      if (v[l] == 1 && v[r] == 0)
      {
         v[l++] = 0;
         v[r--] = 1;
      }
      if (v[l] == 0)
      {
         l++;
      }
      if (v[r] == 1)
      {  
         r--;
      }
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
   // sort(v);   // NORMAL METHOD
   double_pointer(v); // USING DOUBLE POINTER
   for (int i = 0; i < n; i++)
   {
      cout << v[i];
   }










   
   return 0;
}