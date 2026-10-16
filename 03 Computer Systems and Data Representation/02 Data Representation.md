## Data Representation  
A bit (binary digit) is our base unit.  
A byte is 8 bits.  
2 hex digits is 1 byte.  

C logical operators (e.g. &&, ||) treat nonzero arguments as 1, and zero as 0  

### Information Storage
Def: Processes view memory as a large array of bytes known as virtual memory. The index for each entry is the memory address. Each entry is 1 byte.  

Def: The word size of a machine (typically 32-bit or 64-bit) determines the max size of virtual memory. That is, the largest address is determined by the largest possible integer we can represent. 2^w addresses (w is word size in bits).  

### Byte Ordering in Memory for Multibyte Data  
Big Endian - Big end first; Most significant byte is first  
Little Endian - Little end first; Least significant byte is first  

Example: Represent x = 0x01234567 in memory using big and little endian orderings.  
Big Endian:
```
... | 01 | 23 | 45 | 67 | ...
     0x51 0x52 0x53 0x54
```  
Little Endian:
```
... | 67 | 45 | 23 | 01 | ...
     0xA1 0xA2 0xA3 0xA4
```

Most consumer machines use little endian (x86)  
Advantage of little endian: When a value increases to the point of needing another byte, the memory location doesn't need to change; the new byte can be appended to the end.

When casting char (8-bit) -12 to an int -12, we perform sign extension to maintain the sign, that is, when we make all the leading bits 1s instead of 0s so that we get -12 and not some larger positive value.

### IEEE 754  
A set of standards for representing floating point values. 

Single precision values (32-bit value) have:  
8-bit exponent field value and a 23-bit mantissa field value and a 1-bit sign value. Single precision values are floats in C.

Double precision value has:  
64-bits total, 1-bit sign, 11-bit exponent field value, 52-bit mantissa field value. Double type in C.  

#### General format of the binary value is:  
```
sign bit   exponent field   mantissa field
```

#### Case 1: Normalized Form  
ExpField != all zeros  
ExpField != all ones  
ExpField = biased exp = TrueExp + Bias (127 for 32-bit values, 1023 for 64-bit values)  

If we represent the mantissa as a fractional binary number 1.____ then the mantissa field is ____.  

Ex: Convert -12.625 to a single precision IEEE 754 value. 
Sol: Convert the whole and fractional parts to fractional binary. Value is negative, so sign bit at the end will be 1.  
```
12 => 1100  
0.625 =>  
0.625 x 2 = 1.25  
0.25 x 2 = 0.5  
0.5 x 2 = 1.0  
read down for binary: => 101  
Combine => 1100.101  
```

Now normalize the value (implicit normalization) by moving the decimal point left until it is in the form 1.____
```
1100.101 => 1.100101
```
Notice that we moved 3 places to the left, thus our true exp is 3.  
Everything after the decimal point is our mantissa field => 100101
BiasedExp = TrueExp + Bias, and bias is 127 for 32-bit values => BiasedExp = 130 => 10000010

Final Sol:  
```
sign bit   ExpField   MantissaField
1          10000010   1001010...0
= 1100000101001010...0
```

Ex: Convert to decimal from single precision IEEE value: 0 10000011 10001100...0.  
Sol: Use the following formula: (-1)^Sign * 1.Mantissa * 2^(TrueExp)
```
TrueExp = BiasedExp - Bias = 131 - 127 = 4
Formula => (-1)^0 * 1.100011 * 2^4 = 1.100011 * 2^4
(more decimal 4 places to right) => 11000.11 = 
```

#### Case 2: Denormalized Values
ExpField = All zeros  
TrueExp = 1 - Bias  
No implicit leading 1 for the mantissa field  

Case 2 to Decimal:  
Formula: (-1)^Sign * 0.Mantissa * 2^(TrueExp)  

#### Case 3: Special Values  
ExpField = All ones  
Mantissa field all zeros represents +- infinity  
Any other mantissa field represents "Nan" (not a number) (e.g. sqrt(-1))  