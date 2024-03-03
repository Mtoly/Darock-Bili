//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCloudStoreCoding_Protocol_h
#define PKCloudStoreCoding_Protocol_h
@import Foundation;

@protocol PKCloudStoreCoding <NSSecureCoding>
/* class methods */
+ (id)recordNamePrefix;
/* instance methods */
- (id)initWithCloudStoreCoder:(id)coder;
- (void)encodeWithCloudStoreCoder:(id)coder codingType:(unsigned long long)type;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)type;
- (unsigned long long)itemType;
- (id)primaryIdentifier;
- (void)applyPropertiesFromCloudStoreRecord:(id)record;
@optional
/* instance methods */
- (id)systemFieldsDataForCloudStoreWithIdentifier:(id)identifier;
- (BOOL)wasAchivedInCloudStoreWithIdentifier:(id)identifier;
- (void)setSystemFieldsMetata:(id)metata forCloudStoreWithIdentifier:(id)identifier;
@end

#endif /* PKCloudStoreCoding_Protocol_h */