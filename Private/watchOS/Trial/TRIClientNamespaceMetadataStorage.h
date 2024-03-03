//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIClientNamespaceMetadataStorage_h
#define TRIClientNamespaceMetadataStorage_h
@import Foundation;

#include "TRIClientNamespaceMetadataStoring-Protocol.h"
#include "TRIPaths-Protocol.h"

@class NSString;

@interface TRIClientNamespaceMetadataStorage : NSObject<TRIClientNamespaceMetadataStoring> {
  /* instance variables */
  NSObject<TRIPaths> *_paths;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPaths:(id)paths;
- (id)loadNamespaceMetadataForNamespaceName:(id)name error:(id *)error;
- (id)urlForNamespaceMetadataForNamespaceName:(id)name;
@end

#endif /* TRIClientNamespaceMetadataStorage_h */