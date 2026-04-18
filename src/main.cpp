#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <uprint.hpp>
#include <uinput.hpp>

int main(void) {
    ubegin(9600);

    uprint("Hello ");
    uprintln("world");

    sys_buffer *buf = buffer_init();
    input_timer_init();

    uset_line(buf);

    char word[8] = {0};
    uread_word(buf, word, sizeof(word));

    uset_line(buf);

    uint16_t num = 0;
    uread_num(buf, &num);

    uprintln(word);
    uprintln(num);

    return 0;
}