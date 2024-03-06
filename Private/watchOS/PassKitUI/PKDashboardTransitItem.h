//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardTransitItem_h
#define PKDashboardTransitItem_h
@import Foundation;

#include "PKDashboardItem-Protocol.h"
#include "PKPassView.h"

@class NSArray, NSString, PKPaymentPass, PKTransitBalanceModel;

@interface PKDashboardTransitItem : NSObject<PKDashboardItem> {
  /* instance variables */
  PKPassView *_passView;
}

@property (nonatomic) unsigned long long transitItemType;
@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel;
@property (copy, nonatomic) NSArray *transitCommutePlans;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifier;

/* instance methods */
- (id)initWithPassView:(id)view;
@end

#endif /* PKDashboardTransitItem_h */