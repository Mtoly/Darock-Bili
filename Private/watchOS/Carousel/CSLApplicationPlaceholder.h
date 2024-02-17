//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLApplicationPlaceholder_h
#define CSLApplicationPlaceholder_h
@import Foundation;

#include "FBSApplicationPlaceholder.h"
#include "CSLAppOrPlaceholderBundleInfo-Protocol.h"

@class NSString;

@interface CSLApplicationPlaceholder : FBSApplicationPlaceholder<CSLAppOrPlaceholderBundleInfo>

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL restricted;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL internal;
@property (readonly, nonatomic) BOOL installedWithOS;
@property (readonly, nonatomic) BOOL installing;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) BOOL supportsForegroundApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_reloadFromProxy:(id)proxy;
- (BOOL)isHidden;
- (BOOL)isInternal;
- (BOOL)isInstalledWithOS;
- (BOOL)isStandAloneWatchApp;
- (BOOL)isDeletableForPairedDevice:(id)device;
- (BOOL)isInstalling;
- (void)prioritize;
@end

#endif /* CSLApplicationPlaceholder_h */