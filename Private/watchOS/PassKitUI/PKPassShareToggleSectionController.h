//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassShareToggleSectionController_h
#define PKPassShareToggleSectionController_h
@import Foundation;

#include "PKPassShareSectionController.h"
#include "PKPassShareToggleSectionControllerDelegate-Protocol.h"

@class NSString, UIImage;

@interface PKPassShareToggleSectionController : PKPassShareSectionController {
  /* instance variables */
  NSString *_identifier;
  NSString *_title;
  BOOL _isEditable;
}

@property (weak, nonatomic) NSObject<PKPassShareToggleSectionControllerDelegate> *delegate;
@property (weak, nonatomic) NSString *footerText;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL toggleValue;

/* instance methods */
- (id)initWithIdentifier:(id)identifier title:(id)title toggleValue:(BOOL)value isEditable:(BOOL)editable delegate:(id)delegate;
- (id)cellRegistrationForItem:(id)item;
- (void)decorateCell:(id)cell forIdentifier:(id)identifier;
- (id)footerAttributedStringForIdentifier:(id)identifier;
- (BOOL)shouldHighlightItem:(id)item;
- (void)toggleValueDidChange:(id)change;
@end

#endif /* PKPassShareToggleSectionController_h */