#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;



namespace MyInput
{
	int RandomNumber(int From, int To)
	{
		

		int RandNumber = rand() % (To - From + 1) + From;

		return RandNumber;
	}


	int ReadIntInRange(int From, int To, string Messege = "")
	{


		int Number;
		do
		{
			cout << Messege;
			cin >> Number;
		} while (Number < From || Number > To);

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}

		return Number;
	}

	int ReadInt(string messege = "")
	{
		int Number = 0;
		cout << messege;

		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}


		return Number;
	}

	int ReadPositiveInt(string Messege = "")
	{
		int Number = 0;
		do
		{
			cout << Messege;
			cin >> Number;

		} while (Number < 0);

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}

		return Number;
	}

	short ReadShortInRange(int From, int To, string Messege = "")
	{


		short Number;
		do
		{
			cout << Messege;
			cin >> Number;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
				cout << "InValid Number , Please enter a Valid one" << endl;
				cin >> Number;
			}
		} while (Number < From || Number > To);

		

		return Number;
	}

	short ReadShort(string messege = "")
	{
		short Number = 0;
		cout << messege;

		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}


		return Number;
	}

	short ReadPositiveShort(string Messege = "")
	{
		short Number = 0;
		do
		{
			cout << Messege;
			cin >> Number;

		} while (Number < 0);

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}

		return Number;
	}

	float ReadFloatInRange(int From, int To, string Messege = "")
	{
		float Number;
		do
		{
			cout << Messege;
			cin >> Number;
		} while (Number < From || Number > To);

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}

		return Number;
	}

	float ReadFloat(string messege = "")
	{
		float Number;
		cout << messege;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}

		return Number;
	}

	float ReadPositiveFloat(string Messege = "")
	{
		float Number = 0;
		do
		{
			cout << Messege;
			cin >> Number;

		} while (Number < 0);


		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}

		return Number;
	}


	double ReadDoubleInRange(int From, int To, string Messege = "")
	{
		double Number;
		do
		{
			cout << Messege;
			cin >> Number;
		} while (Number < From || Number > To);

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}

		return Number;
	}

	double ReadDouble(string messege = "")
	{
		double Number;
		cout << messege;
		cin >> Number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}

		return Number;
	}

	double ReadPositiveDouble(string Messege = "")
	{
		double Number = 0;
		do
		{
			cout << Messege;
			cin >> Number;

		} while (Number < 0);

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "InValid Number , Please enter a Valid one" << endl;
			cin >> Number;
		}

		return Number;
	}


	string ReadString(string messege = "" )
	{
		string Input;
		cout << messege;
		getline(cin >> ws ,Input);
		return Input;
	}

	char ReadChar(string Messege = "")
	{
		char Char;
		cout << Messege;
		cin >> Char;
		return Char;
	}


}