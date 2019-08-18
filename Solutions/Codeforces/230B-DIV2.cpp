#include <bits/stdc++.h>
 
using namespace std;
 
const int LIMIT = 1000000;
vector<int> sieve(LIMIT + 1, 1);
long long primes[LIMIT + 1];
int primeCount = 1;
 
int main()
{
    for (int i = 2; i <= LIMIT; ++i)
    {
        if (sieve[i])
        {
            primes[primeCount] = i;
            sieve[i] = 1;
            primeCount++;
        }
        for (int j = i * 2; j <= LIMIT; j += i)
        {
            sieve[j] = 0;
        }
    }
    set<long long> storage;
    for (int i = 1; i <= primeCount; ++i)
        storage.insert(primes[i] * primes[i]);
    int n;
    cin >> n;
    long long t;
    while (n--)
    {
        cin >> t;
        cout << ((storage.find(t) != storage.end()) ? "YES" : "NO") << "\n";
    }
    return 0;
}
