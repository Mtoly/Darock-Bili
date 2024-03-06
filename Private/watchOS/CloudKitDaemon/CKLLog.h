//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKLLog_h
#define CKLLog_h
@import Foundation;

@class NSDate, NSMutableArray, NSString, OSLogEventLiveStream, OSLogEventStream;

@interface CKLLog : NSObject

@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) OSLogEventStream *logEventStream;
@property (retain, nonatomic) OSLogEventLiveStream *liveStream;
@property (retain, nonatomic) NSMutableArray *streamObservers;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL wantsSimulatorLogs;
@property (nonatomic) BOOL onlyTestLogs;
@property (nonatomic) double startTimeOffset;
@property (retain, nonatomic) NSDate *absoluteStartDate;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) BOOL colorOutput;

/* class methods */
+ (id)preparedStreamFromStore:(id)store;
+ (id)preparedLiveStreamFromLiveStore:(id)store;

/* instance methods */
- (id)initInternal;
- (id)initForHostStream;
- (id)initWithArchiveAtURL:(id)url;
- (void)addStreamObserver:(id)observer;
- (void)streamLogsWithCompletion:(id /* block */)completion;
@end

#endif /* CKLLog_h */