//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECFlagChangeMessageActionResultsBuilder_Protocol_h
#define ECFlagChangeMessageActionResultsBuilder_Protocol_h
@import Foundation;

#include "ECFlagChangeMessageActionResultsBuilder-Protocol.h"

@class NSError, NSMutableIndexSet, NSString;

@protocol ECFlagChangeMessageActionResultsBuilder <ECLocalMessageActionResultsBuilder>

@property (readonly, copy, nonatomic) NSMutableIndexSet *completedUIDs;

@end

#endif /* ECFlagChangeMessageActionResultsBuilder_Protocol_h */