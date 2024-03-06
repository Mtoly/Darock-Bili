//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXCoordinatorWithRemovabilityState_Protocol_h
#define IXCoordinatorWithRemovabilityState_Protocol_h
@import Foundation;

@protocol IXCoordinatorWithRemovabilityState <NSObject>
/* instance methods */
- (BOOL)setRemovability:(unsigned long long)removability byClient:(unsigned long long)client error:(id *)error;
- (unsigned long long)removabilityWithError:(id *)error;
@end

#endif /* IXCoordinatorWithRemovabilityState_Protocol_h */