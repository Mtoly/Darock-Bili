//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKLexicalEntity_h
#define RKLexicalEntity_h
@import Foundation;

@class NSString;

@interface RKLexicalEntity : NSObject

@property (retain) NSString *internalWord;
@property (retain) NSString *string;
@property (retain) NSString *tokenType;
@property (retain) NSString *partOfSpeech;
@property (retain) NSString *lemma;
@property (retain) NSString *language;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } tokenRange;
@property (readonly) NSString *word;

/* instance methods */
- (id)description;
@end

#endif /* RKLexicalEntity_h */