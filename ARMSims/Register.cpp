#include "Register.h"

Register::Register(std::uint32_t Address) {
	this->Address=Address;
}
void Register::setAddress(std::uint32_t newAddress) {
	Address = newAddress;
}

std::uint32_t Register::getAddress() {
	return Address;
}
void Register::increment() {
	Address = Address+4;
}
