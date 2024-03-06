//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFParallaxLayer_h
#define PFParallaxLayer_h
@import Foundation;

@class NSString;

@interface PFParallaxLayer : NSObject

@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) double zPosition;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL isBackground;
@property (readonly, nonatomic) BOOL isBackfill;
@property (readonly, nonatomic) BOOL isInactive;
@property (readonly, nonatomic) BOOL isDebug;
@property (readonly, nonatomic) BOOL isSettlingEffect;

/* instance methods */
- (id)makeUniqueFileNameWithFileNames:(id)names orientation:(long long)orientation;
- (BOOL)saveToURL:(id)url error:(id *)error;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame zPosition:(double)position identifier:(id)identifier;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isForegroundLandscape;
- (BOOL)isBackgroundLandscape;
- (id)description;
- (id)debugDescription;
@end

#endif /* PFParallaxLayer_h */