#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstring>
using namespace std; 
  
// initializing the max value  
#define MAX_SIZE 1000005 
  
// Function to generate N prime numbers using  
// Sieve of Eratosthenes 
// O(n*log(logn))
void SieveOfEratosthenes(vector<int> &primes)  
{  
    // Create a boolean array "IsPrime[0..MAX_SIZE]" and  
    // initialize all entries it as true. A value in  
    // IsPrime[i] will finally be false if i is  
    // Not a IsPrime, else true.  
    bool IsPrime[MAX_SIZE];  
    memset(IsPrime, true, sizeof(IsPrime));  
    
    for (int p = 2; p * p < MAX_SIZE; p++)  
    {  
        // If IsPrime[p] is not changed, then it is a prime  
        if (IsPrime[p] == true)  
        {  
            // Update all multiples of p greater than or   
            // equal to the square of it  
            // numbers which are multiple of p and are  
            // less than p^2 are already been marked.   
            for (int i = p * p; i <  MAX_SIZE; i += p)  
                IsPrime[i] = false;  
        }  
    }  
    
    // Store all prime numbers  
    for (int p = 2; p < MAX_SIZE; p++)  
       if (IsPrime[p])  
            primes.push_back(p); 
             
}  
  
// Driver Code 
int main() 
{ 
    int t;
    cin >> t;
    int a[t];
    for (int i=0; i<t; i++) {
      cin >> a[i];
    }
    
    // To store all prime numbers 
    vector<int> primes; 
    
    // Function call 
    SieveOfEratosthenes(primes); 
  
    for (int i=0; i<t; i++) {
      cout << primes[a[i]-1] << endl;
    }
  
    return 0; 
}