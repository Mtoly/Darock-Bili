//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 243.0.0.0.0
//
#ifndef FLHeadlessExtensionLoader_h
#define FLHeadlessExtensionLoader_h
@import Foundation;

#include "FLExtensionHostContextInterface-Protocol.h"

@class FLExtensionContext, NSExtension, NSString, NSUUID;

@interface FLHeadlessExtensionLoader : NSObject {
  /* instance variables */
  FLExtensionContext *_extensionContext;
  NSObject<FLExtensionHostContextInterface> *_delegate;
}

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUUID *sessionID;
@property (copy, nonatomic) id /* block */ requestInterruptionBlock;

/* class methods */
+ (id)sharedExtensionQueue;

/* instance methods */
- (id)initWithFollowUp:(id)up andDelegate:(id)delegate;
- (id)initWithIdentifier:(id)identifier;
- (void)_terminate;
- (id)remoteInterface;
- (BOOL)_loadExtension:(id *)extension;
- (BOOL)_setupSessionIfNeeded:(id *)needed;
- (id)_loadExtensionForIdentifier:(id)identifier error:(id *)error;
- (id)_hostContextForExtension:(id)extension;
- (id)description;
- (void)dealloc;
@end

#endif /* FLHeadlessExtensionLoader_h */