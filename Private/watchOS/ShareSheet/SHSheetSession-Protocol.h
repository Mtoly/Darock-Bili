//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetSession_Protocol_h
#define SHSheetSession_Protocol_h
@import Foundation;

#include "SFCollaborationItemChangeObserver-Protocol.h"
#include "SFCollaborationItemsProviderDelegate-Protocol.h"
#include "SFUILoadedMetadataCollectionDelegate-Protocol.h"
#include "SHSheetActivitiesManager.h"
#include "SHSheetActivitiesManagerDelegate-Protocol.h"
#include "SHSheetActivityItemsManager.h"
#include "SHSheetActivityItemsManagerCollaborationDelegate-Protocol.h"
#include "SHSheetActivityItemsManagerDelegate-Protocol.h"
#include "SHSheetScene.h"
#include "SHSheetSession-Protocol.h"
#include "SHSheetSessionDelegate-Protocol.h"
#include "UIActivity.h"
#include "UIActivityViewController.h"
#include "UISDShareSheetSessionConfiguration.h"

@class LPLinkMetadata, NSArray, NSString, SFCollaborationItemsProvider, SFUILoadedMetadataCollection, UIViewController;
@protocol SFCollaborationItem, SFPeopleSuggestion, UIActivityViewControllerObjectManipulationDelegate;

@protocol SHSheetSession <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) UIActivityViewController *activityViewController;
@property (readonly, nonatomic) SFCollaborationItemsProvider *collaborationItemsProvider;
@property (readonly, nonatomic) SHSheetActivitiesManager *activitiesManager;
@property (readonly, nonatomic) SHSheetActivityItemsManager *activityItemsManager;
@property (readonly, nonatomic) UIActivity *performingActivity;
@property (readonly, nonatomic) UISDShareSheetSessionConfiguration *configuration;
@property (readonly, nonatomic) SFUILoadedMetadataCollection *metadataCollection;
@property (readonly, nonatomic) long long sharingStyle;
@property (readonly, nonatomic) BOOL isExpanded;
@property (readonly, copy, nonatomic) NSArray *includedActivityTypes;
@property (readonly, copy, nonatomic) NSArray *excludedActivityTypes;
@property (readonly, copy, nonatomic) NSArray *activityTypeOrder;
@property (readonly, copy, nonatomic) NSArray *heroActionActivityTypes;
@property (readonly, nonatomic) long long excludedActivityCategories;
@property (readonly, nonatomic) BOOL allowsEmbedding;
@property (readonly, nonatomic) BOOL shouldSuggestFamilyMembers;
@property (readonly, nonatomic) BOOL showSharePlayProminently;
@property (readonly, nonatomic) BOOL canPerformSharePlay;
@property (readonly, nonatomic) BOOL showKeyboardAutomatically;
@property (readonly, nonatomic) BOOL whitelistActionActivitiesOnly;
@property (readonly, nonatomic) BOOL configureForCloudSharing;
@property (readonly, nonatomic) BOOL configureForPhotosEdit;
@property (readonly, nonatomic) BOOL hideHeaderView;
@property (readonly, nonatomic) BOOL hideSuggestions;
@property (readonly, nonatomic) NSString *topContentSectionText;
@property (readonly, nonatomic) BOOL showOptions;
@property (readonly, nonatomic) BOOL showHeaderSpecialization;
@property (readonly, nonatomic) BOOL isAirdropOnly;
@property (readonly, nonatomic) BOOL instantShareSheet;
@property (readonly, nonatomic) BOOL showHeroActionsHorizontally;
@property (readonly, nonatomic) BOOL useRemoteUIService;
@property (readonly, nonatomic) BOOL showCustomScene;
@property (readonly, nonatomic) SHSheetScene *remoteScene;
@property (readonly, nonatomic) unsigned long long xrRenderingMode;
@property (retain, nonatomic) NSObject<SFPeopleSuggestion> *currentPeopleSuggestion;
@property (readonly, nonatomic) NSObject<SFCollaborationItem> *collaborationItem;
@property (readonly, nonatomic) BOOL supportsCollaboration;
@property (readonly, nonatomic) BOOL supportsSendCopy;
@property (readonly, nonatomic) BOOL isCollaborative;
@property (readonly, nonatomic) long long collaborationMode;
@property (readonly, copy, nonatomic) NSArray *menuElements;
@property (readonly, copy, nonatomic) NSString *customOptionsTitle;
@property (readonly, nonatomic) UIViewController *customOptionsViewController;
@property (readonly, copy, nonatomic) NSArray *selectedAssetIdentifiers;
@property (readonly, nonatomic) BOOL isContentManaged;
@property (readonly, copy, nonatomic) NSArray *activityTypesToCreateInShareService;
@property (readonly, nonatomic) LPLinkMetadata *photosHeaderMetadata;
@property (readonly, nonatomic) BOOL shouldSkipPeopleSuggestions;
@property (readonly, copy, nonatomic) NSArray *peopleSuggestionBundleIds;

/* instance methods */
- (id)createClientContext;
@end

#endif /* SHSheetSession_Protocol_h */