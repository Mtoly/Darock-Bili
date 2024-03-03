//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 250.60.2.0.0
//
#ifndef MXMSampleFilter_h
#define MXMSampleFilter_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSSet;

@interface MXMSampleFilter : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSSet *tagFilters;
@property (retain, nonatomic) NSMutableDictionary *attributeFilters;
@property (readonly, nonatomic) BOOL finite;
@property (readonly, nonatomic) BOOL isFinite;

/* class methods */
+ (id)filterWithTagFilter:(id)filter;
+ (id)filterWithTagFilters:(id)filters;
+ (id)filterWithAttributeFilter:(id)filter;
+ (id)filterWithAttributeFilters:(id)filters;
+ (id)filterWithAttributeFilter:(id)filter tagFilter:(id)filter;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTagFilter:(id)filter;
- (id)initWithTagFilters:(id)filters;
- (id)initWithAttributeFilter:(id)filter;
- (id)initWithAttributeFilters:(id)filters;
- (id)initWithAttributeFilter:(id)filter tagFilter:(id)filter;
- (id)initWithAttributeFilters:(id)filters tagFilters:(id)filters;
- (void)addAttributeFilters:(id)filters;
- (id)attributeFilterWithName:(id)name;
- (BOOL)matchesSample:(id)sample;
- (BOOL)matchesSampleSet:(id)set;
- (BOOL)matchesSamplesWithAttribute:(id)attribute;
- (BOOL)matchesSamplesWithAttributes:(id)attributes;
- (BOOL)matchesSamplesWithTag:(id)tag;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MXMSampleFilter_h */