#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "clock_synchronization.h"

clock_synchronization::clock_synchronization(void){}

int clock_synchronization::gat_clock() {
  //m_clock = 
  return ((millis() / 1000) + offset) % m_cycle;
  }
  

	
void clock_synchronization::setup_clock(int cycle,int nowTime){
	m_cycle = cycle;
	offset = nowTime - (millis() / 1000)% cycle;
	//m_clock = ((millis() / 1000) + offset) % cycle;
}
