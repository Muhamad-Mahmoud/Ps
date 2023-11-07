// H. One Prime
#include <iostream>
using namespace std;
int main()
{
  int num;
  cin >> num;
  for (int i = 2; i < num / 2; i++)
  {
    if (num % i == 0)
    {
      cout << "NO" << endl;
      continue;
    }
    else
    {
      cout << "YES" << endl;
      continue;
    }
  }

  return 0;
}