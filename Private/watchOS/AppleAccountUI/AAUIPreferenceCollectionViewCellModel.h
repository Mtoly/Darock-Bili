//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef AAUIPreferenceCollectionViewCellModel_h
#define AAUIPreferenceCollectionViewCellModel_h
@import Foundation;

@class NSString, UIColor, UIImage;

@interface AAUIPreferenceCollectionViewCellModel : NSObject

@property (retain, nonatomic) UIImage *leadingImage;
@property (nonatomic) BOOL cellEnabled;
@property (nonatomic) BOOL highlightOnSelection;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *detailText;

/* instance methods */
- (id)init;
- (void)setCellEnabledForSpecifier:(id)specifier;
@end

#endif /* AAUIPreferenceCollectionViewCellModel_h */