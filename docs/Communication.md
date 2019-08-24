# Communication Protocol  
MSP-like request-send-receive communication.  
MSP: http://www.multiwii.com/wiki/index.php?title=Multiwii_Serial_Protocol  

Message frame structure:
`preamble`, `direction`, `size`, `command` , `data`, `crc`.

| Field | Note |
|:-----:|:----:|
| Preamble | $A |
| Direction | < (From computer/another device to FC) or > (From FC to computer/another device). |
| Size | Size of the data frame |
| Command | Frame id |
| Data | Data for each command |
| CRC | Checksum byte, include size, command, and data. Use xor. |

| Command | Frame ID | Direction | Data | Type | Note |
|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|
| MSP_PROTOCOL_VERSION | 0 | | VERSION |||
|||||||
| MSP_API_VERSION | 1 |  | VERSION |||
|||||||
| MSP_BOARD_INFO | 4 | FC-> | |||
|||||||
| MSP_BUILD_INFO | 5 | FC-> | |||
|||||||
| MSP_IDENT | 100 | FC-> | VERSION |||
|||||||
| MSP_STATUS | 101 | FC-> |  |  ||
|||||||
| MSP_RAW_IMU | 102 |||||
|||||||
| MSP_MOTOR | 104 |||||
|||||||
| MSP_RC | 105 |||||
|||||||
| MSP_RAW_GPS | 106 |||||
|||||||
| MSP_COMP_GPS | 107 |||||
|||||||
| MSP_ATTITUDE | 108 |||||
|||||||
| MSP_ALTITUDE | 109 |||||
|||||||
| MSP_ANALOG | 110 |||||
|||||||
| MSP_RC_TUNING | 111 |||||
|||||||
| MSP_PID | 112 |||||
|||||||
| MSP_BOX | 113 |||||
|||||||
| MSP_MISC | 114 |||||
|||||||
| MSP_BOX_NAMES | 116 || String of BOX items |||
|||||||
| MSP_PID_NAMES | 117 || String of PID items |||
|||||||
| MSP_WP | 118 |||||
|||||||
| MSP_BOXIDS | 119 |||||
|||||||
| MSP_NAV_STATUS | 121 |||||
|||||||
| MSP_NAV_CONFIG | 122 |||||
|||||||
| MSP_RC_DEADBAND | 125 |||||
|||||||
| MSP_SENSOR_ALIGNMENT | 126 |||||
|||||||
| MSP_REF_ALTITUDE | 130 |||||
|||||||
| MSP_REF_DISTANCE | 131 |||||
|||||||
| MSP_TOPOLOGY | 132 |||||
|||||||
| MSP_SRC_ADDR | 133 |||||
|||||||
| MSP_DEST_ADDR | 134 |||||
|||||||
| MSP_STATUS_EX | 150 |||| |
|||||||
| MSP_SENSOR_STATUS | 151 |||| * |
|||||||
| MSP_GPSSVINFO | 164 |||| * |
|||||||
| MSP_GPSSTATISTICS | 166 |||| * |
|||||||
| MSP_SET_MOTOR | 204 |||| * |
|||||||
| MSP_SET_RAW_RC | 205 |||| * |
|||||||
| MSP_SET_RAW_GPS | 206 |||| * |
|||||||
| MSP_SET_RC_TUNING | 211 |||| * |
|||||||
| MSP_SET_PID | 212|||| * |
|||||||
| MSP_SET_BOX | 213 |||| * |
|||||||
| MSP_ACC_CALIBRATION | 214 |||| * |
|||||||
| MSP_MAG_CALIBRATION | 215 |||| * |
|||||||
| MSP_SET_HEAD | 217 |||| * |
|||||||
| MSP_SET_WP | 218 |||| * |
|||||||
| MSP_SET_REF_ALTITUDE | 230 |||||
|||||||
| MSP_SET_REF_DISTANCE | 231 |||||
|||||||
| MSP_SET_TOPOLOGY | 232 |||||
|||||||
| MSP_SET_SRC_ADDR | 233 |||||
|||||||
| MSP_SET_DEST_ADDR | 234 |||||
|||||||
|||||| END OF TABLE |
