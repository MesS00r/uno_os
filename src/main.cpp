#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <uprint.hpp>
#include <uinput.hpp>

int main(void) {
    ubegin(9600);

    uprint("Hello ");
    uprintln("world");

    return 0;
}