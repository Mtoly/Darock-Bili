//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyRequiredFieldRow_h
#define PKApplyRequiredFieldRow_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKApplyCollectionViewRow-Protocol.h"
#include "PKTextFieldCollectionViewListCellDelegate-Protocol.h"

@class NSString, PKPaymentSetupField;

@interface PKApplyRequiredFieldRow : NSObject<PKApplyCollectionViewRow> {
  /* instance variables */
  PKPaymentSetupField *_field;
  NSObject<PKTextFieldCollectionViewListCellDelegate> *_cellDelegate;
}

@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithField:(id)field cellDelegate:(id)delegate;
- (Class)cellClass;
- (void)configureCell:(id)cell;
@end

#endif /* PKApplyRequiredFieldRow_h */