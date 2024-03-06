//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassDetailBackPassActionFieldsSectionProvider_h
#define NPKPassDetailBackPassActionFieldsSectionProvider_h
@import Foundation;

#include "NPKPassDetailPassFieldsSectionProvider.h"
#include "NPKListCollectionViewController.h"

@class NSArray;

@interface NPKPassDetailBackPassActionFieldsSectionProvider : NPKPassDetailPassFieldsSectionProvider

@property (weak, nonatomic) NPKListCollectionViewController *listViewController;
@property (retain, nonatomic) NSArray *sections;

/* class methods */
+ (id)_actionFieldsForPassFieldBuckets:(id)buckets;
+ (id)_itemForPassField:(id)field;
+ (id)_valueForField:(id)field;
+ (id)_labelForField:(id)field;
+ (id /* block */)_actionForField:(id)field;
+ (void)_redirectWithPhoneNumber:(id)number withLabel:(id)label;

/* instance methods */
- (id)titleForSectionWithIdentifier:(id)identifier;
- (id)initWithConfiguration:(id)configuration;
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (void)_createSections;
@end

#endif /* NPKPassDetailBackPassActionFieldsSectionProvider_h */