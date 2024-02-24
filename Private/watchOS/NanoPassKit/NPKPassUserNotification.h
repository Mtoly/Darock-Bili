//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassUserNotification_h
#define NPKPassUserNotification_h
@import Foundation;

#include "NPKUserNotification.h"

@class NSArray, PKPass;

@interface NPKPassUserNotification : NPKUserNotification

@property (readonly, nonatomic) PKPass *pass;
@property (readonly, nonatomic) NSArray *identifierHashComponents;

/* instance methods */
- (id)initWithPass:(id)pass;
@end

#endif /* NPKPassUserNotification_h */