//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIFooterElement_h
#define RUIFooterElement_h
@import Foundation;

#include "RUIElement.h"
#include "RemoteUISectionFooter.h"

@interface RUIFooterElement : RUIElement {
  /* instance variables */
  RemoteUISectionFooter *_footerView;
}

/* instance methods */
- (long long)labelAlignment;
- (id)linkURL;
- (void)configureView:(id)view;
- (void)setEnabled:(BOOL)enabled;
@end

#endif /* RUIFooterElement_h */