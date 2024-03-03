//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.0.0.0.0
//
#ifndef VTKAttachmentStoreManager_h
#define VTKAttachmentStoreManager_h
@import Foundation;

#include "VTKFileStoreManager.h"
#include "VTKStoreManager-Protocol.h"

@class NSString;

@interface VTKAttachmentStoreManager : NSObject<VTKStoreManager>

@property (readonly, nonatomic) VTKFileStoreManager *fileStoreManager;
@property (copy, nonatomic) NSString *itemsDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)saveItems:(id)items withID:(id)id testCase:(id)case;
@end

#endif /* VTKAttachmentStoreManager_h */