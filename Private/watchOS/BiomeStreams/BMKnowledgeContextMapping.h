//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMKnowledgeContextMapping_h
#define BMKnowledgeContextMapping_h
@import Foundation;

@interface BMKnowledgeContextMapping : NSObject
/* class methods */
+ (id)contextKeypathForQuery:(id)query;
+ (id)liveEventsForQuery:(id)query context:(id)context;
@end

#endif /* BMKnowledgeContextMapping_h */