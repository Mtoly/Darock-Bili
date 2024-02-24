//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRExternalDeviceTransportConnection_h
#define MRExternalDeviceTransportConnection_h
@import Foundation;

#include "MRExternalDeviceTransportConnectionDelegate-Protocol.h"

@class NSDictionary, NSError, NSString;

@interface MRExternalDeviceTransportConnection : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *destinationOutputDeviceUID;
@property (retain, nonatomic) NSString *destinationGroupUID;
@property (nonatomic) unsigned int connectOptions;
@property (retain, nonatomic) NSDictionary *connectUserInfo;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSError *error;
@property (weak, nonatomic) NSObject<MRExternalDeviceTransportConnectionDelegate> *delegate;

/* instance methods */
- (unsigned long long)sendTransportData:(id)data options:(id)options;
- (void)close;
- (void)closeWithError:(id)error;
- (void)_notifyDelegateDidCloseWithError:(id)error;
- (void)_notifyDelegateDidReceiveData:(id)data;
- (void)_notifyDelegateHasSpaceAvailable;
- (id)exportEndpoint:(id)endpoint;
- (id)exportEndpoints:(id)endpoints;
- (id)exportOutputDevice:(id)device endpoint:(id)endpoint;
- (id)exportOutputDevices:(id)devices endpoint:(id)endpoint;
- (BOOL)hasAccessToPlayerPath:(id)path;
- (BOOL)isAllowedToSendMessageType:(unsigned long long)type;
- (BOOL)isAllowedToSendCommand:(unsigned int)command;
@end

#endif /* MRExternalDeviceTransportConnection_h */