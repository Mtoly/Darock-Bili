//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDCoreSpotlightMessageSubjectIndexer_h
#define IMDCoreSpotlightMessageSubjectIndexer_h
@import Foundation;

#include "IMDCoreSpotlightBaseIndexer.h"
#include "IMDCoreSpotlightIndexer-Protocol.h"

@class NSString;

@interface IMDCoreSpotlightMessageSubjectIndexer : IMDCoreSpotlightBaseIndexer<IMDCoreSpotlightIndexer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)indexItem:(id)item withChat:(id)chat isReindexing:(BOOL)reindexing metadataToUpdate:(id)update timingProfiler:(id)profiler;
@end

#endif /* IMDCoreSpotlightMessageSubjectIndexer_h */