# Multiples Sum Function

## Introduction
Hello friends! This is a coding challenge adapted from 'The Coding Room of Spirit and Time' crafted by [Jalal AKA 0ceano](https://github.com/suspectedoceano) on [YouTube](https://www.youtube.com/@onaecO). Do make sure to give him a follow; he has some brilliant C programming content for anyone embarking on a coding journey. Dive right into the specific video on [YouTube](https://www.youtube.com/watch?v=ysAOy00IDIA&t=547s). Originally inspired by a problem from Project Euler, the task was to find the sum of all multiples of 3 or 5 below 1000.

In my version of the challenge, the function takes a dynamic turn. Instead of being confined to 3 and 5, you can provide two integer inputs. The first will be your chosen multiple, and the second denotes the upper limit for the sum. If the limit itself is a multiple, it gets included in the total. This means you can easily determine the sum of all multiples of, say, 15 below 1000 or any other combination you fancy!

**PS:** Feedback and improvements for the code are always welcome. Jump right in!

## Inspiration
When considering the sums of multiples for a specific number, I had a lightbulb moment. Let's take 9 as an example. Divided by 3, it's 3. By sequentially adding the numbers leading to it, i.e., \(3 + 2 + 1\), we get 6. Multiplying this sum by 3 yields 18. This is the sum of all multiples of 3 up to 9: \(9 + 6 + 3 = 18\).

For another illustration, let's think of the multiples of 2 with 9 as the maximum limit. Here, 8 is the largest multiple of 2 below 9. The summation of all multiples of 2 up to 8 is \(2 + 4 + 6 + 8 = 20\).

## Under the Hood
Time to delve into the inner workings of the code:

Firstly, the essential header file is right here in this repository.

**File: psm_div.c** (Swift and efficient with a mathematical formula)

```c
#include "sm_div.h"
```

```c
int sm_div(int d, int n) {
  int c = (n - (n % d)) / d;
  int ph = c + (((c - 1) * (c)) / 2);
  return (ph * d);
}
```

**File: sm_div.c** (Intuitive approach using a loop, though slightly less efficient)

```c
#include "sm_div.h"
```

```c
int sm_div(int d, int n) {
  int c = (n - (n % d)) / d;
  int ph = c;
  for (int i = 1; i < c; i++)
      ph += i;
  return (ph * d);
}
```

In essence, both files aim to calculate the sum of all multiples of a particular number (`d`) up to a specified threshold (`n`). The psm_div.c file uses a straight-to-the-point mathematical formula, making it zippy. On the other hand, sm_div.c opts for a loop which, though slightly slower, is easier on the eyes and brain!

## Acknowledgements
A massive shout-out to Jalal, AKA 0ceano:
- [Follow him on YouTube](https://www.youtube.com/@onaecO)
- [Check out his GitHub repository](https://github.com/suspectedoceano)

Lastly, hats off to ChatGPT! Assisting in crafting this README was an insightful journey, proving sometimes that writing about the code can be as challenging, if not more so, than writing the code itself. Cheers for the unwavering help!

---

Crafted with ❤️ by **Peter pierre Nzioki** (aka Exoespada)
