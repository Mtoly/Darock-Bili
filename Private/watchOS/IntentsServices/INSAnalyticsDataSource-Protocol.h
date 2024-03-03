//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INSAnalyticsDataSource_Protocol_h
#define INSAnalyticsDataSource_Protocol_h
@import Foundation;

@protocol INSAnalyticsDataSource <NSObject>
/* instance methods */
- (id)analytics:(id)analytics contextDictionaryForCommand:(id)command;
- (id)analytics:(id)analytics contextDictionaryForError:(id)error;
@end

#endif /* INSAnalyticsDataSource_Protocol_h */