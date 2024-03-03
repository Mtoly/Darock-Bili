//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKPigmentPreferenceManager_h
#define NTKPigmentPreferenceManager_h
@import Foundation;

#include "NTKPigmentPreferenceManagerDelegate-Protocol.h"

@class NPSDomainAccessor, NSSet, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface NTKPigmentPreferenceManager : NSObject {
  /* instance variables */
  struct _opaque_pthread_rwlock_t { long long __sig; char x[192] __opaque; } _rwlock;
}

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSUserDefaults *userDefault;
@property (retain, nonatomic) NPSDomainAccessor *npsDomainAccessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (copy, nonatomic) NSSet *selectedPigments;
@property (copy, nonatomic) NSSet *autoSelectedPigments;
@property (weak, nonatomic) NSObject<NTKPigmentPreferenceManagerDelegate> *delegate;

/* class methods */
+ (BOOL)_shouldSaveAutoSelectedPigments:(id)pigments forCollectionName:(id)name userDefault:(id)default;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)initWithDomain:(id)domain;
- (BOOL)isOptionVisible:(id)visible;
- (void)setOption:(id)option visible:(BOOL)visible;
- (void)setAutoSelectedPigments:(id)pigments forCollectionName:(id)name;
- (void)_threadunsafe_syncAllContent;
- (void)resetContent;
- (void)handlePairedDeviceChanged;
- (BOOL)_threadunsafe_isOptionVisible:(id)visible;
- (void)_threadunsafe_setOptionName:(id)name visible:(BOOL)visible;
- (void)_threadunsafe_setOptionName:(id)name visible:(BOOL)visible manual:(BOOL)manual;
- (void)_threadunsafe_removeAutoSelectionWithOptionName:(id)name;
- (void)_threadunsafe_appendAutoSelectPigments:(id)pigments;
- (void)_threadunsafe_removeAllAutoSelectPigments;
- (void)_threadunsafe_syncAutoSelectedPigments:(id)pigments;
- (void)_threadunsafe_syncVisibleOptionsByCollection:(id)collection;
- (void)_loadVisibleOptions;
- (void)_loadAutoSelectedPigments;
@end

#endif /* NTKPigmentPreferenceManager_h */