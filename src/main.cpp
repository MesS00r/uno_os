#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <usart.hpp>

int main(void) {
    ubegin(9600);

    uprint(123, "sss", 's', 233, "sss", 123, "sss", 's', 233, "sss", 123, "sss", 's', 233, "sss", 123, "sss", 's', 233, "sss");

    return 0;
}