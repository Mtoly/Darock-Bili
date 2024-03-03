//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SLODLDInputContext_h
#define SLODLDInputContext_h
@import Foundation;

@class NSArray, NSData, NSNumber, NSString;

@interface SLODLDInputContext : NSObject

@property (readonly, nonatomic) NSString *inputUtt;
@property (readonly, nonatomic) NSNumber *inputOrigin;
@property (readonly, nonatomic) NSNumber *inputAnchor;
@property (readonly, nonatomic) NSData *prevEmb;
@property (readonly, nonatomic) NSArray *prevTokens;

/* instance methods */
- (id)initWithInputOrigin:(id)origin inputAnchor:(id)anchor prevTokens:(id)tokens prevEmb:(id)emb;
- (void)updateWithInputUtt:(id)utt;
- (id)description;
@end

#endif /* SLODLDInputContext_h */