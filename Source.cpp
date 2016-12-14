#include<iostream>
using namespace std;
int numb[20];
int n, value;
void InputValue(int numb[20], int& n)
{
	int i = 0;
	int value;
	cout << "Enter any integers or -999 to end\n";
	cin >> value;
	while (i < 9 && value != -999)
	{
		numb[i] = value;
		cin >> value;
		i++;
	}
	n = i;
}
void printValue(int numb[20], int n)
{
	cout << "Original Unsorted data:\n";
	for (int i = 0; i < n; i++)
	{
		cout << numb[i] << endl;
	}
}
void bubblesort(int numb[20], int n)
{
	int i, j, temp;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < (n - 1); ++j)
		{
			if (numb[j] > numb[j + 1])
			{
				temp = numb[j];
				numb[j] = numb[j + 1];
				numb[j + 1] = temp;
			}
		}		
	}
	cout << "Data Sorted (Ascending):\n";
	for (j = 0; j < n; ++j)
	{
		cout << numb[j] << endl;
	}
	cout << "Data Sorted (Descending):\n";
	for (i = n-1; i > -1; i--)
		{
			cout << numb[i]<<endl;
		}
}
void varience( int numb[20], int n)
{
	double avg = 0.0;
	int sum = 0;
		float variance = 0.0;
		float values = 0.0;
		for (int i = 0; i <= n-1; i++)
		{
			values = (values + pow((numb[i] - avg), 2));
		}
		variance = values / n;
		cout << "Varience: " << variance << endl;
		}

void MinMax(int numb[20], int n)
{
	int max = numb[0];
	int min = numb[0];

	for ( int i = 0; i < n; i++)
	{
		if (numb[i] > max)
		{
			max = numb[i];
		}
		if (numb[i] < min)
		{
			min = numb[i];
		}
	}
	int range;
	range = max - min;

	cout << "Maximum Value: " << max << endl;
	cout << "Minimum Value: " << min << endl;
	cout << "Range: " << range << endl;
}
void median(int numb[20], int n)
{
	int med = 0;
	for (int i = 0; i < n; i++)
	{
		if (n % 2 == 1)
		{
			med = (n + (n / 2)) / 2;
		}
		else
		{
			med = (n + 1) / 2;
		}
	}
	cout << "median: " << numb[med] << endl;
}
void frequency(int numb[20], int n)
{
	int i = 0;
	int p = 1;
	int q = 1;
	value = numb[0];
	cout << "Frequency:\n";
	while (p != n + 1)
	{
		if(value == numb[p])
		{
			q++;
		}		
		else if (q != 1)
		{
			cout << value << "occurs " << q << " times.\n";
			q = 1;
			value = numb[p];
		}
		p++;
	}
}

void main()
{
	InputValue(numb, n);
	printValue(numb, n);
	bubblesort(numb, n);
	varience(numb, n);
	MinMax(numb, n);
	median(numb, n);
	frequency(numb, n);
	int t = n / 2;
	int mode = numb[t];
	cout << "Mode: " << mode<< endl;
	system("PAUSE");
}