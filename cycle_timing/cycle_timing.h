#ifndef clock_synchronization_h
#define clock_synchronization_h

class cycle_timing
{

public:
  int m_clock;
  int m_cycle;
  int offset = 0;
  cycle_timing(void);
  void setup_clock(int cycle,int nowTime);
  int gat_clock(void);
  
};

#endif
