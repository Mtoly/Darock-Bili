//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDeveloperDefault_h
#define CSLDeveloperDefault_h
@import Foundation;

@class NSString;

@interface CSLDeveloperDefault : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id developerValue;
@property (readonly, nonatomic) BOOL useOriginal;
@property (readonly, nonatomic) id defaultValue;
@property (readonly, nonatomic) NSString *notification;
@property (readonly, nonatomic) NSString *domain;

/* instance methods */
- (id)initWithKey:(id)key developerValue:(id)value useOriginal:(BOOL)original defaultValue:(id)value notification:(id)notification domain:(id)domain;
- (id)initWithDictionary:(id)dictionary;
- (void)setToValue:(id)value;
- (id)getValue;
- (void)setToDeveloperValue;
- (void)setToDefaultValue;
- (id)description;
@end

#endif /* CSLDeveloperDefault_h */