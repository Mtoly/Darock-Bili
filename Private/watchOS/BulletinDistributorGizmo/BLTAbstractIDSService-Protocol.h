//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTAbstractIDSService_Protocol_h
#define BLTAbstractIDSService_Protocol_h
@import Foundation;

@protocol BLTAbstractIDSService <NSObject>

@property (readonly, nonatomic) NSObject<BLTAbstractIDSDevice> *defaultPairedDevice;

/* instance methods */
- (id)initWithService:(id)service;
- (void)addDelegate:(id)delegate queue:(id)queue;
- (void)removeDelegate:(id)delegate;
- (void)setProtobufAction:(SEL)action forIncomingRequestsOfType:(unsigned short)type;
- (void)setProtobufAction:(SEL)action forIncomingResponsesOfType:(unsigned short)type;
- (BOOL)sendProtobuf:(id)protobuf toDestinations:(id)destinations priority:(long long)priority options:(id)options identifier:(id *)identifier error:(id *)error;
- (BOOL)sendResourceAtURL:(id)url metadata:(id)metadata toDestinations:(id)destinations priority:(long long)priority options:(id)options identifier:(id *)identifier error:(id *)error;
@end

#endif /* BLTAbstractIDSService_Protocol_h */