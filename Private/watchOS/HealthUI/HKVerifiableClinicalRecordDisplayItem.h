//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKVerifiableClinicalRecordDisplayItem_h
#define HKVerifiableClinicalRecordDisplayItem_h
@import Foundation;

@class NSAttributedString, NSString;

@interface HKVerifiableClinicalRecordDisplayItem : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long subtitleStyle;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSAttributedString *attributedDetailText;

/* class methods */
+ (id)subtitleItemWithTitleText:(id)text detailText:(id)text style:(long long)style;
+ (id)valueItemWithTitleText:(id)text detailText:(id)text;
+ (id)valueItemWithTitleText:(id)text attributedDetailText:(id)text;

/* instance methods */
@end

#endif /* HKVerifiableClinicalRecordDisplayItem_h */