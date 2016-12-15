#ifndef cycle_timing_h
#define cycle_timing_h

class cycle_timing
{

public:
  unsigned long m_clock;
  
  unsigned long offset = 0;
  unsigned long m_cycle;
  cycle_timing(void);
  void setup_clock(unsigned long cycle,unsigned long nowTime);
  long gat_clock(void);
  
};

#endif
