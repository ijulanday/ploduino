# ploduino.h

An easy way of using the ArudinoIDE Serial Plotter

## usage

**ploduino_plot** takes in a variable amount of arguments and formats them to be print via Arduino Serial. You can use the ArduinoIDE serial plotter or just look at the raw output on the monitor.

```c
// format: ploduino_plot(LABEL, DATA, LABEL, DATA, ...);
ploduino_plot("Voltage", escData.voltage * .1
      , "Current", escData.current * .1
      , "Throttle", pwmData.throttlePercent * 100
      );
```