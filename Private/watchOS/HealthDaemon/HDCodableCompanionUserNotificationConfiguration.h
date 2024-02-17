//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableCompanionUserNotificationConfiguration_h
#define HDCodableCompanionUserNotificationConfiguration_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface HDCodableCompanionUserNotificationConfiguration : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 notificationType; } _has;
}

@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) int notificationType;

/* instance methods */
- (id)notificationTypeAsString:(int)string;
- (int)StringAsNotificationType:(id)type;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* HDCodableCompanionUserNotificationConfiguration_h */