//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKSandboxExtension_h
#define PKSandboxExtension_h
@import Foundation;

@class NSString;

@interface PKSandboxExtension : NSObject

@property (readonly, nonatomic) NSString *token;
@property long long handle;

/* instance methods */
- (id)initWithExtension:(id)extension;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (void)consume;
- (void)expel;
@end

#endif /* PKSandboxExtension_h */