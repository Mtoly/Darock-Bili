//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassSelectionFieldDetectorListener_h
#define NPKPassSelectionFieldDetectorListener_h
@import Foundation;

#include "NPKFieldDetectEventFilter.h"
#include "NPKObserverManager.h"
#include "NPKPassSelectionFieldDetectorListener-Protocol.h"

@class NSString;

@interface NPKPassSelectionFieldDetectorListener : NSObject<NPKPassSelectionFieldDetectorListener> {
  /* instance variables */
  NPKObserverManager *_observerManager;
}

@property (retain, nonatomic) NPKFieldDetectEventFilter *eventFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)registerObserver:(id)observer withRelativePriority:(long long)priority;
- (void)_notifyObserverDidEnterFieldForPassesWithUniqueIDs:(id)ids;
@end

#endif /* NPKPassSelectionFieldDetectorListener_h */