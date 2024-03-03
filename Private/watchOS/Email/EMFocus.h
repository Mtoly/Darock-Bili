//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMFocus_h
#define EMFocus_h
@import Foundation;

@class NSSet;

@interface EMFocus : NSObject

@property (readonly, copy, nonatomic) NSSet *focusedAccountIdentifiers;

/* instance methods */
- (id)initWithFocusedAccountIdentifiers:(id)identifiers;
- (BOOL)isFocusedIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
@end

#endif /* EMFocus_h */