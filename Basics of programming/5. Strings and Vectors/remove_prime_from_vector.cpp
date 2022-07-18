//https://www.pepcoding.com/resources/online-java-foundation/string,-string-builder-and-arraylist/remove-primes-official/ojquestion
#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n)
{
    for (int i=2; i*i<=n; i++)
    {
        if (n%i==0)
            return false;
    }
    return true;
}

void removeprimes(vector<int> v)
{
    int n = v.size();
    for (int i=n-1; i>=0; i--)
    {
        if (isPrime(v[i]))
        {
            v.erase(v.begin()+i);
        }
    }
    
    for (int it : v)
    {
        cout<<it<<" ";
    }
}
int main()
{
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  removeprimes(v);
}