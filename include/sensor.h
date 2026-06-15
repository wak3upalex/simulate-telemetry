#ifndef SIMULATE_TELEMETRY_SENSOR_H
#define SIMULATE_TELEMETRY_SENSOR_H

typedef struct{
    unsigned long timestamp_ms;
    float temperature_c;
    float pressure_hpa;
    float altitude_m;
    float battery_voltage_v;
} SensorReading;

SensorReading generate_sensor_reading(unsigned long timestamp_ms);
void print_sensor_reading(SensorReading sensor_reading);
#endif //SIMULATE_TELEMETRY_SENSOR_H
