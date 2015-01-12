
#include <ioavr.h>
#include <intrinsics.h>

int main( void )
{
  DDRB = 0x03;
  PORTB = 2;
  MCUCR = 0x18;
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __no_operation();
  __sleep();
  while(1)
  {
  __delay_cycles(8000);
  PORTB = 0;
  }
  return 0;
}
