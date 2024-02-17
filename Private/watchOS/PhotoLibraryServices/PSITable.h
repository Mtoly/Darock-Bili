//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PSITable_h
#define PSITable_h
@import Foundation;

#include "PSITableDelegate-Protocol.h"

@interface PSITable : NSObject {
  /* instance variables */
  BOOL _finalizzeWasCalled;
}

@property (readonly, weak) NSObject<PSITableDelegate> *delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate searchable:(BOOL)searchable writable:(BOOL)writable;
- (void)dealloc;
- (void)finalizze;
- (void)clear;
@end

#endif /* PSITable_h */