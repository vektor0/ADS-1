// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  if (value <=1)
    return false;
  for (int z = 2; z <= (value/2); z++) {
    if ((value % z) == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t c = 0;
  uint64_t z = 0;
  while (z != n) {
    c++;
    if (checkPrime(c))
      z++;
  }
  return c;
}

uint64_t nextPrime(uint64_t value) {
  value++;
    while (checkPrime(value) != true) {
      value++;
    }
    return value;
}


uint64_t sumPrime(uint64_t hbound) {
  uint64_t ss = 0;
    for (uint64_t z = 2; z < hbound; z++) {
      if (checkPrime(z) == true)
        ss += z;
    }
    return ss;
}
