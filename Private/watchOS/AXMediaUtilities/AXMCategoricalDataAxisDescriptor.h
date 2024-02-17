//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMCategoricalDataAxisDescriptor_h
#define AXMCategoricalDataAxisDescriptor_h
@import Foundation;

#include "AXMChartDictionaryRepresentable-Protocol.h"
#include "AXMDataAxisDescriptor-Protocol.h"

@class NSArray, NSAttributedString, NSString;

@interface AXMCategoricalDataAxisDescriptor : NSObject<AXMChartDictionaryRepresentable, AXMDataAxisDescriptor>

@property (copy, nonatomic) NSArray *categoryOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) BOOL isCategoricalAxis;

/* instance methods */
- (id)initWithTitle:(id)title categoryOrder:(id)order;
- (id)initWithAttributedTitle:(id)title categoryOrder:(id)order;
- (id)initWithDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (double)lowerBound;
- (double)upperBound;
- (double)normalizedAxisValueForValue:(id)value;
- (id)dictionaryRepresentation;
@end

#endif /* AXMCategoricalDataAxisDescriptor_h */