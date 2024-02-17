//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKEnhancedMerchantsListSectionController_h
#define PKEnhancedMerchantsListSectionController_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"
#include "PKDynamicSectionController-Protocol.h"
#include "PKEnhancedMerchantCellDelegate-Protocol.h"
#include "PKRewardsHubSectionControllerDelegate-Protocol.h"
#include "PKViewControllerPreflightable-Protocol.h"
#include "_PKPendingEnhancedMerchantNearbyLocationSearch.h"

@class CLLocation, CLLocationManager, NSArray, NSString, NSUUID, PKAccountEnhancedMerchantsFetcher, UICollectionViewCellRegistration;

@interface PKEnhancedMerchantsListSectionController : NSObject<PKEnhancedMerchantCellDelegate, CLLocationManagerDelegate, PKDynamicSectionController, PKViewControllerPreflightable> {
  /* instance variables */
  PKAccountEnhancedMerchantsFetcher *_fetcher;
  NSObject<PKRewardsHubSectionControllerDelegate> *_delegate;
  NSUUID *_merchantsUpdateToken;
  CLLocationManager *_locationManager;
  CLLocation *_lastValidLocation;
  _PKPendingEnhancedMerchantNearbyLocationSearch *_pendingMerchantLocationSearch;
}

@property (copy, nonatomic) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;

/* instance methods */
- (id)initWithSectionIdentifiers:(id)identifiers fetcher:(id)fetcher delegate:(id)delegate;
- (void)dealloc;
- (id)merchantForPrivateIdentifier:(id)identifier;
- (void)preflightWithCompletion:(id /* block */)completion;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (id)cellRegistrationForItem:(id)item;
- (id)_merchantListCellRegistration;
- (id)_disclosuresCellRegistration;
- (id)layoutWithLayoutEnvironment:(id)environment sectionIdentifier:(id)identifier;
- (Class)supplementaryRegistrationClassForKind:(id)kind sectionIdentifier:(id)identifier;
- (void)configureSupplementaryRegistration:(id)registration elementKind:(id)kind sectionIdentifier:(id)identifier;
- (BOOL)shouldHighlightItem:(id)item;
- (void)performAction:(long long)action forEnhancedMerchant:(id)merchant sender:(id)sender;
- (void)_reportEventIfNecessaryForButtonTapWithTag:(id)tag merchant:(id)merchant;
- (void)_updateCellBasedOnCurrentSearch:(id)search;
- (void)_requestLocationUpdateIfPossible;
- (void)_stopUpdatingLocation;
- (void)_openMapsForMerchantSearch:(id)search;
- (void)_performNearbyLocationsSearch:(id)search deviceLocation:(id)location;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)_applicationDidEnterBackground:(id)background;
- (id)_genericDisplayableErrorForError:(id)error;
- (void)_presentError:(id)error;
@end

#endif /* PKEnhancedMerchantsListSectionController_h */