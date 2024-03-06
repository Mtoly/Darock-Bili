//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef TTSSpeechThread_h
#define TTSSpeechThread_h
@import Foundation;

#include "NSThread.h"

@class NSPort, NSRunLoop;
@protocol OS_voucher;

@interface TTSSpeechThread : NSThread {
  /* instance variables */
  NSPort *_machPort;
  NSRunLoop *_threadRunLoop;
}

@property (retain, nonatomic) NSObject<OS_voucher> *voucher;

/* instance methods */
- (id)init;
- (void)main;
- (void)cancel;
- (void)stop;
@end

#endif /* TTSSpeechThread_h */