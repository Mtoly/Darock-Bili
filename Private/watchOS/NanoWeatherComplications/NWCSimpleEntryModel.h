//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWCSimpleEntryModel_h
#define NWCSimpleEntryModel_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface NWCSimpleEntryModel : NSObject<NSSecureCoding>

@property (readonly) NSArray *hourlyEntryModels;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEntries:(id)entries;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* NWCSimpleEntryModel_h */