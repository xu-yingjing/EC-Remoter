#include "main.h"
#include <stdio.h>

int main(void)
{
  HAL_Init();
  
  return 0;
}

#if (USE_FULL_ASSERT)
void assert_failed(uint8_t* file, uint32_t line)
{
  printf("%s, %d", file, line);
}
#endif
