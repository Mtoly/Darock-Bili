//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapServicePhotoLookupTicket_Protocol_h
#define GEOMapServicePhotoLookupTicket_Protocol_h
@import Foundation;

@protocol GEOMapServicePhotoLookupTicket <GEOMapServiceCancellableTicket>
/* instance methods */
- (void)submitWithHandler:(id /* block */)handler networkActivity:(id /* block */)activity;
- (void)cancel;
@end

#endif /* GEOMapServicePhotoLookupTicket_Protocol_h */