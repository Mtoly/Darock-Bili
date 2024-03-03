//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassSelectionFieldDetectorListener_Protocol_h
#define NPKPassSelectionFieldDetectorListener_Protocol_h
@import Foundation;

#include "NPKFieldDetectEventFilter.h"
#include "NPKObserverManager.h"
#include "NPKPassSelectionFieldDetectorListener-Protocol.h"

@class NSString;

@protocol NPKPassSelectionFieldDetectorListener <NSObject>

@property (retain, nonatomic) NPKFieldDetectEventFilter *eventFilter;

/* instance methods */
- (void)registerObserver:(id)observer withRelativePriority:(long long)priority;
@end

#endif /* NPKPassSelectionFieldDetectorListener_Protocol_h */