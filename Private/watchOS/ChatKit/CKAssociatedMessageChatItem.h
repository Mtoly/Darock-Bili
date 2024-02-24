//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKAssociatedMessageChatItem_h
#define CKAssociatedMessageChatItem_h
@import Foundation;

#include "CKChatItem.h"

@class NSDate, NSString, UIColor, UIImage;

@interface CKAssociatedMessageChatItem : CKChatItem

@property (copy, nonatomic) NSString *timestampString;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *associatedChatItemGUID;
@property (readonly, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; } geometryDescriptor;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) UIImage *attributionImage;
@property (readonly, nonatomic) UIColor *attributionImageTintColor;
@property (readonly, nonatomic) unsigned long long stickerPositionVersion;

/* class methods */
+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForImageViewWithGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })descriptor shouldScale:(BOOL)scale parentSize:(struct CGSize { double x0; double x1; })size;
+ (double)verticalOriginForAssociatedMessageItemSize:(struct CGSize { double x0; double x1; })size parentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })descriptor;
+ (double)horizontalOriginForAssociatedMessageItemSize:(struct CGSize { double x0; double x1; })size parentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })descriptor;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAssociatedMessageItemSize:(struct CGSize { double x0; double x1; })size parentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })descriptor;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedParentFrameForPositioning:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioning forItemSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustContentAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect forChatItemSize:(struct CGSize { double x0; double x1; })size transcriptOrientation:(char)orientation;
+ (void)applyTransformToView:(id)view viewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame parentSize:(struct CGSize { double x0; double x1; })size forGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })descriptor;
+ (struct CGPoint { double x0; double x1; })locationForStickerReactionWithParentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame reactionIndex:(long long)index parentIsFromMe:(BOOL)me insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
+ (double)rotationForGUIDHash:(long long)guidhash;
+ (double)scaleForGUIDHash:(long long)guidhash;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRelativeToParentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (double)verticalOriginRelativeToParentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (double)horizonalOriginRelativeToParentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForImageViewWithParentSize:(struct CGSize { double x0; double x1; })size shouldScale:(BOOL)scale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedParentFrameForPositioning:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioning;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustContentAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect forChatItemSize:(struct CGSize { double x0; double x1; })size;
- (id)layoutItemSpacingWithEnvironment:(id)environment datasourceItemIndex:(long long)index allDatasourceItems:(id)items supplementryItems:(id)items;
- (char)transcriptOrientation;
- (id)IMAssociatedMessageChatItem;
- (id)loadTranscriptDrawerText;
- (id)sender;
- (id)loadTimestampString;
- (BOOL)wantsDrawerLayout;
@end

#endif /* CKAssociatedMessageChatItem_h */