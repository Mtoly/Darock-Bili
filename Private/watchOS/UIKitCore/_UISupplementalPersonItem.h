//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISupplementalPersonItem_h
#define _UISupplementalPersonItem_h
@import Foundation;

#include "_UISupplementalItem.h"

@class NSString;

@interface _UISupplementalPersonItem : _UISupplementalItem

@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *phoneticOrganizationName;
@property (copy, nonatomic) NSString *nickname;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithTISupplementalPersonItem:(id)item icon:(id)icon;
- (id)initWithContact:(id)contact;
- (id)initWithContact:(id)contact icon:(id)icon;
- (id)initWithPersonNameComponents:(id)components;
- (id)initWithPersonNameComponents:(id)components icon:(id)icon;
- (unsigned long long)_identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* _UISupplementalPersonItem_h */