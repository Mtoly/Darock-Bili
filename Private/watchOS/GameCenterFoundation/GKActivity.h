//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKActivity_h
#define GKActivity_h
@import Foundation;

@class NSString;
@protocol OS_os_activity;

@interface GKActivity : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int mode;
@property (retain, nonatomic) NSObject<OS_os_activity> *parent;
@property (retain, nonatomic) NSObject<OS_os_activity> *activity;

/* class methods */
+ (id)activity;
+ (id)detached;
+ (id)currentOrNew;
+ (id)named:(id)named;
+ (void)named:(id)named execute:(id /* block */)execute;
+ (void)execute:(id /* block */)execute;

/* instance methods */
- (id)initWithName:(id)name parent:(id)parent mode:(unsigned int)mode;
- (void)createActivity;
- (id)child;
- (id)named:(id)named;
- (void)named:(id)named execute:(id /* block */)execute;
- (void)execute:(id /* block */)execute;
@end

#endif /* GKActivity_h */