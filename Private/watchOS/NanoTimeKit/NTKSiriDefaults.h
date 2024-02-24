//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKSiriDefaults_h
#define NTKSiriDefaults_h
@import Foundation;

#include "NTKFaceCollection.h"
#include "NTKFaceCollectionObserver-Protocol.h"

@class NSSet, NSString;

@interface NTKSiriDefaults : NSObject<NTKFaceCollectionObserver> {
  /* instance variables */
  NTKFaceCollection *_faceCollection;
}

@property (nonatomic) BOOL watchHasMigratedAvailableDataSources;
@property (retain, nonatomic) NSSet *phoneThirdPartyDataSources;
@property (retain, nonatomic) NSSet *watchThirdPartyDataSources;
@property (readonly, nonatomic) BOOL hasMigratedDisabledDataSources;
@property (retain, nonatomic) NSSet *disabledDataSources;
@property (readonly, nonatomic) BOOL isUpNextFaceCurrentlyActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)migrateIfNecessary;
- (BOOL)hasMigratedDataSources;
- (void)faceCollectionDidLoad:(id)load;
- (void)_activeDeviceDidChange:(id)change;
- (id)_domainAccesor;
- (void)_synchronizeDefaultsForKeys:(id)keys;
- (void)_disabledDataSourcesDidChange;
- (void)_thirdPartyDataSourcesDidChange;
- (void)_fetchNewFaceCollection;
@end

#endif /* NTKSiriDefaults_h */