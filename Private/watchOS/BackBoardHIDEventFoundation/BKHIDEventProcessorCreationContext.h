//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDEventProcessorCreationContext_h
#define BKHIDEventProcessorCreationContext_h
@import Foundation;

#include "BKHIDEventProcessorRegistering-Protocol.h"
#include "BKHIDSystemInterfacing-Protocol.h"
#include "BKIOHIDServiceMatcherDataProviding-Protocol.h"

@protocol BKHIDEventDispatcher;

@interface BKHIDEventProcessorCreationContext : NSObject

@property (retain, nonatomic) NSObject<BKHIDSystemInterfacing> *systemInterface;
@property (retain, nonatomic) NSObject<BKHIDEventDispatcher> *eventDispatcher;
@property (retain, nonatomic) NSObject<BKIOHIDServiceMatcherDataProviding> *serviceMatcherDataProvider;
@property (retain, nonatomic) NSObject<BKHIDEventProcessorRegistering> *eventProcessorRegistry;

/* instance methods */
@end

#endif /* BKHIDEventProcessorCreationContext_h */