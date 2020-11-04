#include <Arduino.h>
#include <stdarg.h>

#ifndef PLODUINO_H
#define PLODUINO_H

template<typename T1, typename T2>
void ploduino_plot(T1 label, T2 val) {
    Serial.print(label); Serial.print(":"); Serial.print(val); Serial.print("\t");
}

template<typename T1, typename T2, typename... Args>
void ploduino_plot(T1 label, T2 val, Args... args) {
    Serial.print(label); Serial.print(":"); Serial.print(val); Serial.print("\t"); ploduino_plot(args...);
    Serial.println("");
}

#endif