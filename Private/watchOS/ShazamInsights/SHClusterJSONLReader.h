//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHClusterJSONLReader_h
#define SHClusterJSONLReader_h
@import Foundation;

#include "SHJSONLDataDetokenizerDelegate-Protocol.h"

@class NSString;

@interface SHClusterJSONLReader : NSObject<SHJSONLDataDetokenizerDelegate>

@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)readDataLineByLineFromURL:(id)url error:(id *)error callback:(id /* block */)callback;
- (BOOL)parsedJSONObject:(id)jsonobject error:(id *)error;
- (void)importClusters:(id)clusters toParentCluster:(id)cluster startIndex:(unsigned long long)index;
@end

#endif /* SHClusterJSONLReader_h */