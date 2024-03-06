//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVGetGrantedDelegatesTaskGroup_h
#define CalDAVGetGrantedDelegatesTaskGroup_h
@import Foundation;

#include "CalDAVGetDelegatesBaseTaskGroup.h"

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup

@property (nonatomic) int state;
@property (nonatomic) BOOL fetchPrincipalDetails;

/* instance methods */
- (id)initWithAccountInfoProvider:(id)provider principalURL:(id)url taskManager:(id)manager;
- (void)_finishWithError:(id)error state:(int)state;
- (void)_fetchOnlyHrefs;
- (id)_urlAppendingSegmentWithAllowWrite:(BOOL)write;
- (void)_expandPropertiesWithAllowWrite:(BOOL)write;
- (void)_getChildProperties;
- (void)startTaskGroup;
- (void)task:(id)task didFinishWithError:(id)error;
- (void)taskGroup:(id)group didFinishWithError:(id)error;
@end

#endif /* CalDAVGetGrantedDelegatesTaskGroup_h */