//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MOEffectivePublisher_h
#define MOEffectivePublisher_h
@import Foundation;

#include "MOPublisher.h"
#include "MOSettingsPublisherBase.h"

@interface MOEffectivePublisher : MOPublisher

@property (readonly, nonatomic) MOSettingsPublisherBase *base;

/* instance methods */
- (id)sinkWithReceiveInput:(id /* block */)input;
- (id)sinkWithRecieveInput:(id /* block */)input;
- (id)initWithInterestedGroups:(id)groups;
- (void)subscribe:(id)subscribe;
@end

#endif /* MOEffectivePublisher_h */