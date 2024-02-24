//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentAssociatedAccountPresentationContext_h
#define PKPeerPaymentAssociatedAccountPresentationContext_h
@import Foundation;

@class PKFamilyMember, PKPaymentTransaction;

@interface PKPeerPaymentAssociatedAccountPresentationContext : NSObject

@property (retain, nonatomic) PKFamilyMember *member;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (nonatomic) long long setupType;

/* instance methods */
- (id)initWithPKFamilyMember:(id)member options:(id)options;
- (id)initWithPKFamilyMember:(id)member transaction:(id)transaction;
- (id)initWithPKFamilyMember:(id)member setupType:(long long)type;
- (id)description;
@end

#endif /* PKPeerPaymentAssociatedAccountPresentationContext_h */