#pragma once
#include "RegistersBank.h"
class CPU
{
private:
	RegistersBank bank;
	Register addressRegister;
	Register opRegister;
	Register readRegiser;
	Register writeRegister;
public:
	CPU(RegistersBank bank, Register addressRegister, Register opRegister, Register readRegiser, Register writeRegister);
};

