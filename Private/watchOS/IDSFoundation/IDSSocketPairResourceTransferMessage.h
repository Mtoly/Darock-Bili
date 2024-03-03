//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSSocketPairResourceTransferMessage_h
#define IDSSocketPairResourceTransferMessage_h
@import Foundation;

#include "IDSSocketPairDataMessage.h"

@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage
/* class methods */
+ (id)resumeMessageWithSequenceNumber:(unsigned int)number streamID:(unsigned short)id messageUUID:(id)uuid nextByteOffset:(unsigned long long)offset;
+ (id)cancelMessageWithSequenceNumber:(unsigned int)number streamID:(unsigned short)id messageUUID:(id)uuid cancelReason:(unsigned char)reason;

/* instance methods */
- (unsigned char)command;
- (unsigned char)type;
- (unsigned long long)byteOffset;
- (unsigned char)cancelReason;
@end

#endif /* IDSSocketPairResourceTransferMessage_h */