#include "gps.hpp"
#include "../../Boards.h"

unsigned long last_gps = 0;
TinyGPSPlus gps;
SoftwareSerial gps_s(PIN_GPS_RX, PIN_GPS_TX);
