//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLLazyObject_h
#define PLLazyObject_h
@import Foundation;

@interface PLLazyObject : NSObject {
  /* instance variables */
  BOOL _shouldRetryBlockOnNil;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  id /* block */ _block;
  id _object;
}

@property (readonly) id objectValue;
@property (readonly) id currentObjectValueWithoutForcingEvaluation;

/* instance methods */
- (id)init;
- (id)initWithObject:(id)object;
- (id)initWithBlock:(id /* block */)block;
- (id)initWithRetriableBlock:(id /* block */)block;
- (id)initWithRetry:(BOOL)retry block:(id /* block */)block;
- (void)resetObject;
- (void)resetObjectWithHandler:(id /* block */)handler;
- (void)invalidate;
- (void)invalidateWithHandler:(id /* block */)handler;
@end

#endif /* PLLazyObject_h */