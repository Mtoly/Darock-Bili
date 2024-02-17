//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFAttachmentUtilities_h
#define MFAttachmentUtilities_h
@import Foundation;

@interface MFAttachmentUtilities : NSObject
/* class methods */
+ (id)temporaryDirectory;
+ (id)_temporaryDirectoryUniqueURL;
+ (id)temporaryFileURLWithExtension:(id)extension;
+ (id)temporaryFileURLWithFileName:(id)name;
+ (id)mimeTypeForFileName:(id)name;
@end

#endif /* MFAttachmentUtilities_h */