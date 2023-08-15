/*
 * index.c
 * Description: main file
 * Author: Peter Pierre Nzioki (Exoespada).
 * Year: 2023
 * License: GPL V3
 * Adapted as a coding challenge.
 * Specifically for 'The Coding Room of Spirit and Time'.
 * Crafted by 0ceano and inspired by Project Euler's challenge.
 * To find the sum of all multiples of 3 or 5 below 1000.
 * Refer to the README for more details.
 *
 * Copyright (c) (year) Peter Pierre Nzioki
 * All rights reserved.
 */

#include "sm_div.h"
#include <stdio.h>
/* Main function */
int main(void) {
  int d, n;
  puts("Hello! This program calculates and displays the sum of all multiples "
       "of a chosen number up to a specified limit. For instance, it can "
       "compute the sum of all the multiples of 15 that are less than 1000.");
  puts("Please input your divisor:");
  scanf("%d", &d);
  puts("Please input the maximum value up to which you'd like to find the "
       "multiples:");
  scanf("%d", &n);
  int sum = sm_div(d, n);
  printf("The sum of all the multiples of %d below %d is %d\n", d, n, sum);
  return (0);
}
