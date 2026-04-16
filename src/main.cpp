#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <uprint.hpp>
#include <uinput.hpp>

int main(void) {
    ubegin(9600);

    // uprint("Hello ");
    // uprintln("world");

    sys_buffer *buf = buffer_init();
    uset_line(buf, 4, NULL);

    char word[10] = {0};
    uread_word(buf, word, sizeof(word));

    uprintln(word);

    return 0;
}