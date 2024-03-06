//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKVerifiableClinicalRecordDetailDataProvider_h
#define HKVerifiableClinicalRecordDetailDataProvider_h
@import Foundation;

@class HKSignedClinicalDataRecord, NSArray, NSMutableDictionary;

@interface HKVerifiableClinicalRecordDetailDataProvider : NSObject

@property (retain, nonatomic) HKSignedClinicalDataRecord *record;
@property (retain, nonatomic) NSArray *medicalRecords;
@property (retain, nonatomic) NSMutableDictionary *displayItems;
@property (retain, nonatomic) NSMutableDictionary *sectionHeaders;
@property (retain, nonatomic) NSMutableDictionary *sectionFooters;
@property (nonatomic) long long sectionIndex;

/* instance methods */
- (id)initWithSignedRecord:(id)record medicalRecords:(id)records;
- (long long)numberOfSections;
- (long long)numberOfRowsForSection:(long long)section;
- (id)headerForSection:(long long)section;
- (id)footerForSection:(long long)section;
- (id)displayItemForSection:(long long)section row:(long long)row;
- (void)createDisplayItems;
- (void)createPersonalInfoItems;
- (id)nameItem;
- (id)birthdayItem;
- (id)genderItem;
- (id)emailAddressesItem;
- (id)phoneNumbersItem;
- (id)addressesItem;
- (id)maritalStatusItem;
- (id)raceItem;
- (id)ethnicityItem;
- (id)birthSexItem;
- (id)identifiersItem;
- (void)createRecordSections;
- (void)createVerificationItems;
- (id)sourceItem;
- (id)statusItem;
- (id)issuedItem;
- (id)expiresItem;
@end

#endif /* HKVerifiableClinicalRecordDetailDataProvider_h */