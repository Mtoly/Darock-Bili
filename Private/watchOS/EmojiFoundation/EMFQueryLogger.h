//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFQueryLogger_h
#define EMFQueryLogger_h
@import Foundation;

@interface EMFQueryLogger : NSObject

@property (readonly, nonatomic) struct __EmojiLocaleDataWrapper * localeData;

/* class methods */
+ (id)documentWeightsStringFromQueryResult:(id)result usingLocaleData:(struct __EmojiLocaleDataWrapper *)data;
+ (id)overriddenResultsStringFromQueryResult:(id)result usingLocaleData:(struct __EmojiLocaleDataWrapper *)data;

/* instance methods */
- (id)initWithEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)data;
- (void)dealloc;
- (void)logQueryResult:(id)result;
@end

#endif /* EMFQueryLogger_h */