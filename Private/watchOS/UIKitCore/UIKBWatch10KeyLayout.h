//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBWatch10KeyLayout_h
#define UIKBWatch10KeyLayout_h
@import Foundation;

@class NSArray, NSMutableArray;

@interface UIKBWatch10KeyLayout : NSObject {
  /* instance variables */
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
  NSArray *_leftControlKeyFrames;
  NSArray *_rightControlKeyFrames;
  NSMutableArray *_gridKeyFrames;
}

@property (nonatomic) long long leftControlKeys;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } leftControlKeysInsets;
@property (nonatomic) long long gridRows;
@property (nonatomic) long long gridColumns;
@property (nonatomic) long long rightControlKeys;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } rightControlKeysInsets;
@property (nonatomic) double controlKeyWidthRatio;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLeftControlKeyAt:(long long)at;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRightControlKeyAt:(long long)at;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForGridKeyAt:(long long)at inRow:(long long)row;
- (void)layout;
- (id)layoutControlKeys:(long long)keys in:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })in;
@end

#endif /* UIKBWatch10KeyLayout_h */