//2017.03.16
//1000
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a + b;
}

//-----------------------------------------

//2017.03.16
//1001
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << a - b;
}

//-----------------------------------------

//2017.03.16
//1008
#include<iostream>
using namespace std;

int main()
{
	double a = 0, b = 0;
	cin >> a >> b;
	cout.precision(20);
	cout << a/b;
}

//-----------------------------------------

//2017.03.16
//2557
#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "Hello World!";
	return 0;
}

//-----------------------------------------

//2017.03.16
//2539
#include<iostream>
using namespace std;

int main()
{
	int n = 0;

	cin >> n;

	for (int i = 0; i < 9; i++)
	{
		printf("%d * %d = %d", n, i + 1,n*(i+1));

		if (i != 8)
		{
			printf("\n");
		}
	}

	return 0;
}

//-----------------------------------------

//2017.03.16
//2541
#include<iostream>
using namespace std;

int main()
{
	int n = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		printf("%d", i);

		if (i != n)
		{
			printf("\n");
		}
	}

	return 0;
}

//-----------------------------------------

//2017.03.16
//2542
#include<iostream>
using namespace std;

int main()
{
	int n = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		printf("%d", n-i);
		if (i != n - 1)
		{
			printf("\n");
		}
	}

	return 0;
}

//-----------------------------------------

//2017.03.16
//10950
#include<iostream>
using namespace std;

int main()
{
	int a, b, t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}

//-----------------------------------------

//2017.03.16
//10952
#include<iostream>
using namespace std;

int main()
{
	int a, b;

	while(1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			return 0;
		}
		cout << a + b << endl;
	}

	return 0;
}

//-----------------------------------------

//2017.03.16
//10953
#include<iostream>
using namespace std;

int main()
{
	int a, b, t;
	char c;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> c >> b;
		
		cout << a + b << endl;
	}

	return 0;
}

//-----------------------------------------

//2017.03.16
//10998
#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	cout << a*b;
}

//-----------------------------------------

//2017.03.16
//11021
#include<iostream>
using namespace std;

int main()
{
	int a, b, t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a>> b;
		
		cout <<"Case #"<<i+1<<": " <<a + b << endl;
	}

	return 0;
}

//-----------------------------------------

//2017.03.16
//11022
#include<iostream>
using namespace std;

int main()
{
	int a, b, t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;

		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << endl;
	}

	return 0;
}

//-----------------------------------------

//2017.03.16
//11718
#include<iostream>
using namespace std;

int main()
{
	char str[101] = { 0 };

	while (1)
	{
		cin.getline(str, sizeof(str));
		printf("%s\n",str);

		if (cin.eof())
		{
			break;
		}
	}
	return 0;
}