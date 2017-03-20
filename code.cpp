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

//-----------------------------------------

//2017.03.20
//1924
#include<iostream>
using namespace std;

void Print(int num);

int main()
{
	int x, y, sum = 0;
	scanf("%d %d", &x, &y);

	sum += y;

	if (x == 1)
	{
		Print(sum % 7);
	}

	if (x > 1)
	{
		sum += 31;
		if (x == 2)
		{
			Print(sum % 7);
		}
	}
	if (x > 2)
	{
		sum += 28;
		if (x == 3)
		{
			Print(sum % 7);
		}
	}
	if (x > 3)
	{
		sum += 31;
		if (x == 4)
		{
			Print(sum % 7);
		}
	}
	if (x > 4)
	{
		sum += 30;
		if (x == 5)
		{
			Print(sum % 7);
		}
	}
	if (x > 5)
	{
		sum += 31;
		if (x == 6)
		{
			Print(sum % 7);
		}
	}
	if (x > 6)
	{
		sum += 30;
		if (x == 7)
		{
			Print(sum % 7);
		}
	}
	if (x > 7)
	{
		sum += 31;
		if (x == 8)
		{
			Print(sum % 7);
		}
	}
	if (x > 8)
	{
		sum += 31;
		if (x == 9)
		{
			Print(sum % 7);
		}
	}
	if (x > 9)
	{
		sum += 30;
		if (x == 10)
		{
			Print(sum % 7);
		}
	}
	if (x > 10)
	{
		sum += 31;
		if (x == 11)
		{
			Print(sum % 7);
		}
	}
	if (x > 11)
	{
		sum += 30;
		if (x == 12)
		{
			Print(sum % 7);
		}
	}
	return 0;
}

void Print(int num)
{
	switch (num)
	{
	case 0:
		printf("SUN");
		break;
	case 1:
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	default:
		break;
	}
}

//-----------------------------------------

//2017.03.20
//2438
#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

//-----------------------------------------

//2017.03.20
//2439
#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-(i+1); j++)
		{
			printf(" ");
		}
		for (int k = 0; k < (i+1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

//-----------------------------------------

//2017.03.20
//2440
#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}