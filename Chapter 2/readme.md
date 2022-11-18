# Bitwise Operation
Basically, let's understand what the code is doing. 

## Isolation
```
x >> (p + 1 - 3)
```
Basically, you just want to shift the bits that you want to the right. 

## Extraction

```
~0 = 1111 1111
~0 << 3 = 1111 1000
~(~0 << 3) = 0000 0111
```
Recall from cheatsheet that right shfting unsigned char,int,short,long, will always be filled with zeros. 

