#include <iostream>
#include <stdint.h>
using namespace std;

 char nibble_to_hex (uint8_t i) {
     switch (i) {
     case 0:
         return '0';
         break;

     case 1:
         return '1';
         break;

     case 2:
         return '2';
         break;

     case 3:
         return '3';
         break;

     case 4:
         return '4';
         break;

     case 5:
         return '5';
         break;

     case 6:
         return '6';
         break;

     case 7:
         return '7';
         break;

     case 8:
         return '8';
         break;

     case 9:
         return '9';
         break;

     case 10:
         return 'a';
         break;

     case 11:
         return 'b';
         break;

     case 12:
         return 'c';
         break;

     case 13:
         return 'd';
         break;

     case 14:
         return 'e';
         break;

     case 15:
         return 'f';
         break;
     }
 }
    void print_in_hex(uint8_t byte)
        {
         cout<<nibble_to_hex(byte >> 4);
         cout<<nibble_to_hex(byte & 0xf);
        }
const uint8_t*as_bytes(const void* data) {
    return reinterpret_cast<const uint8_t*>(data);
}
    void print_in_hex(const void* data, size_t size) {

        const uint8_t* bytes = as_bytes(data);
        for (size_t i = 0; i < size; i++)
        {
            print_in_hex(bytes[i]);
            if ((i + 1) % 16 == 0) { cout << '\n'; }
            else { cout << ' '; }
        }
    }
char bit_digit(uint8_t byte, uint8_t bit) {
    if (byte && (0x1 << bit)) {
        return 1;
    }
    return 0;
}
void print_in_binary(uint8_t byte)
{
for (int i=8;i<0;i--)
cout<<bit_digit(byte,i);
}


    int main(){
        uint8_t u8=42;
        uint16_t u16=42;
        uint32_t u32=42;

        print_in_hex(&u8, sizeof(u8));
        print_in_hex(&u16, sizeof(u16));
        print_in_hex(&u32, sizeof(u32));
        return 0;
    }

