//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef RemoteBundleLoader_h
#define RemoteBundleLoader_h
@import Foundation;

@class NSError, NSString;
@protocol OS_dispatch_queue;

@interface RemoteBundleLoader : NSObject {
  /* instance variables */
  unsigned int _targetTask;
  int _targetPid;
  id /* block */ _releaseOpaqueSymbolicator;
  struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; } * _remoteFunctionAddresses;
  NSString *_helperLaunchPath;
  NSObject<OS_dispatch_queue> *_symbolLookupQueue;
  NSObject<OS_dispatch_queue> *_injectionQueue;
  NSError *_missingSymbolError;
  BOOL _attemptedSymbolLookup;
  BOOL _exited;
}

/* instance methods */
- (void)_lookupFunctionAddresses:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })addresses;
- (id)initWithTask:(unsigned int)task;
- (void)dealloc;
- (void)scheduleLibraryLoad:(id)load calling:(id)calling arguments:(id)arguments callback:(id /* block */)callback;
@end

#endif /* RemoteBundleLoader_h */