//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLResourceSPI_Protocol_h
#define MTLResourceSPI_Protocol_h
@import Foundation;

@protocol MTLResourceSPI <MTLResource>

@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;

/* instance methods */
- (BOOL)isPurgeable;
- (BOOL)isComplete;
- (void)waitUntilComplete;
- (BOOL)doesAliasResource:(id)resource;
- (BOOL)doesAliasAllResources:(const id *)resources count:(unsigned long long)count;
- (BOOL)doesAliasAnyResources:(const id *)resources count:(unsigned long long)count;
@optional
/* instance methods */
- (int)setOwnerWithIdentity:(unsigned int)identity;
@end

#endif /* MTLResourceSPI_Protocol_h */