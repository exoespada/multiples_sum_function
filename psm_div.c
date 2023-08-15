/*
 * index.c
 * Description: psm_div function defination.
 * Author: Peter Pierre Nzioki (Exoespada).
 * Year: 2023
 * License: MIT
 * Adapted as a coding challenge.
 * Specifically for 'The Coding Room of Spirit and Time'.
 * Crafted by 0ceano and inspired by Project Euler's challenge.
 * To find the sum of all multiples of 3 or 5 below 1000.
 * Refer to the README for more details.
 * Copyright (c) (year) Peter Pierre Nzioki
 * All rights reserved.
 */
#include "sm_div.h"
int sm_div(int d, int n) {
  int c = (n - (n % d)) / d;
  int ph = c + (((c - 1) * (c)) / 2);
  /*
 you can alternatively use the loop
 int ph = c;
 for (int i = 1; i < c; i++)
    ph += i;

 which is less performant (slower) but more intuitive. Using the loop is easier
 to follow.*/
  return (ph * d);
}
