//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPCAutoPlayEnumerationResult2_h
#define _MPCAutoPlayEnumerationResult2_h
@import Foundation;

#include "MPSectionedIdentifierListEnumerationItem-Protocol.h"

@class NSString;

@interface _MPCAutoPlayEnumerationResult2 : NSObject<MPSectionedIdentifierListEnumerationItem>

@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) BOOL removed;
@property (readonly, nonatomic) long long branchDepth;
@property (readonly, nonatomic) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSectionIdentifier:(id)identifier;
- (id)itemResult;
- (id)trackingEntryResult;
- (BOOL)isRemoved;
@end

#endif /* _MPCAutoPlayEnumerationResult2_h */