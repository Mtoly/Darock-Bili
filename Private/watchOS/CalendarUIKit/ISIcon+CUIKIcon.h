//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef ISIcon_CUIKIcon_h
#define ISIcon_CUIKIcon_h
@import Foundation;

#include "ISIcon.h"

@class ISIcon, NSCalendar, NSDateComponents;
@protocol CUIKIconGenerator;

@interface ISIcon (CUIKIcon)
/* instance methods */
- (id)initWithDate:(id)date calendar:(id)calendar format:(long long)format;
- (id)initWithDateComponents:(id)components calendar:(id)calendar format:(long long)format forceNoTextEffects:(BOOL)effects;
@end

#endif /* ISIcon_CUIKIcon_h */