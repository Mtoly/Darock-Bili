//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSWidgetController_h
#define TPSWidgetController_h
@import Foundation;

#include "TPSDocument.h"

@class NSMutableDictionary;
@protocol TPSWidgetControllerDelegate;

@interface TPSWidgetController : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } documentLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } urlSessionLock;
@property (retain, nonatomic) NSMutableDictionary *assetURLSessionMap;
@property (weak, nonatomic) NSObject<TPSWidgetControllerDelegate> *delegate;
@property (copy, @dynamic, nonatomic) TPSDocument *preferredDocument;
@property (nonatomic) unsigned long long widgetAssertionState;

/* instance methods */
- (void)addWidgetAssertion;
- (void)addWidgetAssertionIfNeeded;
- (void)removeWidgetAssertionIfNeeded;
- (void)updateWidgetAssertionCreatedToValue:(BOOL)value;
- (void)launchedFromWidget;
- (BOOL)isEligibleForWidgetAssertion;
- (id)widgetDescriptor;
- (void)dealloc;
- (id)init;
- (void)updateSessionMapValue:(id)value forKey:(id)key;
- (void)attemptWidgetUpdateWith:(id)with;
- (void)updateWidgetDocumentWithDocumentsMap:(id)map documentsDeliveryInfoMap:(id)map deliveryInfoMap:(id)map preferHardwareWelcome:(BOOL)welcome completionHandler:(id /* block */)handler;
- (void)updatePreferredWidget:(id)widget completionHandler:(id /* block */)handler;
- (void)widgetAssetsForDocument:(id)document preferCacheIfAvailable:(BOOL)available userInterfaceStyle:(long long)style completionHandler:(id /* block */)handler;
- (void)fetchWidgetAssetsForDocument:(id)document preferCacheIfAvailable:(BOOL)available completionHandler:(id /* block */)handler;
- (void)fetchAssetForAssets:(id)assets language:(id)language userInterfaceStyle:(long long)style assetFileInfoManager:(id)manager completionHandler:(id /* block */)handler;
- (id)cacheFileURLForAssets:(id)assets language:(id)language userInterfaceStyle:(long long)style assetFileInfoManager:(id)manager;
- (double)timeSinceOSInstallDate;
@end

#endif /* TPSWidgetController_h */