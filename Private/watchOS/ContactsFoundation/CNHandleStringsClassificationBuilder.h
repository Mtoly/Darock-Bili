//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNHandleStringsClassificationBuilder_h
#define CNHandleStringsClassificationBuilder_h
@import Foundation;

@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *unknown;

/* instance methods */
- (id)init;
- (id)build;
- (void)addEmailAddress:(id)address;
- (void)addPhoneNumber:(id)number;
- (void)addUnknown:(id)unknown;
@end

#endif /* CNHandleStringsClassificationBuilder_h */