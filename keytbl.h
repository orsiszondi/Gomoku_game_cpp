typedef int (*pairptr)[2];

int keysym_tbl[][2] = {
    {SDLK_DELETE,   genv::key_delete},
    {SDLK_UP,       genv::key_up},
    {SDLK_DOWN,     genv::key_down},
    {SDLK_RIGHT,    genv::key_right},
    {SDLK_LEFT,     genv::key_left},
    {SDLK_INSERT,   genv::key_insert},
    {SDLK_HOME,     genv::key_home},
    {SDLK_END,      genv::key_end},
    {SDLK_PAGEUP,   genv::key_pgup},
    {SDLK_PAGEDOWN, genv::key_pgdn},
    {SDLK_F1,       genv::key_f1},
    {SDLK_F2,       genv::key_f2},
    {SDLK_F3,       genv::key_f3},
    {SDLK_F4,       genv::key_f4},
    {SDLK_F5,       genv::key_f5},
    {SDLK_F6,       genv::key_f6},
    {SDLK_F7,       genv::key_f7},
    {SDLK_F8,       genv::key_f8},
    {SDLK_F9,       genv::key_f9},
    {SDLK_F10,      genv::key_f10},
    {SDLK_F11,      genv::key_f11},
    {SDLK_F12,      genv::key_f12},
    {SDLK_F13,      genv::key_f13},
    {SDLK_F14,      genv::key_f14},
    {SDLK_F15,      genv::key_f15},
//    {SDLK_NUMLOCK,  genv::key_numl},
    {SDLK_CAPSLOCK, genv::key_capsl},
//    {SDLK_SCROLLOCK,genv::key_scrl},
    {SDLK_RSHIFT,   genv::key_lshift},
    {SDLK_LSHIFT,   genv::key_rshift},
    {SDLK_RCTRL,    genv::key_rctrl},
    {SDLK_LCTRL,    genv::key_lctrl},
    {SDLK_RALT,     genv::key_ralt},
    {SDLK_LALT,     genv::key_lalt},
  //  {SDLK_LSUPER,   genv::key_lwin},
  //  {SDLK_RSUPER,   genv::key_rwin},
    {SDLK_MENU,     genv::key_menu}
};
pairptr keysym_end = keysym_tbl + sizeof(keysym_tbl)/sizeof(keysym_tbl[0]);

int charcode_tbl[][2] = {
    {0x0102, 0xC3},
    {0x0103, 0xE3},
    {0x0104, 0xA5},
    {0x0105, 0xB9},
    {0x0106, 0xC6},
    {0x0107, 0xE6},
    {0x010C, 0xC8},
    {0x010D, 0xE8},
    {0x010E, 0xCF},
    {0x010F, 0xEF},
    {0x0110, 0xD0},
    {0x0111, 0xF0},
    {0x0118, 0xCA},
    {0x0119, 0xEA},
    {0x011A, 0xCC},
    {0x011B, 0xEC},
    {0x0139, 0xC5},
    {0x013A, 0xE5},
    {0x013D, 0xBC},
    {0x013E, 0xBE},
    {0x0141, 0xA3},
    {0x0142, 0xB3},
    {0x0143, 0xD1},
    {0x0144, 0xF1},
    {0x0147, 0xD2},
    {0x0148, 0xF2},
    {0x0150, 0xD5},
    {0x0151, 0xF5},
    {0x0154, 0xC0},
    {0x0155, 0xE0},
    {0x0158, 0xD8},
    {0x0159, 0xF8},
    {0x015A, 0x8C},
    {0x015B, 0x9C},
    {0x015E, 0xAA},
    {0x015F, 0xBA},
    {0x0160, 0x8A},
    {0x0161, 0x9A},
    {0x0162, 0xDE},
    {0x0163, 0xFE},
    {0x0164, 0x8D},
    {0x0165, 0x9D},
    {0x016E, 0xD9},
    {0x016F, 0xF9},
    {0x0170, 0xDB},
    {0x0171, 0xFB},
    {0x0179, 0x8F},
    {0x017A, 0x9F},
    {0x017B, 0xAF},
    {0x017C, 0xBF},
    {0x017D, 0x8E},
    {0x017E, 0x9E},
    {0x02C7, 0xA1},
    {0x02D8, 0xA2},
    {0x02D9, 0xFF},
    {0x02DB, 0xB2},
    {0x02DD, 0xBD},
    {0x2013, 0x96},
    {0x2014, 0x97},
    {0x2018, 0x91},
    {0x2019, 0x92},
    {0x201A, 0x82},
    {0x201C, 0x93},
    {0x201D, 0x94},
    {0x201E, 0x84},
    {0x2020, 0x86},
    {0x2021, 0x87},
    {0x2022, 0x95},
    {0x2026, 0x85},
    {0x2030, 0x89},
    {0x2039, 0x8B},
    {0x203A, 0x9B},
    {0x20AC, 0x80},
    {0x2122, 0x99},
};
pairptr charcode_end = charcode_tbl + sizeof(charcode_tbl)/sizeof(charcode_tbl[0]);
