#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "cycle_timing.h"

cycle_timing::cycle_timing(void){}

long cycle_timing::gat_clock() {

  return ((millis() / 1000) + offset) % m_cycle;
  }
  

	
void cycle_timing::setup_clock(unsigned long cycle,unsigned long nowTime){
	m_cycle = cycle;
	offset = nowTime - (millis() / 1000)% cycle;
	
}
