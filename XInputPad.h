#ifndef _XINPUTPAD_H_
#define _XINPUTPAD_H_

typedef struct {
	uint8_t rid;
	uint8_t rsize;
	uint8_t digital_buttons_1;
	uint8_t digital_buttons_2;
	uint8_t lt;
	uint8_t rt;
	int l_x;
	int l_y;
	int r_x;
	int r_y;
	uint8_t reserved_1[6];
} ReportDataXinput;
extern ReportDataXinput XboxButtonData;

#endif
