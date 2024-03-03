//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUAsrTokenInformation_h
#define SIRINLUAsrTokenInformation_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface SIRINLUAsrTokenInformation : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *postITNText;
@property (retain, nonatomic) NSString *phoneSequence;
@property (retain, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) BOOL addSpaceAfter;
@property (nonatomic) BOOL removeSpaceAfter;
@property (nonatomic) BOOL removeSpaceBefore;
@property (nonatomic) double confidenceScore;
@property (nonatomic) unsigned int beginIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) int endMilliSeconds;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPostITNText:(id)itntext phoneSequence:(id)sequence ipaPhoneSequence:(id)sequence addSpaceAfter:(BOOL)after removeSpaceAfter:(BOOL)after removeSpaceBefore:(BOOL)before confidenceScore:(double)score beginIndex:(unsigned int)index endIndex:(unsigned int)index startMilliSeconds:(int)seconds endMilliSeconds:(int)seconds;
- (id)initWithPostITNText:(id)itntext phoneSequence:(id)sequence ipaPhoneSequence:(id)sequence addSpaceAfter:(BOOL)after removeSpaceAfter:(BOOL)after removeSpaceBefore:(BOOL)before confidenceScore:(double)score beginIndex:(unsigned int)index endIndex:(unsigned int)index;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SIRINLUAsrTokenInformation_h */