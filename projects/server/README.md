# Web Servers

## Internet Sockets

### Stream Sockets
 - Known as SOCK_STREAM
 - Reliable two-way connected communication stream.
 - Telnet and HTTP uses stream sockets.
 - Uses The Transmission Control Protocol (TCP)

### Datagram Sockets
 - Know as SOCK_DGRAM
 - Connectionless, potential for dropped packets, one way. 
 - DHCP, games, video, and audio use this (Dropped packets aren't end of world)
 - Uses The User Datagram Protocol (UDP)
 - For more reliable transmission, you can implement own protocol, 
   which needs an acknowledgement from the recipient

**WHY UDP OVER TCP THEN??? SPEED!!**

## Network Theory

### Data Encappsulation
 1. data is born
 2. wrapped in header (tftp)
 3. wrapped in protocol(UDP)
 4. wrapped in next protocol(IP)
 5. wrapped in hardware proto (Ethernet?)

**The kernel builds the transport and internet layer, hardware does the network access layer**

### Layered Network Model
 - Physical
 - Data Link
 - Network 
 - Transport
 - Session
 - Presentation
 - Application

## IP, structs, Data

