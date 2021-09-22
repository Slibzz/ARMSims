#pragma once
#include <cstdint>
class Register
{
private:
	std::uint32_t Address;
public:
	Register(std::uint32_t Address);
	std::uint32_t getAddress() { return Address; };
	void setAddress(std::uint32_t newAddress);
};
