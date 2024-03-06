//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1856.60.8.0.0
//
#ifndef SUCoreEventReporterDelegate_h
#define SUCoreEventReporterDelegate_h
@import Foundation;

#include "NSURLSessionDelegate-Protocol.h"
#include "SUCoreEventReporter.h"

@class NSString;

@interface SUCoreEventReporterDelegate : NSObject<NSURLSessionDelegate>

@property (weak, nonatomic) SUCoreEventReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithReporter:(id)reporter;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
@end

#endif /* SUCoreEventReporterDelegate_h */