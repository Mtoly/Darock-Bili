//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPBlastdoorVideoProcessor_h
#define VCPBlastdoorVideoProcessor_h
@import Foundation;

#include "VCPBlockBasedVideoProcessorProtocol-Protocol.h"

@class NSDictionary, NSMutableArray, NSURL;
@protocol {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}};

@interface VCPBlastdoorVideoProcessor : NSObject<VCPBlockBasedVideoProcessorProtocol> {
  /* instance variables */
  NSURL *_url;
  NSMutableArray *_frameProcessors;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _canceled;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _stopProcessing;
}

@property (retain, nonatomic) NSDictionary *decoderSettings;
@property (copy, nonatomic) id /* block */ progressHandler;

/* instance methods */
- (id)initWithURL:(id)url;
- (BOOL)processConfiguration:(id)configuration withError:(id *)error;
- (BOOL)addFrameProcessingRequest:(id /* block */)request withConfiguration:(id)configuration error:(id *)error;
- (BOOL)analyzeWithError:(id *)error;
- (void)cancel;
@end

#endif /* VCPBlastdoorVideoProcessor_h */