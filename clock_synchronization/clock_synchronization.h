#ifndef clock_synchronization_h
#define clock_synchronization_h

class clock_synchronization
{

public:
  int m_clock;
  int t_clock;
  
  int offset = 0;
  int m_cycle;
  clock_synchronization(void);
  void setup_clock(int cycle,int nowTime);
  int gat_clock(void);
  
};

#endif
