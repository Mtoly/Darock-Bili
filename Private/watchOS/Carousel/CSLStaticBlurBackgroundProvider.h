//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStaticBlurBackgroundProvider_h
#define CSLStaticBlurBackgroundProvider_h
@import Foundation;

#include "CUISScreenBlurProviding-Protocol.h"

@class NSString, UIImage;

@interface CSLStaticBlurBackgroundProvider : NSObject<CUISScreenBlurProviding> {
  /* instance variables */
  UIImage *_clockBackgroundImage;
  UIImage *_clockBlurredBackground;
  unsigned long long _lastUpdatedClockTime;
}

@property (readonly, nonatomic) UIImage *blurredBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (unsigned long long)_currentMainUIStateType;
- (id)generateBlurImage;
- (void)_handleSignificantClockChange:(id)change;
- (void)invalidateCachedClockImage;
- (void)setClockBackgroundImage:(id)image;
- (void)setClockBlurredBackground:(id)background;
- (void)_updateBackgroundIfNeededForClock;
- (BOOL)_timeSinceLastUpdateHasExceededHysterisis;
- (id)capturedBackgroundUsingBackgroundProvider;
@end

#endif /* CSLStaticBlurBackgroundProvider_h */