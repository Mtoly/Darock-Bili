//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCWebAccessEntry_h
#define FCWebAccessEntry_h
@import Foundation;

@class NSDate, NSString;

@interface FCWebAccessEntry : NSObject {
  /* instance variables */
  NSString *_identifier;
  NSString *_tagID;
}

@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *purchaseID;
@property (readonly, nonatomic) NSString *purchaseReceipt;
@property (readonly, nonatomic) NSDate *lastRetryAttemptTime;

/* instance methods */
@end

#endif /* FCWebAccessEntry_h */