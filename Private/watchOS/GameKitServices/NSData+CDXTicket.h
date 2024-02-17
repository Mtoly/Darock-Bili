//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef NSData_CDXTicket_h
#define NSData_CDXTicket_h
@import Foundation;

@interface NSData (CDXTicket)
/* class methods */
+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14] } *)addr;

/* instance methods */
- (struct sockaddr { unsigned char x0; unsigned char x1; char x2[14] } *)sockAddr;
- (long long)CDXTicketPID;
- (long long)CDXTicketPCNT;
- (id)CDXTicketExpirationDate;
- (unsigned long long)CDXTicketRevision;
- (const struct CDXTicket { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; struct { unsigned char x0[6] unsigned short x1; } x4; unsigned int x5; unsigned char x6[0] } *)CDXTicket;
- (struct CDXTicket { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; struct { unsigned char x0[6] unsigned short x1; } x4; unsigned int x5; unsigned char x6[0] } *)mutableCDXTicket;
- (unsigned long long)CDXTicketSID;
- (BOOL)CDXTicketIsReflected;
- (BOOL)CDXTicketIsHolePunch;
- (BOOL)CDXTicketIsStub;
- (id)CDXTicketTrimmed;
- (BOOL)CDXTicketWellFormed;
- (BOOL)CDXTicketIsRelatedToTicket:(id)ticket;
@end

#endif /* NSData_CDXTicket_h */