#include <iostream>
#include <ctime>
#include <iomanip>

int main()
{
	time_t	t = time(NULL);
	tm *local = localtime(&t);

	std::cout << "[" << local->tm_year + 1900
			<< std::setw(2) << std::setfill('0') << local->tm_mon
			<< std::setw(2) << std::setfill('0') << local->tm_mday << "_"
			<< std::setw(2) << std::setfill('0') << local->tm_hour
			<< std::setw(2) << std::setfill('0') << local->tm_min
			<< std::setw(2) << std::setfill('0') << local->tm_sec << "] ";
}