//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 107.3.3.0.0
//
#ifndef _TtP10HomeEnergy21HomeEnergyXPCProtocol__Protocol_h
#define _TtP10HomeEnergy21HomeEnergyXPCProtocol__Protocol_h
@import Foundation;

@protocol HomeEnergy.HomeEnergyXPCProtocol 
/* instance methods */
- (void)dumpAllDataWithCompletionHandler:(id /* block */)handler;
- (void)useMockDataWithFilePath:(id)path disableMock:(BOOL)mock validityDate:(id)date completionHandler:(id /* block */)handler;
- (void)testNotificationsForGridID:(id)id notificationContext:(id)context completionHandler:(id /* block */)handler;
- (void)testDelegateForGridIds:(id)ids completionHandler:(id /* block */)handler;
- (void)testSetMockURLSessionWithCompletionHandler:(id /* block */)handler;
- (void)isNextCleanEnergyWindowNotificationEnabledForGridID:(id)id homeID:(id)id completionHandler:(id /* block */)handler;
- (void)enableNextCleanEnergyWindowNotificationsForGridID:(id)id notificationContext:(id)context completionHandler:(id /* block */)handler;
- (void)disableNextCleanEnergyWindowNotificationsForGridID:(id)id homeID:(id)id completionHandler:(id /* block */)handler;
- (void)disableNextCleanEnergyWindowNotificationsForGridID:(id)id completionHandler:(id /* block */)handler;
- (void)disableAllNextCleanEnergyWindowNotificationsWithCompletionHandler:(id /* block */)handler;
- (void)enableEnergyForecastDataCollectionForGridID:(id)id completionHandler:(id /* block */)handler;
- (void)disableEnergyForecastDataCollectionWithCompletionHandler:(id /* block */)handler;
- (void)disableEnergyForecastDataCollectionForGridID:(id)id completionHandler:(id /* block */)handler;
- (void)energyWindowsForGridID:(id)id fromDate:(id)date endDate:(id)date withCaching:(BOOL)caching completionHandler:(id /* block */)handler;
- (void)energyWindowsFor:(id)for withCaching:(BOOL)caching completionHandler:(id /* block */)handler;
- (void)gridIDLookupWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })coordinate completionHandler:(id /* block */)handler;
@end

#endif /* _TtP10HomeEnergy21HomeEnergyXPCProtocol__Protocol_h */