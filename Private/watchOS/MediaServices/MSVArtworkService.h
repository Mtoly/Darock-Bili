//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVArtworkService_h
#define MSVArtworkService_h
@import Foundation;

@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject

@property (retain, nonatomic) NSOperationQueue *serviceThrottlingOperationQueue;
@property (retain, nonatomic) NSOperationQueue *serviceColorAnalysisOperationQueue;
@property (retain, nonatomic) NSXPCConnection *serverConnection;

/* class methods */
+ (id)sharedService;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)sendRequest:(id)request completionHandler:(id /* block */)handler;
- (void)sendRequest:(id)request completion:(id /* block */)completion;
@end

#endif /* MSVArtworkService_h */