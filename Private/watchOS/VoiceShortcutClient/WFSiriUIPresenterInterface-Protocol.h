//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSiriUIPresenterInterface_Protocol_h
#define WFSiriUIPresenterInterface_Protocol_h
@import Foundation;

@protocol WFSiriUIPresenterInterface <NSObject>
/* instance methods */
- (void)willBeginExecutingShortcutWithActionCount:(id)count;
- (void)willBeginExecutingShortcutStep:(id)step;
- (void)performSiriRequest:(id)request completionHandler:(id /* block */)handler;
@end

#endif /* WFSiriUIPresenterInterface_Protocol_h */