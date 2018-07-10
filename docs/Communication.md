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
