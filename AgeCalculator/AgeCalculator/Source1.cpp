#include <iostream>
using namespace std;
int main()
{
	int counter = 0;
	int monthindex;
	bool result = true;
	int days_sum = 0;
	int totaldays = 0;

	char name[25];
	cout << "Enter your name: ";
	cin.getline(name, 25);
	cout << endl;

	cout << "Welcome to Age Calculator " << name << "!";
	cout << endl << endl;

	int birthyear;
	cout << "Enter year of birth: ";
	cin >> birthyear;
	cout << endl;

	int birthmonth;
	cout << "Enter month (number) of birth: ";
	cin >> birthmonth;
	cout << endl;

	int birthdate;
	cout << "Enter date of birth: ";
	cin >> birthdate;
	cout << endl;

	int currentyear;
	cout << "Enter year currently going on: ";
	cin >> currentyear;
	cout << endl;

	int currentmonth;
	cout << "Enter month (number) currently going on: ";
	cin >> currentmonth;
	cout << endl;

	int currentdate;
	cout << "Enter date currently going on: ";
	cin >> currentdate;
	cout << endl;

	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (currentyear % 4 == 0)
		{

		month[1] = 29;

		}

	int age;

	if (currentmonth < birthmonth)
	{

		age = currentyear - birthyear - 1;

	}

	else
	if (currentmonth == birthmonth)
	{

		if (currentdate < birthdate)
		{

			age = currentyear - birthyear - 1;

		}

		else
		{

			age = currentyear - birthyear;

		}

	}

	else
	{

		age = currentyear - birthyear;

	}

	monthindex = birthmonth - 1;

	if (currentdate != birthdate || (currentdate == birthdate && currentmonth != birthmonth))
	{

		while (result)
		{

			if (counter == 0)
			{
				days_sum = month[monthindex] - birthdate;
				totaldays = days_sum;

				if (monthindex == 11)
				{

					monthindex = 0;

				}

				else
				{

					monthindex++;

				}

			}

			else
			{

				days_sum = month[monthindex];
				totaldays = totaldays + days_sum;

				if (monthindex == 11)
				{

					monthindex = 0;

				}

				else
				{
					monthindex++;

				}

			}

			counter++;

			if (monthindex == currentmonth - 1)
			{

				days_sum = currentdate;
				totaldays = totaldays + days_sum;
				result = false;

			}

		}

	}

	else
		{

		totaldays = 0;

	}

	for (int i = -100; i < 999999999; i++)
	{
	}

	cout << "You are currently " << age << " year(s) and " << totaldays << " day(s) old.";
	cout << endl << endl;
	return 0;

}