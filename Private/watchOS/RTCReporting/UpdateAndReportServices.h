//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 48.26.0.0.0
//
#ifndef UpdateAndReportServices_h
#define UpdateAndReportServices_h
@import Foundation;

@interface UpdateAndReportServices : NSObject

@property (readonly) BOOL update;
@property (readonly) BOOL report;
@property (copy) id /* block */ block;

/* instance methods */
- (id)initWithServices:(BOOL)services needToReport:(BOOL)report service:(id /* block */)service;
- (void)dealloc;
@end

#endif /* UpdateAndReportServices_h */