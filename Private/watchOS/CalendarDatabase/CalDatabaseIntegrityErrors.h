//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1232.2.3.0.0
//
#ifndef CalDatabaseIntegrityErrors_h
#define CalDatabaseIntegrityErrors_h
@import Foundation;

@class NSCountedSet;
@protocol CalCalendarDatabaseIntegrityErrorReportingDelegate;

@interface CalDatabaseIntegrityErrors : NSObject

@property (readonly, nonatomic) NSCountedSet *errors;
@property (retain, nonatomic) NSObject<CalCalendarDatabaseIntegrityErrorReportingDelegate> *delegate;

/* instance methods */
- (id)init;
@end

#endif /* CalDatabaseIntegrityErrors_h */