/*ex07_29.cpp*/

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void print_arr(bool[], int);

int main()
{
   const int number = 1000;
   bool prime_numbers[number];
   int prime = 1;

   for(int n = 1; n < number; n++)
   {
      prime_numbers[n] = 1;
   }

   int prime_temp;

   while(true)
   {
      for(int i = prime + 1; i < number; i++)
      {
         if(prime_numbers[i] == 1)
	 {
	    prime_temp = i;
	    break;
	 }
      }
      
      if (prime_temp == prime)
          break;
      else
          prime = prime_temp;

      for(int j = prime + 1 ; j < number; j++)
      {
          if (prime_numbers[j] == 0)
             continue;
          if(j % prime == 0)
	  { 
	     prime_numbers[j] = 0;
	  }
      }
   }

   print_arr(prime_numbers, number);

   return 0;
}

void print_arr(bool pR[], int num)
{
   int k = 0;
   cout << "\nList of primes between 1 and " << num << ":\n";
   for(int i = 1; i < num; i++)
   {
      if(pR[i] == 1)
      {
         cout << setw(4) << i;
	 k++;
	 if(k % 10 == 0)
	    cout << endl;
      }
   }
   cout << endl << endl;
}
