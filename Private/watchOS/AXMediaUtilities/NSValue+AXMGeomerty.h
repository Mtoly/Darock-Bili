//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef NSValue_AXMGeomerty_h
#define NSValue_AXMGeomerty_h
@import Foundation;

@interface NSValue (AXMGeomerty)
/* class methods */
+ (id)axmValueWithCGPoint:(struct CGPoint { double x0; double x1; })cgpoint;
+ (id)axmValueWithCGVector:(struct CGVector { double x0; double x1; })cgvector;
+ (id)axmValueWithCGSize:(struct CGSize { double x0; double x1; })cgsize;
+ (id)axmValueWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cgrect;
+ (id)axmValueWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;

/* instance methods */
- (struct CGPoint { double x0; double x1; })AXMPointValue;
- (struct CGVector { double x0; double x1; })AXMVectorValue;
- (struct CGSize { double x0; double x1; })AXMSizeValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })AXMRectValue;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })AXMAffineTransformValue;
@end

#endif /* NSValue_AXMGeomerty_h */