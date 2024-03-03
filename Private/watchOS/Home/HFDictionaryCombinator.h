//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDictionaryCombinator_h
#define HFDictionaryCombinator_h
@import Foundation;

@class NSSet;

@interface HFDictionaryCombinator : NSObject

@property (copy, nonatomic) NSSet *keysToReconcile;
@property (copy, nonatomic) NSSet *keysToSkip;

/* class methods */
+ (BOOL)_isKindOfContainerClass:(id)class;

/* instance methods */
- (id)combineResultDictionary:(id)dictionary withResultDictionary:(id)dictionary reconcilationHandler:(id /* block */)handler;
- (id)_mergeVal1:(id)val1 withVal2:(id)val2;
- (void)_reconcileKey:(id)key fromDictionary:(id)dictionary andDictionary:(id)dictionary intoResultDictionary:(id)dictionary withReconcilationHandler:(id /* block */)handler;
@end

#endif /* HFDictionaryCombinator_h */