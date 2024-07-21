#include <iostream>
#include <cstdint>


int main()
{
	constexpr int32_t smallRoomPrice {25};
	constexpr int32_t largeRoomPrice {32};
	constexpr double tax {0.06};
	
std::cout << "Estimate for carpet cleaning service\n\n";

std::cout << "Number of small rooms: ";
int32_t smallRooms {0};
std::cin >> smallRooms;

std::cout << "Number of large rooms: ";
int32_t largeRooms {0};
std::cin >> largeRooms;

std::cout << "Price per small room: " << smallRoomPrice << " $" << '\n';
std::cout << "Price per large room: " << largeRoomPrice << " $" << '\n';

int32_t cost{(smallRoomPrice * smallRooms) + (largeRoomPrice * largeRooms)};
std::cout << "Cost: " << cost << '\n';

double currentTax {cost * tax};
std::cout << "Tax: " << currentTax << " $" << '\n';

std::cout << "=================================\n";
std::cout << "Total estimate: " << cost + tax << " $" << '\n';
std::cout << "The estimate is valid for 30 days";


} 