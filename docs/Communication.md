# Communication Protocol  
MSP-like request-send-receive communication.  
MSP: http://www.multiwii.com/wiki/index.php?title=Multiwii_Serial_Protocol  

Message frame structure:
`preamble`, `direction`, `size`, `command` , `data`, `crc`.

| Field | Note |
|:-----:|:----:|
| Preamble | $A |
| Direction | < or > |
| Size | Size of the data frame |
| Command | Frame id |
| Data | Data for each command |
| CRC | Checksum byte |

| Command | Frame ID | Direction | Data | Type | Note |
|:-----:|:-----:|:-----:|:-----:|:-----:|:-----:|
| MSP_IDENT | 100 | FC-> | VERSION |||
|||||||
| MSP_STATUS | 101 | FC-> |  |  ||
|||||||
| MSP_RAW_IMU | 102 |||||
|||||||
| MSP_MOTOR ||||||
|||||||
| MSP_SET_MOTOR ||||||
|||||||
| MSP_RC ||||||
|||||||
| MSP_SET_RAW_RC ||||||
|||||||
| MSP_RAW_GPS ||||||
|||||||
| MSP_COMP_GPS ||||||
|||||||
| MSP_ATTITUDE ||||||
|||||||
| MSP_ALTITUDE ||||||
|||||||
| MSP_ANALOG ||||||
|||||||
| MSP_BOXIDS ||||||
|||||||
| MSP_BOX ||||||
|||||||
| MSP_SET_BOX ||||||
|||||||
| MSP_PID ||||||
|||||||
| MSP_SET_PID ||||||
|||||||
| MSP_BOX_NAMES ||||||
|||||||
| MSP_PID_NAMES ||||||
|||||||
| MSP_WP ||||||
|||||||
| MSP_SET_WP ||||||
|||||||
|||||| END OF TABLE |
