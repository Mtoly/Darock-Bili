//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUPlaybackControllerErrorHandler_h
#define NMUPlaybackControllerErrorHandler_h
@import Foundation;

#include "MPCPlaybackEngineDelegate-Protocol.h"

@class NSString;

@interface NMUPlaybackControllerErrorHandler : NSObject<MPCPlaybackEngineDelegate> {
  /* instance variables */
  id /* block */ _activationFailureResolutionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPlaybackController:(id)controller;
- (void)engine:(id)engine didFailToActivateWithError:(id)error resolution:(id /* block */)resolution;
- (void)engine:(id)engine didFailToPlayFirstItem:(id)item withError:(id)error;
- (void)engine:(id)engine didFailToPlayItem:(id)item withError:(id)error;
- (void)_didFailToPlayItem:(id)item error:(id)error;
- (void)engineDidPauseForLeaseEnd:(id)end;
- (void)_presentRoutePickerWithCompletion:(id /* block */)completion;
- (id)_topmostPresentedViewController;
- (void)_presentFailureWithTitle:(id)title message:(id)message;
- (long long)_playbackErrorFromError:(id)error;
- (long long)_playbackErrorTypeFromTopLevelError:(id)error;
@end

#endif /* NMUPlaybackControllerErrorHandler_h */