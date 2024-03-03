//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCModifyReadingListCommand_h
#define FCModifyReadingListCommand_h
@import Foundation;

#include "FCModifyRecordsCommand.h"

@interface FCModifyReadingListCommand : FCModifyRecordsCommand
/* class methods */
+ (id)desiredKeys;

/* instance methods */
- (id)initWithReadingListEntries:(id)entries merge:(BOOL)merge;
- (BOOL)mergeLocalRecord:(id)record withRemoteRecord:(id)record;
@end

#endif /* FCModifyReadingListCommand_h */