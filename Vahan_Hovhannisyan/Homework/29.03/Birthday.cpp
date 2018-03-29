#include <iostream>


	int main()
	{
		std::wcout << L"Enter a date in the following way please - dd-mm-yyyy: ";
		std::wstring result;
		std::wstring date;
		std::getline(std::wcin, date);
		int day = std::stoi(date.substr(1, 1) + date.substr(0, 1));
		int month = std::stoi(date.substr(4, 1) + date.substr(3, 1));
		int year = std::stoi(date.substr(6, 4));
		if (month > 12 || month < 1)
		{
			result = L"Aliens won't come to Vinny's Birthday ";
		}
		else if (year % 4 == 0 && month == 2 && day > 29)
		{
			result = L"Aliens won't come to Vinny's Birthday ";
		}
		else if (year % 4 != 0 && month == 2 && day > 28)
		{
			result = L"Aliens won't come to Vinny's Birthday ";
		}
		else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
		{
			result = L"Aliens won't come to Vinny's Birthday ";
		}
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		{
			result = L"Aliens won't come to Vinny's Birthday ";
		}
		else if (month > std::stoi(date.substr(3, 2)))
		{
			result = L"Aliens will be late for Vinny's Birthday ";
		}
		else if (month < std::stoi(date.substr(3, 2)))
		{
			result = L"Aliens will be early for Vinny's Birthday ";
		}
		else if (day > std::stoi(date.substr(0, 2)))
		{
			result = L"Aliens will be late for Vinny's Birthday ";
		}
		else if (day < std::stoi(date.substr(0, 2)))
		{
			result = L"Aliens will be early for Vinny's Birthday ";
		}
		else
		{
			result = L"Aliens will arrive in time ";
		}
		std::wcout << day << L".";
		std::wcout << month << L".";
		std::wcout << year;
		std::wcout << L"\n" << result;
		return 0;
	
}
