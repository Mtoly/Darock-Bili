//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef _CNUIUserActionCurator_h
#define _CNUIUserActionCurator_h
@import Foundation;

#include "CNLSApplicationWorkspace-Protocol.h"
#include "CNUIUserActionCurator-Protocol.h"

@class CNContactStore, NSString;

@interface _CNUIUserActionCurator : NSObject<CNUIUserActionCurator>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<CNLSApplicationWorkspace> *applicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContactStore:(id)store applicationWorkspace:(id)workspace;
- (id)curateUserAction:(id)action;
- (id)curateUserAction:(id)action withKeysToFetch:(id)fetch;
@end

#endif /* _CNUIUserActionCurator_h */