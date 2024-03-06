//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICAnimatedEmoji_h
#define PUICAnimatedEmoji_h
@import Foundation;

#include "PUICAnimatedEmojiChooser.h"

@class NSString, UIImage;

@interface PUICAnimatedEmoji : NSObject {
  /* instance variables */
  struct _AnimatedEmojiSpecification { long long animatedEmojiType; char *name; BOOL loops; char *posterImageName; long long panningChooserType; } _specification;
  long long _type;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long animatedEmojiType;
@property (readonly, nonatomic) UIImage *animatedImage;
@property (readonly, nonatomic) PUICAnimatedEmojiChooser *chooser;

/* class methods */
+ (id)sharedInstanceWithAnimatedEmojiType:(long long)type;
+ (long long)defaultAnimatedEmojiTypeForFaces;
+ (long long)defaultAnimatedEmojiTypeForHands;
+ (long long)defaultAnimatedEmojiTypeForHearts;
+ (id)emojiAssetsBundle;

/* instance methods */
- (long long)frames;
- (long long)variants;
- (void)clearCaches;
- (id)_initWithAnimatedEmojiType:(long long)type;
- (struct _AnimatedEmojiSpecification { long long x0; char * x1; BOOL x2; char * x3; long long x4; })_specificationForAnimatedEmojiType:(long long)type;
@end

#endif /* PUICAnimatedEmoji_h */