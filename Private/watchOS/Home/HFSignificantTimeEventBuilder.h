//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFSignificantTimeEventBuilder_h
#define HFSignificantTimeEventBuilder_h
@import Foundation;

#include "HFEventBuilder.h"
#include "HFTimeEventBuilder-Protocol.h"

@class NSDateComponents, NSString;

@interface HFSignificantTimeEventBuilder : HFEventBuilder<HFTimeEventBuilder>

@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSDateComponents *significantEventOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)compareToObject:(id)object;
- (id)initWithEvent:(id)event;
- (id)buildNewEventsFromCurrentState;
- (id)naturalLanguageNameOfType:(unsigned long long)type withHome:(id)home recurrences:(id)recurrences;
- (id)naturalLanguageNameWithOptions:(id)options recurrences:(id)recurrences;
- (id)naturalLanguageNameWithOptions:(id)options;
- (id)performValidation;
- (id)eventType;
- (id)comparisonKey;
@end

#endif /* HFSignificantTimeEventBuilder_h */