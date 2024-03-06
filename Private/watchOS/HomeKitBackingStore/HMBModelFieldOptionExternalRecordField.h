//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBModelFieldOptionExternalRecordField_h
#define HMBModelFieldOptionExternalRecordField_h
@import Foundation;

#include "HMBModelFieldOption.h"

@class NSString;

@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption

@property (readonly, nonatomic) NSString *fieldName;
@property (readonly, nonatomic) BOOL encrypted;

/* instance methods */
- (id)initWithExternalRecordField:(id)field encrypted:(BOOL)encrypted;
- (void)applyTo:(id)to;
@end

#endif /* HMBModelFieldOptionExternalRecordField_h */