#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const ll MAX = 1000001 ;

ll factor[MAX] = { 0 };

void generatePrimeFactors()
{
	factor[1] = 1;

	for (ll i = 2; i < MAX; i++)
		factor[i] = i;

	for (ll i = 4; i < MAX; i += 2)
		factor[i] = 2;


	for (ll i = 3; i * i < MAX; i++) {
		if (factor[i] == i) {
			for (ll j = i * i; j < MAX; j += i) {
				if (factor[j] == j)
					factor[j] = i;
			}
		}
	}
}

int calculateNoOFactors(int n)
{
	if (n == 1)
		return 1;

	ll ans = 1;

	ll dup = factor[n];

	ll c = 1;

	ll j = n / factor[n];

	while (j != 1) {
		if (factor[j] == dup)
			c += 1;

		else {
			dup = factor[j];
			ans = ans * (c + 1);
			c = 1;
		}
		j = j / factor[j];
	}
	ans = ans * (c + 1);

	return ans;
}

ll primeFactors(int n)
{
    ll d=0;
    while (n % 2 == 0)
    {
        d++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            d++;
            n = n/i;
        }
    }

    if (n > 2)
        d++;
    return d;
}

int main()
{

	generatePrimeFactors();
	ll t,x,k,cnt=0,dnt=0;
	cin >> t;
	while(t--)
	{
		cin >> x >> k;
		for(ll i=1;i<=(x+k);i++)
		{
			ll z=calculateNoOFactors(i);
			if(x==z)
			{
				cnt=i;
				dnt=primeFactors(cnt);
                if(dnt==k)
                {
                    cout << "1" << endl;
                }
                else
                {
                    cout << "0" << endl;
                }
                break;
			}
			else
			{
				continue;
			}
		}
	}

	return 0;
}
