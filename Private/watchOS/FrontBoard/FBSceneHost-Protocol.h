//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSceneHost_Protocol_h
#define FBSceneHost_Protocol_h
@import Foundation;

@protocol FBSceneHost <NSObject>

@property (readonly, copy, nonatomic) FBSSceneIdentityToken *identityToken;
@property (readonly, copy, nonatomic) FBSSceneDefinition *definition;
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification;

/* instance methods */
- (void)client:(id)client didUpdateClientSettings:(id)settings withDiff:(id)diff transitionContext:(id)context;
- (void)client:(id)client didReceiveActions:(id)actions forExtension:(Class)extension;
@end

#endif /* FBSceneHost_Protocol_h */