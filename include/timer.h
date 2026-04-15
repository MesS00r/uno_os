#ifndef TIMER_H_INCLUDED
#define TIMER_H_INCLUDED

#include <avr/io.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif



static inline void timeout_ms(uint16_t time_ms) {
    uint16_t time_tick = time_ms * 250;
    uint16_t start = TCNT1;
    uint16_t now = 0, elapsed = 0;

    while (true) {
        now = TCNT1;

        if (now >= start) elapsed = now - start;
        else elapsed = (65536 - start) + now;

        if (elapsed >= time_tick) return;
    }
}

static inline void timeout_tick(uint16_t time_tick) {
    uint16_t start = TCNT1;
    uint16_t now = 0, elapsed = 0;

    while (true) {
        now = TCNT1;

        if (now >= start) elapsed = now - start;
        else elapsed = (65536 - start) + now;

        if (elapsed >= time_tick) return;
    }
}

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // TIMER_H_INCLUDED