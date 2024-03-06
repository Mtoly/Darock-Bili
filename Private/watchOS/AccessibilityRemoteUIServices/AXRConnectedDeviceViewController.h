//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXRConnectedDeviceViewController_h
#define AXRConnectedDeviceViewController_h
@import Foundation;

#include "UIViewController.h"
#include "AXRActionsCollectionView.h"
#include "AXRDeviceActionsViewControllerDelegate-Protocol.h"
#include "AXRVoiceOverTouchPadViewDelegate-Protocol.h"
#include "AXRemoteDeviceConnectionDelegate-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class AXEventProcessor, AXRemoteDevice, NSArray, NSString, UICollectionViewFlowLayout;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface AXRConnectedDeviceViewController : UIViewController<AXRVoiceOverTouchPadViewDelegate, AXRDeviceActionsViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, AXRemoteDeviceConnectionDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_eventSenderQueue;
}

@property (retain, nonatomic) AXRemoteDevice *activeDevice;
@property (retain, nonatomic) NSObject<BSInvalidatable> *greyRegistrationAssertion;
@property (retain, nonatomic) AXEventProcessor *eventProcessor;
@property (retain, nonatomic) AXRActionsCollectionView *actionsCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout;
@property (readonly, nonatomic) NSArray *remoteActionsToShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRemoteDevice:(id)device;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (BOOL)_canShowWhileLocked;
- (void)_moreButtonPressed;
- (void)_dismissCurrentPresentedViewController;
- (void)_performDeviceRemoteAction:(id)action;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)remoteDeviceDidUnexpectedlyDisconnect:(id)disconnect;
- (void)actionsViewController:(id)controller selectedAction:(id)action;
- (void)voiceOverTouchPadView:(id)view didReceiveCommand:(id)command;
@end

#endif /* AXRConnectedDeviceViewController_h */