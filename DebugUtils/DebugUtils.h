// Debug utilities

#if DEBUGLEVEL >= 0
#define DEBUGPRINT0(x) Serial.print(x)
#define DEBUGPRINTLN0(x) Serial.println(x)
#else
#define DEBUGPRINT0(x)
#define DEBUGPRINTLN0(x)
#endif

#if DEBUGLEVEL >= 1
#define DEBUGPRINT1(x) Serial.print(x)
#define DEBUGPRINTLN1(x) Serial.println(x)
#else
#define DEBUGPRINT1(x)
#define DEBUGPRINTLN1(x)
#endif

#if DEBUGLEVEL >= 2
#define DEBUGPRINT2(x) Serial.print(x)
#define DEBUGPRINTLN2(x) Serial.println(x)
#else
#define DEBUGPRINT2(x)
#define DEBUGPRINTLN2(x)
#endif

#if DEBUGLEVEL >= 3
#define DEBUGPRINT3(x) Serial.print(x)
#define DEBUGPRINTLN3(x) Serial.println(x)
#else
#define DEBUGPRINT3(x)
#define DEBUGPRINTLN3(x)
#endif