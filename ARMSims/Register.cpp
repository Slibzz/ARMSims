#include "Register.h"

Register::Register(std::uint32_t Address) {
	this->Address=Address;
}

void Register::increment() {
	Address = Address+4;
}
