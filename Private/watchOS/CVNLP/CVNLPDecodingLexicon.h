//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 105.150.0.0.0
//
#ifndef CVNLPDecodingLexicon_h
#define CVNLPDecodingLexicon_h
@import Foundation;

@interface CVNLPDecodingLexicon : NSObject

@property (readonly, nonatomic) struct _LXCursor * _rootCursor;
@property (readonly, nonatomic) struct _LXLexicon * lexicon;
@property (readonly, nonatomic) unsigned long long priority;

/* class methods */
+ (struct _LXLexicon *)_createLexiconForLocale:(id)locale;
+ (id)decodingLexiconForLocale:(id)locale;
+ (id)decodingLexiconForLocale:(id)locale priority:(unsigned long long)priority;

/* instance methods */
- (id)initWithLexicon:(struct _LXLexicon *)lexicon priority:(unsigned long long)priority;
- (id)initWithLexicon:(struct _LXLexicon *)lexicon;
- (void)dealloc;
@end

#endif /* CVNLPDecodingLexicon_h */