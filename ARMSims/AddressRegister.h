#pragma once
#include <cstdint>
class AddressRegister
{
private:
	std::uint32_t Address;
public:
	AddressRegister(std::uint32_t Address);
	std::uint32_t getAddress() { return Address; };
	void setAddress(std::uint32_t newAddress);
};