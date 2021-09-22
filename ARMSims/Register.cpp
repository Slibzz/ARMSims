#include "Register.h"

Register::Register(std::uint32_t Address) {
	this->Address=Address;
}
void Register::setAddress(std::uint32_t newAddress) {
	Address = newAddress;
}
