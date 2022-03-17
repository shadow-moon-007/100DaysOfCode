#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cout << "enter test case: ";
    cin >> t;
    while (t)
    {
        int f = 0, l = 0;
        int first, last;
        cout << "enter numbers :";
        cin >> first;
        cin >> last;
        for (int i = first; i <= last; i++)
        {
            if (f == 0)
            {
                if (isPrime(i))
                {
                    f = i;
                }
                else
                {
                    i = i + 1;
                }
            }
            if (l == 0)
            {
                if (isPrime(last))
                {
                    l = last;
                }
                else
                {
                    last -= 1;
                }
            }
            if (f != 0 && l != 0)
            {
                break;
            }
        }
        if (f != 0 && l != 0)
        {
            cout << l - f + 1;
        }
        else
        {
            cout << "-1";
        }
        t--;
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// #define MAX 100005

// bool prime[MAX];
// int prefix[MAX], suffix[MAX];

// void precompute(int prefix[], int suffix[])
// {
//     memset(prime, true, sizeof(prime));

//     // Sieve of Eratosthenes
//     for (int i = 2; i * i < MAX; i++)
//     {
//         if (prime[i])
//         {
//             for (int j = i * i; j < MAX; j += i)
//                 prime[j] = false;
//         }
//     }

//     prefix[1] = 1;
//     suffix[MAX - 1] = 1e9 + 7;

//     for (int i = 2; i < MAX; i++)
//     {
//         if (prime[i])
//             prefix[i] = i;
//         else
//             prefix[i] = prefix[i - 1];
//     }

//     for (int i = MAX - 1; i > 1; i--)
//     {
//         if (prime[i])
//             suffix[i] = i;
//         else
//             suffix[i] = suffix[i + 1];
//     }
// }

// int query(int prefix[], int suffix[], int L, int R)
// {
//     if (prefix[R] < L || suffix[L] > R)
//     {
//         cout << "-1" << endl;
//         return 0;
//     }
//     else
//     {
//         if (prefix[R] - suffix[L] > 0)
//         {
//             cout << prefix[R] - suffix[L] << endl;
//         }
//         else if (prefix[R] - suffix[L] == 0)
//         {
//             cout << "0" << endl;
//         }

//         return prefix[R] - suffix[L];
//     }
// }

// int main()
// {
//     int q;
//     cin >> q;
//     int L[q];
//     int R[q];
//     for (int i = 0; i < q; i++)
//     {
//         cin >> L[i] >> R[i];
//     }
//     precompute(prefix, suffix);

//     for (int i = 0; i < q; i++)
//     {
//         query(prefix, suffix, L[i], R[i]);
//     }

//     return 0;
// }