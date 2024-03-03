//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDConfiguration_Record_h
#define DNDConfiguration_Record_h
@import Foundation;

@interface DNDConfiguration (Record)
/* class methods */
+ (id)configurationForRecord:(id)record secureRecord:(id)record;

/* instance methods */
- (id)makeRecord;
- (id)makeSecureRecord;
@end

#endif /* DNDConfiguration_Record_h */