
/*====================================================================================
 * 								INCLUDE FILES
=================================================================================== */
#include "at32f403a_407_board.h"
#include "at32f403a_407_clock.h"


/*====================================================================================
 * 								DEFINITIONS
=================================================================================== */
__IO uint32_t time_cnt = 0;

/*====================================================================================
 * 								GLOBAL FUNTIONS
====================================================================================*/
int main(void)
{
/*The system clock is configured as follow:
	  *         system clock (sclk)   = hext / 2 * pll_mult
	  *         system clock source   = pll (hext)
	  *         - hext                = HEXT_VALUE
	  *         - sclk                = 240000000
	  *         - ahbdiv              = 1
	  *         - ahbclk              = 240000000
	  *         - apb2div             = 2
	  *         - apb2clk             = 120000000
	  *         - apb1div             = 2
	  *         - apb1clk             = 120000000
	  *         - pll_mult            = 60
	  *         - pll_range           = GT72MHZ (greater than 72 mhz)*/
  system_clock_config();
  at32_board_init();
  uart_print_init(115200);

  /* output a message on hyperterminal using printf function */
  printf("USART PRINT START\r\n");
  printf("MINH MAN\r\n");
  printf("TAN PHAT\r\n");

  while(1)
  {
    printf("Counter: %u\r\n",time_cnt++);
    delay_sec(1);
  }
}
