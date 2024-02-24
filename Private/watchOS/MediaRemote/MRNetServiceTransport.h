//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRNetServiceTransport_h
#define MRNetServiceTransport_h
@import Foundation;

#include "MRExternalDeviceTransport.h"
#include "MRDeviceInfo.h"

@class NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {
  /* instance variables */
  MRDeviceInfo *_deviceInfo;
}

@property (retain, nonatomic) NSNetService *netService;
@property (nonatomic) BOOL requiresCustomPairing;

/* class methods */
+ (id)createDeviceInfoFromNetService:(id)service;
+ (id)createDeviceInfoFromTXTRecord:(id)txtrecord;

/* instance methods */
- (id)initWithNetService:(id)service;
- (void)dealloc;
- (id)description;
- (void)updateDeviceInfoWithTXTRecord:(id)txtrecord;
- (id)deviceInfo;
- (id)name;
- (id)hostname;
- (long long)port;
- (long long)connectionType;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)prompt;
- (id)error;
- (id)createConnectionWithUserInfo:(id)info;
- (BOOL)getInputStream:(id *)stream outputStream:(id *)stream userInfo:(id)info;
- (void)resetWithError:(id)error;
@end

#endif /* MRNetServiceTransport_h */