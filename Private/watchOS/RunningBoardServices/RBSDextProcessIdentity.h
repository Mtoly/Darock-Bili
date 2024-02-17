//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSDextProcessIdentity_h
#define RBSDextProcessIdentity_h
@import Foundation;

#include "RBSProcessIdentity.h"

@class NSString;

@interface RBSDextProcessIdentity : RBSProcessIdentity {
  /* instance variables */
  NSString *_serverName;
  NSString *_label;
  NSString *_bundleID;
  unsigned char _type;
}

/* instance methods */
- (id)_initDextWithServerName:(id)name label:(id)label containingAppBundleID:(id)id;
- (id)_initDextWithServerName:(id)name tagString:(id)string containingAppBundleID:(id)id;
- (BOOL)isAnonymous;
- (id)dextServerName;
- (id)dextLabel;
- (id)dextContainingAppBundleID;
- (BOOL)isDext;
- (id)copyWithAuid:(unsigned int)auid;
- (BOOL)_matchesIdentity:(id)identity;
- (id)debugDescription;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
- (id)encodeForJob;
- (id)initWithDecodeFromJob:(id)job;
@end

#endif /* RBSDextProcessIdentity_h */