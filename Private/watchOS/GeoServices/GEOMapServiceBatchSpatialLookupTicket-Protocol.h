//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapServiceBatchSpatialLookupTicket_Protocol_h
#define GEOMapServiceBatchSpatialLookupTicket_Protocol_h
@import Foundation;

@protocol GEOMapServiceBatchSpatialLookupTicket <NSObject>

@property (readonly, nonatomic) GEOMapServiceTraits *traits;

/* instance methods */
- (void)submitWithHandler:(id /* block */)handler networkActivity:(id /* block */)activity;
- (void)submitWithHandler:(id /* block */)handler auditToken:(id)token networkActivity:(id /* block */)activity;
- (void)submitWithHandler:(id /* block */)handler networkActivity:(id /* block */)activity queue:(id)queue;
- (void)submitWithHandler:(id /* block */)handler auditToken:(id)token networkActivity:(id /* block */)activity queue:(id)queue;
- (void)cancel;
- (id)mapItemsForParameters:(id)parameters;
@end

#endif /* GEOMapServiceBatchSpatialLookupTicket_Protocol_h */