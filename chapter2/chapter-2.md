# Chapter 2

<!-- TOC -->

- [Chapter 2](#chapter-2)
  - [2.1](#21)
    - [2.1A](#21a)
    - [2.1B](#21b)
    - [2.1C](#21c)
    - [2.1D](#21d)
  - [2.2](#22)
  - [2.3](#23)
  - [2.4](#24)
    - [2.4A](#24a)
    - [2.4B](#24b)
    - [2.4C](#24c)
    - [2.4D](#24d)
  - [2.5](#25)
  - [2.6](#26)
    - [2.6A](#26a)
    - [2.6B](#26b)
    - [2.6C](#26c)
  - [2.7](#27)

<!-- /TOC -->

## 2.1

### 2.1A

```text
0x39A7F8
0011 1001 1010 0111 1111 1000
```

### 2.1B

```text
1100 1001 0111 1011
   C    9    7    B
0xC97B
```

### 2.1C

```text
0xD5E4C
1101 0101 1110 0100 1100
```

### 2.1D

```text
10 0110 1110 0111 1011 0101
 2    6    E    7    B    5
0x26E7B5
```

## 2.2

| n   | $2^n$ (dec) | $2^n$ (hex) |
| --- | ----------- | ----------- |
| 9   | 512         | 0x200       |
| 19  | 524288      | 0x80000     |
| 14  | 16384       | 0x4000      |
| 16  | 65536       | 0x10000     |
| 17  | 131072      | 0x20000     |
| 5   | 32          | 0x20        |
| 7   | 128         | 0x80        |

## 2.3

| dec | bin       | hex  |
| --- | --------- | ---- |
| 0   | 0000 0000 | 0x00 |
| 167 | 1010 0111 | 0xA7 |
| 62  | 0011 1110 | 0x3E |
| 188 | 1011 1100 | 0xBC |
| 55  | 0011 0111 | 0x37 |
| 136 | 1000 1000 | 0x88 |
| 243 | 1111 0011 | 0xF3 |
| 82  | 0101 0010 | 0x52 |
| 172 | 1010 1100 | 0xAC |
| 231 | 1110 0111 | 0xE7 |

## 2.4

### 2.4A

$$
0x503C + 0x8 = 0x5044
$$

### 2.4B

$$
0x503C - 0x40 = 0x4FFC
$$

### 2.4C

$$
0x503C + 64
$$
$$
= 0x503C + 0x40 = 0x507C
$$

### 2.4D

$$
0x50EA - 0x503C = 0xAE
$$

## 2.5

0x 87 65 43 21
|     | little endian | big endian |
| --- | ------------- | ---------- |
| A   | 21            | 87         |
| B   | 21 43         | 87 65      |
| C   | 21 43 65      | 87 65 43   |

## 2.6

```C
int   3510593   -> 0x00359141
float 3510593.0 -> 0x4A564504
```

### 2.6A

1. 0000 0000 0011 0101 1001 0001 0100 0001
2. 0100 1010 0101 0110 0100 0101 0000 0100

### 2.6B

```text
       1101011001000101000001
1001010010101100100010100000100
```

### 2.6C

despite of the first signed bit, all bits are included in float

## 2.7

61 62 63 64 65 66 (`strlen` does not contain 0x00 length)