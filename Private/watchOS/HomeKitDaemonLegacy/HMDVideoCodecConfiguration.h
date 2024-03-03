//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDVideoCodecConfiguration_h
#define HMDVideoCodecConfiguration_h
@import Foundation;

#include "HAPTLVBase.h"
#include "HAPTLVCreateParse-Protocol.h"
#include "HMDVideoCodec.h"
#include "HMDVideoCodecParameters.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData;

@interface HMDVideoCodecConfiguration : HAPTLVBase<HAPTLVCreateParse, NSSecureCoding>

@property (readonly, copy, nonatomic) HMDVideoCodec *videoCodec;
@property (readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters;
@property (readonly, copy, nonatomic) NSArray *videoAttributes;
@property (readonly, copy) NSData *tlvData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCodec:(id)codec codecParameters:(id)parameters attributes:(id)attributes;
- (BOOL)_parseFromTLVData;
- (void)description:(id)description indent:(id)indent;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDVideoCodecConfiguration_h */