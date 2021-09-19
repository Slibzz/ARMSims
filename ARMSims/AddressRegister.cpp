#include "AddressRegister.h"

AddressRegister::AddressRegister(std::uint32_t Address) {
	this->Address=Address;
}
void AddressRegister::setAddress(std::uint32_t newAddress) {
	Address = newAddress;
}
