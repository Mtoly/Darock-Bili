//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WebDocumentViewState_Protocol_h
#define _WebDocumentViewState_Protocol_h
@import Foundation;

@protocol _WebDocumentViewState <NSObject>
/* instance methods */
- (struct CGPoint { double x0; double x1; })scrollPoint;
- (void)setScrollPoint:(struct CGPoint { double x0; double x1; })point;
- (id)viewState;
- (void)setViewState:(id)state;
@end

#endif /* _WebDocumentViewState_Protocol_h */