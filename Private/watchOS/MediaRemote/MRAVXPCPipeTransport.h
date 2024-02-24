//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRAVXPCPipeTransport_h
#define MRAVXPCPipeTransport_h
@import Foundation;

#include "MRExternalDeviceTransport.h"
#include "MRAVOutputDevice.h"
#include "MRDeviceInfo.h"
#include "MRVirtualDevicePipeProtocol-Protocol.h"
#include "NSStreamDelegate-Protocol.h"

@class CURunLoopThread, NSError, NSInputStream, NSOutputStream, NSRunLoop, NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRAVXPCPipeTransport : MRExternalDeviceTransport<NSStreamDelegate, MRVirtualDevicePipeProtocol> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_serialQueue;
  MRDeviceInfo *_deviceInfo;
  NSError *_error;
  NSInputStream *_inputStream;
  NSInputStream *_inputStreamInternal;
  NSOutputStream *_outputStream;
  NSOutputStream *_outputStreamInternal;
  BOOL _useSystemAuthenticationPrompt;
  NSXPCConnection *_pipeConnection;
  NSRunLoop *_runLoop;
  CURunLoopThread *_runLoopThread;
}

@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) NSXPCListenerEndpoint *pipeEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOutputDevice:(id)device pipeEndpoint:(id)endpoint;
- (void)dealloc;
- (id)deviceInfo;
- (id)uid;
- (id)name;
- (id)hostname;
- (long long)port;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)prompt;
- (id)error;
- (id)createConnectionWithUserInfo:(id)info;
- (BOOL)getInputStream:(id *)stream outputStream:(id *)stream userInfo:(id)info;
- (void)reset;
- (BOOL)requiresCustomPairing;
- (void)stream:(id)stream handleEvent:(unsigned long long)event;
- (void)sendData:(id)data;
- (void)_onQueue_resetStreams;
@end

#endif /* MRAVXPCPipeTransport_h */