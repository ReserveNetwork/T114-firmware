#include <TinyGPSPlus.h>
#include <SoftwareSerial.h>

#define GPS_INTERVAL 5000 // ms

#define GPS_OFFLINE 1
#define GPS_INDETERMINATE 0
#define GPS_ONLINE 2
#define GPS_LOCKED 3

extern unsigned long last_gps;
extern TinyGPSPlus gps;
extern SoftwareSerial gps_s;
