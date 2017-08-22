#include<iostream>
#include<iomanip>

using namespace std;

bool prime(int a)
{
	bool flag = true;
	int i = 0;
	for (i = 2; i <= (a / 2); i++)
	{
		if ((a % i) == 0) flag = false;
	}

	return flag;
}

int main()
{
	int n,i=0;
	int num1 = 0, num2 = 1;
	int curr,next,prev;
	cout << "Enter the number of Fibonacci number  " << endl;
	cin >> n;

	if (n == 1) { cout << num1 << endl; }
	else if (n == 2) { cout << num1 << " " << num2; }
	else
	{
		cout << num1 << " " << num2;
		prev = num1;
		next = num2;
		for (i = 1; i < n; i++)
		{
			//prev = next;
			curr = next + prev;
			prev = next;
			next = curr;
			cout << " " << curr;
		}
	}

	cout << endl;

	if ((curr % 3) == 0)
	{

		cout << "Buzz" << endl;
		if ((curr % 5) == 0)
		{
			cout << "Fizz" << endl;
			cout << "FizzBuzz" << endl;
		}
	}

	else if ((curr % 5) == 0)
	{

		cout << "Fizz" << endl;
		
	}
	 
	 else if(prime(curr))  cout << "BuzzFizz" << endl;
     else  cout << curr << endl;

	//cout << endl;
}