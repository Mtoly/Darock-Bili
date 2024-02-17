//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOResourceRequesterProxy_Protocol_h
#define GEOResourceRequesterProxy_Protocol_h
@import Foundation;

@protocol GEOResourceRequesterProxy <NSObject>
/* instance methods */
- (void)fetchResources:(id)resources force:(BOOL)force manifestConfiguration:(id)configuration auditToken:(id)token signpostID:(unsigned long long)id queue:(id)queue handler:(id /* block */)handler;
@end

#endif /* GEOResourceRequesterProxy_Protocol_h */