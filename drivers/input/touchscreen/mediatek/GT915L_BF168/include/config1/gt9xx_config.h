#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

/*STEP_1(REQUIRED):Change config table.*/
/*TODO: puts the config info corresponded to your TP here, the following is just
a sample config, send this config should cause the chip cannot work normally*/
#define CTP_CFG_GROUP1 {\
0x43,0x38,0x04,0x80,0x07,0x05,0x34,0xD1,\
0x01,0x08,0x1E,0x0F,0x5A,0x46,0x03,0x05,\
0x00,0x00,0xFF,0x7F,0x00,0x00,0x00,0x15,\
0x17,0x21,0x14,0x8A,0x2A,0x0B,0x2C,0x2E,\
0xB5,0x06,0x00,0x00,0x00,0x43,0x33,0x11,\
0x3C,0x11,0x00,0x00,0x00,0x00,0x00,0x05,\
0x15,0x00,0x2A,0x1E,0x50,0x94,0xC5,0x02,\
0x00,0x00,0x00,0x04,0xA3,0x21,0x00,0x8A,\
0x28,0x00,0x75,0x31,0x00,0x65,0x3B,0x00,\
0x57,0x48,0x00,0x57,0x10,0x30,0x50,0x00,\
0xF0,0x4A,0x3A,0xFF,0xFF,0x27,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
0x00,0x00,0x00,0x19,0x00,0x00,0x46,0x32,\
0x02,0x04,0x06,0x08,0x0A,0x0C,0x0E,0x10,\
0x12,0x14,0x16,0xFF,0xFF,0xFF,0x1F,0xFF,\
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,\
0x00,0x00,0x00,0x00,0xFF,0x00,0x24,0x22,\
0x21,0x20,0x1F,0x1E,0x1D,0x1C,0x18,0x16,\
0x02,0x12,0x04,0x10,0x06,0x0F,0x08,0x0C,\
0x0A,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,\
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,\
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,\
0x04,0x01\
}

#define CTP_CFG_GROUP1_CHARGER {\
}

/*TODO puts your group2 config info here,if need.*/
// add by darren for byd
#define CTP_CFG_GROUP2 {\
}

/*TODO puts your group2 config info here,if need.*/
#define CTP_CFG_GROUP2_CHARGER {\
}

/*TODO puts your group3 config info here,if need.*/
// for TCL
#define CTP_CFG_GROUP3 {\
		0x41,0xD0,0x02,0x00,0x05,0x05,0x05,0x41, \
		0x01,0x0F,0x1E,0x0F,0x55,0x3C,0x03,0x05, \
		0x00,0x00,0xFF,0x7F,0x00,0x00,0x00,0x00, \
		0x00,0x00,0x00,0x8B,0x2A,0x0B,0x32,0x34, \
		0xD3,0x07,0x00,0x05,0x00,0x22,0x33,0x11, \
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x32, \
		0x00,0x00,0x2A,0x1E,0x50,0x94,0xC0,0x02, \
		0x07,0x00,0x00,0x04,0xB4,0x21,0x00,0x99, \
		0x28,0x00,0x82,0x31,0x00,0x70,0x3B,0x00, \
		0x61,0x48,0x00,0x61,0x10,0x30,0x50,0x00, \
		0xF7,0x4A,0x3A,0xFF,0xFF,0x27,0x00,0x00, \
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
		0x00,0x00,0x00,0x19,0x00,0x00,0x46,0x32, \
		0x02,0x04,0x0C,0x06,0x08,0x0A,0x0E,0x10, \
		0x12,0x14,0x16,0xFF,0xFF,0xFF,0x00,0x00, \
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
		0x43,0x1E,0x00,0x04,0x00,0x00,0x22,0x16, \
		0x21,0x18,0x20,0x1C,0x1F,0x1D,0x24,0x1E, \
		0x0A,0x08,0x06,0x10,0x04,0x0F,0x02,0x12, \
		0x00,0x13,0x0C,0xFF,0xFF,0xFF,0xFF,0xFF, \
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
		0x7A,0x01\
    }

/*TODO puts your group3 config info here,if need.*/
#define CTP_CFG_GROUP3_CHARGER {\
}
/* TODO: define your config for Sensor_ID == 3 here, if needed*/
// for longfei
#define CTP_CFG_GROUP4 {\
		0x00,0xD0,0x02,0x00,0x05,0x0A,0x05,0xC1,\
		0x01,0x08,0x23,0x08,0x50,0x3C,0x03,0x05,\
		0x00,0x00,0xFF,0x7F,0x00,0x00,0x00,0x00,\
		0x00,0x00,0x00,0x8A,0x2A,0x0B,0x2C,0x2E,\
		0xB5,0x06,0x00,0x08,0x00,0x02,0x33,0x11,\
		0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x32,\
		0x00,0x00,0x2A,0x1E,0x50,0x94,0xC5,0x02,\
		0x07,0x00,0x00,0x04,0x93,0x21,0x00,0x68,\
		0x28,0x00,0x4B,0x31,0x00,0x38,0x3B,0x00,\
		0x2E,0x48,0x00,0x2E,0x10,0x30,0x50,0x00,\
		0xF0,0x4A,0x3A,0xFF,0xFF,0x27,0x00,0x00,\
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,\
		0x00,0x00,0x00,0x14,0x00,0x00,0x46,0x32,\
		0x04,0x08,0x0C,0x10,0x14,0x02,0x06,0x0A,\
		0x0E,0x12,0x16,0xFF,0xFF,0xFF,0x1F,0xFF,\
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,\
		0x00,0x00,0x00,0x00,0xFF,0x00,0x22,0x16,\
		0x21,0x18,0x20,0x1C,0x1F,0x1D,0x1E,0x24,\
		0x00,0x0F,0x04,0x0A,0x08,0x06,0x0C,0x02,\
		0x10,0x12,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,\
		0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,\
		0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,\
		0x2A,0x01                              \
    }

/* TODO: define your config for Sensor_ID == 4 here, if needed*/
#define CTP_CFG_GROUP5 {\
}

// TODO: define your config for Sensor_ID == 5 here, if needed
#define CTP_CFG_GROUP6 {\
}

#endif				/* _GT9XX_CONFIG_H_ */