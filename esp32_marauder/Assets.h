#ifndef Assets_h
#define Assets_h

PROGMEM const unsigned char menu_icons[][66] = {
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x37, 0xFF, 0xFF, 0x3A, // Attack: 0
    0xFF, 0xFF, 0x39, 0xFF, 0xBF, 0x3C, 0xFF, 0x7F, 0x3E, 0xFF, 0x2F, 0x3F, 
    0xFF, 0x9F, 0x3F, 0xFF, 0xCB, 0x3F, 0xFF, 0xE7, 0x3F, 0xCF, 0xF2, 0x3F, 
    0xDF, 0xF9, 0x3F, 0xBF, 0xFC, 0x3F, 0x3F, 0xFF, 0x3F, 0x7F, 0xFE, 0x3F, 
    0xDF, 0xF9, 0x3F, 0xCF, 0xFB, 0x3F, 0xE7, 0xFF, 0x3F, 0xF3, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xBF, 0xDD, 0x3E, 0xDF, 0xBE, 0x3D, 0x5F, 0x6B, 0x3D, 0x5F, 0x5D, 0x3D, // Beacon sniff: 1
    0x5F, 0x55, 0x3D, 0xFF, 0xF7, 0x3F, 0xFF, 0xF7, 0x3F, 0xFF, 0xEB, 0x3F, 
    0xFF, 0xEB, 0x3F, 0xFF, 0xEB, 0x3F, 0xFF, 0xDD, 0x3F, 0xFF, 0xD5, 0x3F, 
    0xFF, 0xC9, 0x3F, 0xFF, 0xDD, 0x3F, 0xFF, 0xC9, 0x3F, 0xFF, 0xB6, 0x3F, 
    0xFF, 0xAA, 0x3F, 0xFF, 0x9C, 0x3F, 0xFF, 0xAA, 0x3F, 0x7F, 0x77, 0x3F, 
    0x7F, 0x49, 0x3F, 0x7F, 0x3E, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFB, 0x3F, // Bluetooth: 2
    0xFF, 0xF3, 0x3F, 0xFF, 0xEB, 0x3F, 0xFF, 0xDB, 0x3F, 0x7F, 0xBB, 0x3F, 
    0xFF, 0xDA, 0x3F, 0xFF, 0xE9, 0x3F, 0xFF, 0xF3, 0x3F, 0xFF, 0xF3, 0x3F, 
    0xFF, 0xE9, 0x3F, 0xFF, 0xDA, 0x3F, 0x7F, 0xBB, 0x3F, 0xFF, 0xDB, 0x3F, 
    0xFF, 0xEB, 0x3F, 0xFF, 0xF3, 0x3F, 0xFF, 0xFB, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xCF, 0xFB, 0x3F, // Bluetooth Sniff: 3
    0xF7, 0xF9, 0x3F, 0xDB, 0xFA, 0x3F, 0x6B, 0xFB, 0x3F, 0xAB, 0xDB, 0x3F, 
    0x6B, 0xEB, 0x3F, 0xDB, 0xF2, 0x3F, 0xF7, 0x79, 0x3E, 0xCF, 0xF3, 0x3D, 
    0xFF, 0x69, 0x3B, 0xFF, 0xDA, 0x3A, 0x7F, 0xBB, 0x3A, 0xFF, 0xDB, 0x3A, 
    0xFF, 0x6B, 0x3B, 0xFF, 0xF3, 0x3D, 0xFF, 0x7B, 0x3E, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xE1, 0x3F, 0x7F, 0x80, 0x3F, // Deauth sniff: 4
    0x3F, 0x00, 0x3F, 0x1F, 0x00, 0x3E, 0x1F, 0x00, 0x3E, 0x1F, 0x00, 0x3E, 
    0x1F, 0x00, 0x3E, 0x9F, 0x73, 0x3E, 0xDF, 0xF3, 0x3E, 0x9F, 0x65, 0x3E, 
    0x1F, 0x0C, 0x3E, 0x3F, 0x0C, 0x3F, 0x3F, 0x00, 0x3F, 0x3F, 0x25, 0x3F, 
    0x7F, 0x8C, 0x3F, 0x7F, 0x80, 0x3F, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3D, 0xFF, 0xFF, 0x38, // Draw: 5
    0xFF, 0x7F, 0x3D, 0xFF, 0xBF, 0x3E, 0xFF, 0x5F, 0x3F, 0xFF, 0xAF, 0x3F, 
    0xFF, 0xD7, 0x3F, 0xFF, 0xEB, 0x3F, 0xFF, 0xF5, 0x3F, 0xFF, 0xFA, 0x3F, 
    0x7F, 0xFD, 0x3F, 0xBF, 0xFE, 0x3F, 0x3F, 0xFF, 0x3F, 0xDF, 0xFF, 0x3F, 
    0x1F, 0x00, 0x00, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xBF, 0x3F, // Packet monitor: 6
    0xFF, 0xBF, 0x3F, 0xFF, 0xBF, 0x3F, 0xFF, 0xBF, 0x3F, 0xFF, 0x5E, 0x3F, 
    0xFF, 0x5E, 0x3F, 0x7F, 0x5D, 0x3F, 0x20, 0xED, 0x00, 0xAF, 0xEB, 0x3F, 
    0xDF, 0xEB, 0x3F, 0xDF, 0xEB, 0x3F, 0xFF, 0xF7, 0x3F, 0xFF, 0xF7, 0x3F, 
    0xFF, 0xF7, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xDB, 0x3F, 0xFF, 0xED, 0x3F, 0xFF, 0xB5, 0x3F, 0xFF, 0xD5, 0x3F, // Probe sniff: 7
    0xFF, 0x55, 0x3E, 0xFF, 0xF5, 0x3D, 0xFF, 0xED, 0x3D, 0xFF, 0x7B, 0x3E, 
    0xFF, 0xBF, 0x3F, 0xFF, 0xCF, 0x3F, 0xFF, 0xD7, 0x3F, 0xFF, 0xEB, 0x3F, 
    0xFF, 0xF5, 0x3F, 0xFF, 0xF8, 0x3F, 0x7F, 0xFC, 0x3F, 0x3F, 0xFE, 0x3F, 
    0x1F, 0xFF, 0x3F, 0x8F, 0xFF, 0x3F, 0xCF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xC0, 0x3F, 0x3F, 0x3F, 0x3F, 0xDF, 0xFF, 0x3E, // Scanners: 8
    0xEF, 0xEF, 0x3D, 0xF7, 0xFF, 0x39, 0xFB, 0xE1, 0x36, 0xDB, 0x5E, 0x37, 
    0x7D, 0xBF, 0x2F, 0xBD, 0x5E, 0x2F, 0xBD, 0x63, 0x2F, 0xBD, 0x73, 0x2F, 
    0xBD, 0x7F, 0x2F, 0x7D, 0xBF, 0x2F, 0xFB, 0xDE, 0x37, 0xFB, 0xE1, 0x37, 
    0xF7, 0xFF, 0x3B, 0xEF, 0xFF, 0x3D, 0xDF, 0xFF, 0x3E, 0x3F, 0x3F, 0x3F, 
    0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0x1F, 0x60, 0x3F, 0x0F, 0xC0, 0x3E, // CC Skimmers: 9
    0xEF, 0xDF, 0x3C, 0xEF, 0xDF, 0x38, 0xEF, 0xDF, 0x3A, 0xEF, 0xDF, 0x39, 
    0xEF, 0xDF, 0x3B, 0xEF, 0xDF, 0x3B, 0x0F, 0xC0, 0x3B, 0x0F, 0x80, 0x3B, 
    0x0F, 0x40, 0x3B, 0x0F, 0x40, 0x3B, 0x0F, 0x40, 0x3B, 0x0F, 0x40, 0x3B, 
    0x0F, 0xC0, 0x3C, 0x0F, 0xC0, 0x3F, 0x07, 0x80, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFB, 0x3F, 0xFF, 0xFB, 0x3F, // Sniffers: 10
    0xFF, 0xF3, 0x3F, 0xFF, 0xE7, 0x3F, 0xFF, 0xCF, 0x3F, 0xFF, 0x3F, 0x3F, 
    0xFF, 0x7F, 0x3E, 0xFF, 0xFF, 0x3C, 0xFF, 0xFF, 0x3D, 0xFF, 0xFF, 0x39, 
    0xFF, 0xFF, 0x3B, 0x3F, 0xF8, 0x3B, 0x9F, 0xFB, 0x3B, 0xDF, 0xFF, 0x39, 
    0x5F, 0xFC, 0x3C, 0x3F, 0x03, 0x3E, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, // WiFi: 11
    0x7F, 0x80, 0x3F, 0x9F, 0x7F, 0x3E, 0xE7, 0xFF, 0x39, 0xFB, 0xFF, 0x37, 
    0xFF, 0xC0, 0x3F, 0x1F, 0x3F, 0x3E, 0xEF, 0xFF, 0x3D, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xE1, 0x3F, 0x7F, 0x9E, 0x3F, 0xBF, 0x7F, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xF3, 0x3F, 0xFF, 0xF3, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0x2F, 0xE2, 0x25, 0x92, 0x3F, 0x37, 0xFD, 0x7E, 0x3B, 0x97, 0xE6, 0x04, // Beacon spam: 12
    0x7B, 0xFF, 0x3D, 0xCB, 0x55, 0x23, 0x3C, 0xFF, 0x3F, 0xF1, 0xBF, 0x29, 
    0xDF, 0xFF, 0x13, 0xF4, 0xF3, 0x0E, 0xD9, 0xED, 0x1B, 0xF4, 0xED, 0x3F, 
    0xF5, 0xF3, 0x12, 0xDB, 0xFF, 0x2A, 0x66, 0xBF, 0x39, 0x99, 0xFF, 0x13, 
    0x61, 0x5A, 0x1D, 0x0D, 0x77, 0x19, 0xD2, 0xBA, 0x23, 0xAF, 0x45, 0x35, 
    0x6F, 0x99, 0x36, 0x2C, 0xD6, 0x2A},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0x87, 0x3F, 0xFF, 0x03, 0x3F, // Rick roll: 13
    0xFF, 0x13, 0x3F, 0xFF, 0x7B, 0x3F, 0xFF, 0x7B, 0x3E, 0xFF, 0x79, 0x3E, 
    0xFF, 0x7D, 0x3E, 0xFF, 0x3C, 0x3F, 0xFF, 0x8E, 0x3F, 0x7F, 0xE0, 0x3F, 
    0x3F, 0xF3, 0x3F, 0xBF, 0xE7, 0x3F, 0x9F, 0xCF, 0x3F, 0xCF, 0x9F, 0x3B, 
    0xE7, 0x3F, 0x38, 0xC7, 0xFF, 0x3E, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xEF, 0x3F, 0xFF, 0xDF, 0x3F, 0xFF, 0xA0, 0x3F, // reboot: 14
    0x3F, 0x9F, 0x3F, 0xDF, 0xE7, 0x3F, 0xEF, 0xFB, 0x3E, 0xEF, 0xFF, 0x3E, 
    0xF7, 0xFF, 0x3D, 0xF7, 0xFF, 0x3D, 0xF7, 0xFF, 0x3D, 0xF7, 0xFF, 0x3D, 
    0xF7, 0xFF, 0x3D, 0xEF, 0xFF, 0x3E, 0xEF, 0xFB, 0x3E, 0xFF, 0x7C, 0x3F, 
    0x3F, 0x9F, 0x3F, 0xBF, 0xE0, 0x3F, 0x7F, 0xFF, 0x3F, 0xFF, 0xFE, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xFB, 0x3F, 0xFF, 0xF5, 0x3F, // General apps: 15
    0xFF, 0xEA, 0x3F, 0x7F, 0xDB, 0x3F, 0xBF, 0xBB, 0x3F, 0xDF, 0x7B, 0x3F, 
    0xEF, 0xFB, 0x3E, 0xCF, 0x7B, 0x3E, 0xAF, 0xB5, 0x3E, 0x6F, 0xEF, 0x3E, 
    0xEF, 0xDE, 0x3E, 0xAF, 0xB5, 0x3E, 0xCF, 0x7B, 0x3E, 0xDF, 0x7B, 0x3F, 
    0xBF, 0xBB, 0x3F, 0x7F, 0xDB, 0x3F, 0xFF, 0xEA, 0x3F, 0xFF, 0xF1, 0x3F, 
    0xFF, 0xFB, 0x3F, 0xFF, 0xFF, 0x3F},
    {0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F, 0xFF, 0xE0, 0x3F, 0x3F, 0x80, 0x3F, // Update: 16
    0x1F, 0x00, 0x3F, 0x0F, 0x00, 0x3E, 0x07, 0x00, 0x3C, 0x07, 0x08, 0x3C, 
    0x03, 0x18, 0x38, 0x03, 0x38, 0x38, 0xC3, 0x7F, 0x38, 0xC3, 0x7F, 0x38, 
    0x03, 0x38, 0x38, 0x03, 0x18, 0x38, 0x07, 0x08, 0x3C, 0x07, 0x00, 0x3C, 
    0x0F, 0x00, 0x3E, 0x1F, 0x00, 0x3F, 0x3F, 0x80, 0x3F, 0xFF, 0xE0, 0x3F, 
    0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0x3F}};

#endif
