#include "CPU.h"

CPU::CPU(RegistersBank bank, Register addressRegister, Register opRegister, Register readRegiser, Register writeRegister) {
	this->bank = bank;
	this->addressRegister = addressRegister;
	this->opRegister = opRegister;
	this->readRegiser = readRegiser;
	this->writeRegister = writeRegister;

}