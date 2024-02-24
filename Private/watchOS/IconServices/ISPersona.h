//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISPersona_h
#define ISPersona_h
@import Foundation;

@class LSBundleRecord;

@interface ISPersona : NSObject

@property (readonly, nonatomic) LSBundleRecord *record;
@property (readonly, nonatomic) long long personaType;

/* instance methods */
- (id)initWithRecord:(id)record;
- (BOOL)isEnterprisePersona;
- (id)resourceBadge;
@end

#endif /* ISPersona_h */