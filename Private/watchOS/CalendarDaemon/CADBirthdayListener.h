//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADBirthdayListener_h
#define CADBirthdayListener_h
@import Foundation;

@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) NSObject<CalBirthdayListener> *ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

/* class methods */
+ (id)sharedListener;
+ (void)start;
+ (void)reset;
+ (void)setBirthdayCalendarEnabled:(BOOL)enabled;
+ (BOOL)birthdayCalendarEnabled;

/* instance methods */
- (id)init;
- (void)start;
- (void)reset;
- (void)setBirthdayCalendarEnabled:(BOOL)enabled;
- (BOOL)birthdayCalendarEnabled;
@end

#endif /* CADBirthdayListener_h */