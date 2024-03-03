//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSignificantEventNotificationRecord_h
#define HMDCameraSignificantEventNotificationRecord_h
@import Foundation;

#include "HMFObject.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSUUID;

@interface HMDCameraSignificantEventNotificationRecord : HMFObject<NSCopying>

@property (readonly, copy) NSUUID *UUID;
@property (readonly) unsigned long long notificationReasons;
@property (readonly, copy) NSDate *date;

/* instance methods */
- (id)initWithUUID:(id)uuid notificationReasons:(unsigned long long)reasons date:(id)date;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMDCameraSignificantEventNotificationRecord_h */