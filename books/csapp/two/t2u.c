# include <stdio.h>

main(void)
{
    const int SIZE = 6;
    int nums[SIZE] = { -8, -3, -2, -1, 0, 5};

    for (int i = 0; i < SIZE; i++) {
      int v = nums[i];
      unsigned short uv = (unsigned short) v;
      printf("v = %d, uv = %u\n", v, uv);
    }

}
