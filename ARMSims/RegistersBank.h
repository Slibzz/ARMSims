#pragma once
#include <cstdint>
#include <random>
#include <iostream>
#define SP 13
#define LR 14
#define PC 15
#define CPSR 16
#define REGISTERS_NUMBERS 16
class RegistersBank
{
private:
	std::uint32_t registers[16];
	// We will forget private/exception registers for now

public:
	RegistersBank();
	void toString();
};

