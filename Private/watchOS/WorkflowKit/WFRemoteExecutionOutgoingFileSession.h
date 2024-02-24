//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRemoteExecutionOutgoingFileSession_h
#define WFRemoteExecutionOutgoingFileSession_h
@import Foundation;

#include "WFRemoteExecutionSession.h"

@class NSString, NSURL;

@interface WFRemoteExecutionOutgoingFileSession : WFRemoteExecutionSession

@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *transferIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;

/* class methods */
+ (long long)version;
+ (BOOL)supportsVersion:(long long)version;

/* instance methods */
- (id)initWithService:(id)service fileURL:(id)url transferIdentifier:(id)identifier requestIdentifier:(id)identifier;
- (BOOL)sendToDestinations:(id)destinations options:(id)options error:(id *)error;
- (void)fileSentWithSuccess:(BOOL)success error:(id)error;
- (void)finishWithError:(id)error;
@end

#endif /* WFRemoteExecutionOutgoingFileSession_h */