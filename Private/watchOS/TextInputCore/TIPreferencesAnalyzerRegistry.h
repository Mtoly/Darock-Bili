//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIPreferencesAnalyzerRegistry_h
#define TIPreferencesAnalyzerRegistry_h
@import Foundation;

@class NSMutableArray;

@interface TIPreferencesAnalyzerRegistry : NSObject

@property (readonly, nonatomic) NSMutableArray *registry;
@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (void)enumerateRegisteredPreferencesUsingBlock:(id /* block */)block;
- (void)_registerPreference:(id)preference domain:(id)domain defaultValue:(id)value reportingMode:(int)mode;
@end

#endif /* TIPreferencesAnalyzerRegistry_h */