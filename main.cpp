// Hoppock, Zachary
// sumLoop.cpp
// Oct. 10, 2020
// Print the sum of all even numbers between 2 and 100 (inclusive)
// Version # 1
#include <iostream>

using namespace std;

// I will use R4.5a as an example.  Imagine that it never said specifically that 2 and 100 were inclusive, you wouldn't know whether to initialize i as 0 or 2.  You would also be unsure whether to compare i to 100 with either a <= or just a <.
int main()
{
int sum = 0;
for (int i = 2 /* Is this initialization correct? */; i < 100 /* Is this comparison operator appropriate? */; i = i + 2)
  sum = sum + i;
cout << "The sum of all even numbers between 2 and 100 is " << sum;
return 0;
}