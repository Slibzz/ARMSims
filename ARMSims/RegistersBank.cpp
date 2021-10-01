#include "RegistersBank.h"
RegistersBank::RegistersBank() {
	for (int i = 0;i < REGISTERS_NUMBERS;i++)
	{
		std::random_device dev;
		std::mt19937 rng(dev()); // Mersenne Twister  19937 bits 
		std::uniform_int_distribution<std::uint32_t> dist(0, 4294967295); // distribution in range [0, 4,294,967,295] uniform
		registers[i].setAddress(dist(rng));
	}
}

void RegistersBank::toString() {
	for (int i = 0;i < REGISTERS_NUMBERS;i++)
	{
		std::cout << "R" << std::dec  << i << " 0x";
		std::cout  << std::hex << registers[i].getAddress() << "\n";
	}
}
