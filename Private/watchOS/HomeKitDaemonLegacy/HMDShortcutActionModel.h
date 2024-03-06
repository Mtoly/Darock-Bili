//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDShortcutActionModel_h
#define HMDShortcutActionModel_h
@import Foundation;

#include "HMDActionModel.h"

@class NSData;

@interface HMDShortcutActionModel : HMDActionModel

@property (retain, @dynamic) NSData *data;

/* class methods */
+ (Class)backedObjectClass;
+ (id)properties;

/* instance methods */
- (void)loadModelWithActionInformation:(id)information;
@end

#endif /* HMDShortcutActionModel_h */