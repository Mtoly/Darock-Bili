//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSFormFieldClassificationCorrectorDelegate_Protocol_h
#define WBSFormFieldClassificationCorrectorDelegate_Protocol_h
@import Foundation;

@protocol WBSFormFieldClassificationCorrectorDelegate <NSObject>
/* instance methods */
- (id)formFieldClassificationCorrector:(id)corrector bestAddressBookLabelForControlValue:(id)value;
- (id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)corrector;
- (BOOL)formFieldClassificationCorrector:(id)corrector hasAddressBookDataForAddressBookLabel:(id)label;
@end

#endif /* WBSFormFieldClassificationCorrectorDelegate_Protocol_h */