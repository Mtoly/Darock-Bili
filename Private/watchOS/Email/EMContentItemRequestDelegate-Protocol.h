//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMContentItemRequestDelegate_Protocol_h
#define EMContentItemRequestDelegate_Protocol_h
@import Foundation;

@protocol EMContentItemRequestDelegate <NSObject>
/* instance methods */
- (void)contentObjectID:(id)id generateHTMLSnippetsForRelatedContentItems:(id)items completionHandler:(id /* block */)handler;
- (void)contentObjectID:(id)id generateHTMLSnippetsForMailDropContentItems:(id)items completionHandler:(id /* block */)handler;
- (void)contentObjectID:(id)id placeholderHTMLForEmptyContentWithCompletionHandler:(id /* block */)handler;
@end

#endif /* EMContentItemRequestDelegate_Protocol_h */