#include<iostream>
#include<iomanip>
#include<string>
#include<string.h>
#include<math.h>

int daysOfMonths[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int year);
int nextDay(int year, int month, int day);
bool dateIsBefore(int year1, int month1, int day1, int year2, int month2, int day2);
int daysBetweenDates(int year1, int month1, int day1, int year2, int month2, int day2);
bool palindrome(std::string s);
bool armStrong(int n);
bool isPrime(int n);
void towers(int num, char rod1, char rod2, char rod3);
int main()
{
	//std::cout << daysBetweenDates(2012, 1, 1, 2012, 2, 28) << std::endl;
	/*int y;
	std::cin >> y;
	if(isLeapYear(y))
		std::cout <<"Is leap year"<< std::endl;
	else
		std::cout << "Is not leap year" << std::endl;
	std::string s;
	std::cin >> s;
	if (palindrome(s))
		std::cout << "Palindrome" << std::endl;
	else
		std::cout << "Not palindrome" << std::endl;
	int n;
	std::cin >> n;
	if (armStrong(n))
		std::cout << "ArmStrong number" << std::endl;
	else
		std::cout << "Not ArmStrong number" << std::endl;
	int n;
	std::cin >> n;
	if (isPrime(n))
		std::cout << "Is Prime number" << std::endl;
	else
		std::cout << "Is not Prime number" << std::endl;*/
	int num;

	std::cout << "Enter the number of disks : ";
	std::cin >> num;
	towers(num, 'A', 'C', 'B');
	return 0;
    
}

bool isLeapYear(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				return true;
			else
				return false;
		}
		else
			return true;
	}
	else
		return false;
}

int nextDay(int year, int month, int day) {
	if (isLeapYear(year) == true)
		daysOfMonths[1] = 29;
	else
		daysOfMonths[1] = 28;
	if (day < daysOfMonths[month - 1])
		return year, month, day + 1;
	if (month < 12)
		return year, month + 1, 1;
	else
		return year + 1, 1, 1;
}

bool dateIsBefore(int year1, int month1, int day1, int year2, int month2, int day2) {
	if (year1 < year2)
		return true;
	if (year1 == year2) {
		if (month1 < month2)
			return true;
		if (month1 == month2)
			return day1 < day2;
	}
	return false;
}
int daysBetweenDates(int year1, int month1, int day1, int year2, int month2, int day2)
{
	if (dateIsBefore(year1, month1, day1, year2, month2, day2) == true) {
		int days = 0;
		while (dateIsBefore(year1, month1, day1, year2, month2, day2)) {
			year1, month1, day1 = nextDay(year1, month1, day1);
			days++;
		}
		return days;
	}
	else
	{
		std::cout << "You Have No Time Machine!!! did You??" << std::endl;
		return -1;
	}
}
	
bool palindrome(std::string s)
{
	std::string rev;
	int j=s.length()-1;
	for (int i = 0; i<s.length()-1; i++) {
		if(s[i]!=s[j])
			return false;
		j--;
	}
	return false;

}
bool armStrong(int n) {
	int org = n;
	int product=0;
	while (n != 0) {
		product += pow(n % 10, 3);
		n /= 10;
	}
	if (product == org)
		return true;
	else
		return false;
}
bool isPrime(int n) {
	for (int i = 2; i < n-1; i++) {
		if (n%i == 0)
			return false;
		else
			return true;
	}
}
void towers(int num, char rod1, char rod2, char rod3)
{
	if (num == 1)
	{
		std::cout << "Move disk 1 from rod " << rod1 << " to rod " << rod2<<std::endl;
		return;
	}
	towers(num - 1, rod1, rod3, rod2);
	std::cout << "Move disk " << num << " from rod " << rod1 << " to rod " << rod2<<std::endl;
	towers(num - 1, rod3, rod2, rod1);
}