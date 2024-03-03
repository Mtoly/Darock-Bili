//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLSuppressSchoolModeAssertion_h
#define SCLSuppressSchoolModeAssertion_h
@import Foundation;

@class NSString, NSUUID, NSXPCConnection;

@interface SCLSuppressSchoolModeAssertion : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSUUID *_UUID;
  NSXPCConnection *_connection;
  unsigned long long _state;
}

@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) BOOL valid;

/* instance methods */
- (id)initWithExplanation:(id)explanation;
- (BOOL)isValid;
- (id)description;
- (void)invalidate;
- (void)acquireWithInvalidationHandler:(id /* block */)handler;
- (BOOL)acquireWithError:(out id *)error;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
@end

#endif /* SCLSuppressSchoolModeAssertion_h */