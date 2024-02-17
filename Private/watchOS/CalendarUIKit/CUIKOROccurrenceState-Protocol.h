//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKOROccurrenceState_Protocol_h
#define CUIKOROccurrenceState_Protocol_h
@import Foundation;

#include "CUIKMutableDayOccurrenceState-Protocol.h"
#include "CUIKOROccurrenceState-Protocol.h"

@class EKEvent, NSAttributedString, NSString, UIColor, UIFont, UIImage, UITraitCollection;

@protocol CUIKOROccurrenceState <NSObject>

@property (readonly, nonatomic) EKEvent *occurrence;
@property (readonly, nonatomic) long long birthdayCount;
@property (readonly, nonatomic) BOOL isProposedTime;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isDimmed;
@property (readonly, nonatomic) BOOL usesSmallText;
@property (readonly, nonatomic) BOOL isVibrant;
@property (readonly, nonatomic) double travelTime;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backgroundRect;
@property (readonly, nonatomic) double travelTimeHeight;
@property (readonly, nonatomic) double visibleHeight;
@property (readonly, nonatomic) double topYBoundaryForText;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long horizontalSizeClass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;

@end

#endif /* CUIKOROccurrenceState_Protocol_h */