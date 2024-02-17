//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCProfileItemDetail_h
#define DMCProfileItemDetail_h
@import Foundation;

@class NSAttributedString, NSString;

@interface DMCProfileItemDetail : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *detail;
@property (readonly, nonatomic) BOOL isTrusted;
@property (readonly, nonatomic) NSAttributedString *trustText;

/* class methods */
+ (id)itemDetailWithTitle:(id)title detail:(id)detail;

/* instance methods */
- (id)initWithTitle:(id)title detail:(id)detail isTrusted:(BOOL)trusted trustText:(id)text;
@end

#endif /* DMCProfileItemDetail_h */