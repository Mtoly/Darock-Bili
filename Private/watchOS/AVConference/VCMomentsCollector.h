//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMomentsCollector_h
#define VCMomentsCollector_h
@import Foundation;

#include "VCMediaRecorder.h"
#include "VCMomentsCollectorDelegate-Protocol.h"

@class NSString;

@interface VCMomentsCollector : NSObject<VCMomentsCollectorDelegate> {
  /* instance variables */
  long long _streamToken;
  VCMediaRecorder *_mediaRecorder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStreamToken:(long long)token;
- (void)dealloc;
- (void)stream:(id)stream addVideoSampleBuffer:(struct opaqueCMSampleBuffer *)buffer cameraStatusBits:(unsigned char)bits timestamp:(unsigned int)timestamp;
- (void)stream:(id)stream addAudioSampleBuffer:(struct opaqueVCAudioBufferList *)buffer timestamp:(unsigned int)timestamp;
- (void)cleanupActiveRequests;
@end

#endif /* VCMomentsCollector_h */