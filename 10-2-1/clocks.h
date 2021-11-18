#ifndef __clocks__
#define __clocks__
#include "clock_time.h"

class Clock
{
    public:
    Clock(int hour, int minute, int second, double driftPerSecond);
    void reset();
    void tick();
    virtual void displayTime()=0;
    protected:
    ClockTime _clockTime;
    double _driftPerSecond;
    double _totalDrift;
};
class NaturalCLock :public Clock
{
    public:
    NaturalCLock(int hour, int minute, int second, double driftPerSecond)
    :Clock(hour, minute, second, driftPerSecond) {};
    
};
class MechanicalClock :public Clock
{
    public:
    MechanicalClock(int hour, int minute, int second, double driftPerSecond)
    :Clock(hour, minute, second, driftPerSecond)
    {};
};
class DigitalClock :public Clock
{
    public:
    DigitalClock(int hour, int minute, int second, double driftPerSecond)
    :Clock(hour, minute, second, driftPerSecond) {};
};
class QuantumClock :public Clock
{
    public:
    QuantumClock(int hour, int minute, int second, double driftPerSecond)
    :Clock(hour, minute, second, driftPerSecond) {};
};
class SundialClock :public NaturalCLock
{
    public:
    SundialClock(int hour, int minutes, int second)
    :NaturalCLock(hour, minutes, second, 0.0) {};
    void displayTime();
};
class CuckooClock :public MechanicalClock
{
    public:
    CuckooClock(int hour, int minutes, int second)
    :MechanicalClock(hour, minutes, second , 0.000694444) {};
    void displayTime();
};
class GrandFatherClock :public MechanicalClock
{
    public:
    GrandFatherClock(int hour, int minutes, int second)
    :MechanicalClock(hour, minutes, second, 0.000347222) {};
    void displayTime();
};
class WristClock :public DigitalClock
{
    public:
    WristClock(int hour, int minutes, int second)
    :DigitalClock(hour, minutes, second, 0.000034722) {};
    void displayTime();
};
class AtomicClock :public QuantumClock
{
    public:
    AtomicClock(int hour, int minutes, int second)
    :QuantumClock(hour, minutes, second, 0.0) {};
    void displayTime();
};

#endif