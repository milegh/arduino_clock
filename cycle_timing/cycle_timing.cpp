#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "cycle_timing.h"

cycle_timing::cycle_timing(void){}

int cycle_timing::gat_clock() {
  return ((millis() / 1000) + offset) % m_cycle;
  }
  

	
void cycle_timing::setup_clock(int cycle,int nowTime){
	m_cycle = cycle;
	offset = nowTime - (millis() / 1000)% cycle;
}
