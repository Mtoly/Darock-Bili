//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFContactContentItemChangeTransaction_h
#define WFContactContentItemChangeTransaction_h
@import Foundation;

#include "WFContentItemChangeTransaction.h"

@class CNMutableContact, NSArray;

@interface WFContactContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) CNMutableContact *mutableContact;
@property (retain, nonatomic) NSArray *groupChangeRequest;

/* instance methods */
- (id)initWithContentItem:(id)item;
- (void)saveWithCompletionHandler:(id /* block */)handler isNew:(BOOL)new;
- (void)updatePhoneNumbers:(id)numbers;
- (void)updateEmailAddresses:(id)addresses;
- (void)updateStreetAddresses:(id)addresses;
- (void)updateURLs:(id)urls;
@end

#endif /* WFContactContentItemChangeTransaction_h */