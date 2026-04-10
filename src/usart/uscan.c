#include "uscan.hpp"

// ****** USART SCAN STR ******

const char uget_ch(void) {
    while (!(UCSR0A & (1 << RXC0)));
    return UDR0;
}

const char* uget_line(void) {

}