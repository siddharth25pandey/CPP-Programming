#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t crc8(uint8_t const *data, size_t length)

{
    uint8_t crc = 0;

    while (length--)
    {
        crc ^= *data++;

        for (unsigned int i = 0; i < 8; i++)
        {
            if((crc & 0x80) !=0)
            {
                crc = (crc << 1) ^ 0x07;
            }
            else
            {
                crc <<= 1;

            }
        }
    }

    return crc;
}

int main()
{
    unsigned char data[8];
    printf("data (in ASCII) = ");
    scanf("%s", &data);

    uint8_t crc_result;
    crc_result = crc8(data, 9);
    printf("crc result = %02x\n", crc_result);

    return 0;
}
