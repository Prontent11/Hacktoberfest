#include<bits/stdc++.h>
using namespace std;



int longestConsecutive (vector < int >&arr)
{
  int n = arr.size ();
  if (n == 0)
    return 0;
  else
    {
      unordered_set < int >s;
    for (int x:arr)
	{
	  s.insert (x);//inseting all the values inside the set;
	}
      int mx (1);
    for (auto element:s)
	{
	  int prev_element = element - 1;
	  if (s.find (prev_element) == s.end ())
	    {			//Here we are checking for the previous consecutive element of current element
	                //if found we will continue otherwise we will start counting from that particular element 
	      int cnt (1);
	      int next_element = element + 1;

	      while (s.find (next_element) != s.end ())
		{
		  next_element++;
		  cnt++;
		}
	      mx = max (mx, cnt);
	    }
	}
      return mx;

    }
}

int main ()
{
  int n;
  cin >> n;
  vector < int >arr (n);
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  int ans = longestConsecutive (arr);
  cout << ans << endl;
  return 0;
}
