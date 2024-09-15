#include "i2c.hpp"

void JustI2C::writeRegister(byte addr, byte reg, byte value)
{
    Wire.beginTransmission(addr);
    Wire.write(reg);
    Wire.write(value);
    Wire.endTransmission();
}
