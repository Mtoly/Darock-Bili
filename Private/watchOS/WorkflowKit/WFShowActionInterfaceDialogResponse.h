//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFShowActionInterfaceDialogResponse_h
#define WFShowActionInterfaceDialogResponse_h
@import Foundation;

#include "WFDialogResponse.h"
#include "BSXPCSecureCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSXPCListenerEndpoint;

@interface WFShowActionInterfaceDialogResponse : WFDialogResponse<BSXPCSecureCoding, NSSecureCoding>

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, nonatomic) BOOL unsupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (id)initWithCancelled:(BOOL)cancelled;
- (id)initWithUnsupported:(BOOL)unsupported;
- (id)initWithListenerEndpoint:(id)endpoint userInterfaceType:(id)type;
- (id)initWithCoder:(id)coder;
- (BOOL)shouldDismissDialogInTransientMode;
- (void)encodeWithCoder:(id)coder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (BOOL)isUnsupported;
@end

#endif /* WFShowActionInterfaceDialogResponse_h */