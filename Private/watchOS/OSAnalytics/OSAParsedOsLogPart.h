//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 614.60.3.0.0
//
#ifndef OSAParsedOsLogPart_h
#define OSAParsedOsLogPart_h
@import Foundation;

@class NSString;

@interface OSAParsedOsLogPart : NSObject

@property (readonly) BOOL isImmutable;
@property (readonly, copy) NSString *stringValue;
@property (readonly) BOOL isArgument;

/* instance methods */
- (id)initWithLiteral:(id)literal isImmutable:(BOOL)immutable;
- (id)initWithStringArgument:(id)argument isImmutable:(BOOL)immutable;
- (id)initWithIntegerArgumentStringValue:(id)value;
- (id)description;
@end

#endif /* OSAParsedOsLogPart_h */