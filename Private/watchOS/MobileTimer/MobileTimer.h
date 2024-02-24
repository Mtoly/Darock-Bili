//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MobileTimer_h
#define MobileTimer_h

#import "Alarm.h"
#import "ClockManager.h"
#import "ClocksIntent.h"
#import "ClocksIntentResponse.h"
#import "ClocksSingleIntent.h"
#import "ClocksSingleIntentResponse.h"
#import "DistributedNotificationPoster.h"
#import "MTAgent.h"
#import "MTAgentDiagnosticListener.h"
#import "MTAgentNotification.h"
#import "MTAgentNotificationManager.h"
#import "MTAlarm.h"
#import "MTAlarmCache.h"
#import "MTAlarmDataSource.h"
#import "MTAlarmIntentDonor.h"
#import "MTAlarmIntentHandler.h"
#import "MTAlarmManager.h"
#import "MTAlarmManagerExportedObject.h"
#import "MTAlarmMigrator.h"
#import "MTAlarmOperationResolutionResult.h"
#import "MTAlarmScheduler.h"
#import "MTAlarmServer.h"
#import "MTAlarmSnapshot.h"
#import "MTAlarmStateResolutionResult.h"
#import "MTAlarmStorage.h"
#import "MTAlarmSyncDataModel.h"
#import "MTAnalytics.h"
#import "MTApplicationWorkspaceObserver.h"
#import "MTBaseAlarmWidgetProvider.h"
#import "MTBatteryStateProvider.h"
#import "MTCFUserNotification.h"
#import "MTCFUserNotificationPoster.h"
#import "MTChange.h"
#import "MTChangeSet.h"
#import "MTCity.h"
#import "MTCityResolutionResult.h"
#import "MTCompanionSyncRequest.h"
#import "MTCompanionSyncSerializer.h"
#import "MTCompanionSyncService.h"
#import "MTCompanionSyncSession.h"
#import "MTCompanionSyncStatusProvider.h"
#import "MTCoreDuetMonitor.h"
#import "MTCreateAlarmIntent.h"
#import "MTCreateAlarmIntentHandler.h"
#import "MTCreateAlarmIntentResponse.h"
#import "MTCreateSingleTimerIntentHandler.h"
#import "MTCreateTimerIntentHandler.h"
#import "MTDateFormatting.h"
#import "MTDeleteTimerIntentHandler.h"
#import "MTDeviceListener.h"
#import "MTDictionaryDeserializer.h"
#import "MTDictionarySerializer.h"
#import "MTDisableAlarmIntent.h"
#import "MTDisableAlarmIntentResponse.h"
#import "MTDistributedNotificationPoster.h"
#import "MTEnableAlarmIntent.h"
#import "MTEnableAlarmIntentResponse.h"
#import "MTExpiringFuture.h"
#import "MTExponentialBackOffTimer.h"
#import "MTGCDTaskScheduler.h"
#import "MTGCDTimer.h"
#import "MTGetAlarmsIntent.h"
#import "MTGetAlarmsIntentHandler.h"
#import "MTGetAlarmsIntentResponse.h"
#import "MTInMemoryDefaults.h"
#import "MTInMemorySyncChangeStore.h"
#import "MTIntentAlarm.h"
#import "MTIntentAlarmResolutionResult.h"
#import "MTIntentRepeatDay.h"
#import "MTIntentRepeatDayResolutionResult.h"
#import "MTLanguageChangeListener.h"
#import "MTLegacyManager.h"
#import "MTMetrics.h"
#import "MTMutableAlarm.h"
#import "MTMutableTimer.h"
#import "MTNextAlarm.h"
#import "MTNextAlarmManager.h"
#import "MTOSTransaction.h"
#import "MTObserverStore.h"
#import "MTOnChargerMonitor.h"
#import "MTOnWristMonitor.h"
#import "MTPBAlarm.h"
#import "MTPBAlarmAdd.h"
#import "MTPBAlarmDelete.h"
#import "MTPBAlarmProperties.h"
#import "MTPBAlarmState.h"
#import "MTPBAlarmUpdate.h"
#import "MTPBDismissAction.h"
#import "MTPBSnoozeAction.h"
#import "MTPBSound.h"
#import "MTPBSyncMessage.h"
#import "MTPairedDeviceListener.h"
#import "MTPairedDevicePreferences.h"
#import "MTPauseResumeTimerIntentHandler.h"
#import "MTPersistentSyncChangeStore.h"
#import "MTPowerAssertion.h"
#import "MTResetTimerIntentHandler.h"
#import "MTScheduledList.h"
#import "MTScheduledObject.h"
#import "MTScheduler.h"
#import "MTSearchTimerIntentHandler.h"
#import "MTSensitiveUIMonitor.h"
#import "MTSetTimerAttributeIntentHandler.h"
#import "MTSleepCoordinator.h"
#import "MTSleepCoordinatorStateMachine.h"
#import "MTSleepCoordinatorStateMachineAsleepState.h"
#import "MTSleepCoordinatorStateMachineAwakeState.h"
#import "MTSleepCoordinatorStateMachineDisabledState.h"
#import "MTSleepCoordinatorStateMachineState.h"
#import "MTSleepManager.h"
#import "MTSleepModeManager.h"
#import "MTSleepModeMonitor.h"
#import "MTSleepModeStateMachine.h"
#import "MTSleepModeStateMachineInitialState.h"
#import "MTSleepModeStateMachineOffState.h"
#import "MTSleepModeStateMachineOnState.h"
#import "MTSleepModeStateMachineState.h"
#import "MTSleepModeStateMachineUserRequestedOffState.h"
#import "MTSleepModeStateMachineWaitingState.h"
#import "MTSleepSessionManager.h"
#import "MTSleepSessionTracker.h"
#import "MTSleepUtilities.h"
#import "MTSnapshotScheduler.h"
#import "MTSound.h"
#import "MTSpringboardStartMonitor.h"
#import "MTStateMachine.h"
#import "MTStateMachineState.h"
#import "MTStorageReader.h"
#import "MTStorageReaderV1.h"
#import "MTStorageWriter.h"
#import "MTSyncChangeArchiver.h"
#import "MTSyncChangeQueue.h"
#import "MTSyncChangeStore.h"
#import "MTSyncChangeUnarchiver.h"
#import "MTSyncDismiss.h"
#import "MTSyncServiceManager.h"
#import "MTSyncSnooze.h"
#import "MTSystemStateListener.h"
#import "MTTask.h"
#import "MTTaskGroup.h"
#import "MTTimeListener.h"
#import "MTTimer.h"
#import "MTTimerCache.h"
#import "MTTimerDataSource.h"
#import "MTTimerDate.h"
#import "MTTimerDuration.h"
#import "MTTimerDurationManager.h"
#import "MTTimerIntentDonor.h"
#import "MTTimerIntentHandler.h"
#import "MTTimerManager.h"
#import "MTTimerManagerExportedObject.h"
#import "MTTimerMigrator.h"
#import "MTTimerScheduler.h"
#import "MTTimerServer.h"
#import "MTTimerSnapshot.h"
#import "MTTimerStorage.h"
#import "MTTimerTimeInterval.h"
#import "MTToggleAlarmIntent.h"
#import "MTToggleAlarmIntentHandler.h"
#import "MTToggleAlarmIntentResponse.h"
#import "MTTrigger.h"
#import "MTUpdateAlarmIntent.h"
#import "MTUpdateAlarmIntentHandler.h"
#import "MTUpdateAlarmIntentResponse.h"
#import "MTUpdateTimerIntentHandler.h"
#import "MTUserDefaults.h"
#import "MTUserNotificationActionDispatcher.h"
#import "MTUserNotificationAppDelegate.h"
#import "MTUserNotificationCenter.h"
#import "MTUtilities.h"
#import "MTWatchAlarmWidgetProvider.h"
#import "MTWatchTimerWidgetProvider.h"
#import "MTWatchWidgetUtilities.h"
#import "MTWorldClock.h"
#import "MTWorldClockResolutionResult.h"
#import "MTXPCClientInfo.h"
#import "MTXPCConnectionInfo.h"
#import "MTXPCConnectionListenerProvider.h"
#import "MTXPCConnectionProvider.h"
#import "MTXPCScheduler.h"
#import "NotificationRelay.h"
#import "WorldClockCity.h"
#import "WorldClockManager.h"
#import "WorldClockPreferences.h"
#import "_MTSerialQueueScheduler.h"
#import "BSDescriptionProviding-Protocol.h"
#import "CSLSOnWristMonitorDelegate-Protocol.h"
#import "DNDModeAssertionUpdateListener-Protocol.h"
#import "HKSPSleepStoreObserver-Protocol.h"
#import "INCreateTimerIntentHandling-Protocol.h"
#import "INDeleteTimerIntentHandling-Protocol.h"
#import "INPauseTimerIntentHandling-Protocol.h"
#import "INResetTimerIntentHandling-Protocol.h"
#import "INResumeTimerIntentHandling-Protocol.h"
#import "INSearchForTimersIntentHandling-Protocol.h"
#import "INSetTimerAttributeIntentHandling-Protocol.h"
#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "MTAgentDiagnosticDelegate-Protocol.h"
#import "MTAgentNotificationListener-Protocol.h"
#import "MTAlarmClient-Protocol.h"
#import "MTAlarmObserver-Protocol.h"
#import "MTAlarmScheduleDelegate-Protocol.h"
#import "MTAlarmServer-Protocol.h"
#import "MTAlarmStorage-Protocol.h"
#import "MTApplicationWorkspaceObserverProtocol-Protocol.h"
#import "MTCreateAlarmIntentHandling-Protocol.h"
#import "MTDictionarySerializable-Protocol.h"
#import "MTDisableAlarmIntentHandling-Protocol.h"
#import "MTDurationUpdateDelegate-Protocol.h"
#import "MTEnableAlarmIntentHandling-Protocol.h"
#import "MTGetAlarmsIntentHandling-Protocol.h"
#import "MTNotificationCenter-Protocol.h"
#import "MTPairedDeviceObserver-Protocol.h"
#import "MTPersistence-Protocol.h"
#import "MTProtoBufferSerializable-Protocol.h"
#import "MTScheduleable-Protocol.h"
#import "MTScheduledListDelegate-Protocol.h"
#import "MTScheduler-Protocol.h"
#import "MTSchedulingDelegate-Protocol.h"
#import "MTSerializable-Protocol.h"
#import "MTSerializer-Protocol.h"
#import "MTSessionClient-Protocol.h"
#import "MTSessionServer-Protocol.h"
#import "MTSleepCoordinatorStateMachineDelegate-Protocol.h"
#import "MTSleepCoordinatorStateMachineEventHandler-Protocol.h"
#import "MTSleepCoordinatorStateMachineInfoProvider-Protocol.h"
#import "MTSleepModeManager-Protocol.h"
#import "MTSleepModeStateMachineDelegate-Protocol.h"
#import "MTSleepModeStateMachineEventHandler-Protocol.h"
#import "MTSleepModeStateMachineInfoProvider-Protocol.h"
#import "MTSleepObserver-Protocol.h"
#import "MTSleepSessionTracker-Protocol.h"
#import "MTSleepSessionTrackerDelegate-Protocol.h"
#import "MTSource-Protocol.h"
#import "MTStateMachineDelegate-Protocol.h"
#import "MTStateMachineEventHandler-Protocol.h"
#import "MTStateMachineInfoProvider-Protocol.h"
#import "MTSyncChangeStore-Protocol.h"
#import "MTSyncDataModel-Protocol.h"
#import "MTSyncManager-Protocol.h"
#import "MTSyncService-Protocol.h"
#import "MTSyncServiceDelegate-Protocol.h"
#import "MTSyncStatusProvider-Protocol.h"
#import "MTSyncStatusProviderDelegate-Protocol.h"
#import "MTSyncToken-Protocol.h"
#import "MTSyncable-Protocol.h"
#import "MTSyncableObject-Protocol.h"
#import "MTSystemStateDelegate-Protocol.h"
#import "MTTaskScheduler-Protocol.h"
#import "MTTimeObserver-Protocol.h"
#import "MTTimerClient-Protocol.h"
#import "MTTimerIntentSupport-Protocol.h"
#import "MTTimerManagerIntentSupport-Protocol.h"
#import "MTTimerManagerProviding-Protocol.h"
#import "MTTimerObserver-Protocol.h"
#import "MTTimerSchedulerDelegate-Protocol.h"
#import "MTTimerServer-Protocol.h"
#import "MTTimerStorage-Protocol.h"
#import "MTTimerTime-Protocol.h"
#import "MTToggleAlarmIntentHandling-Protocol.h"
#import "MTUpdateAlarmIntentHandling-Protocol.h"
#import "MTUserDefaultNotificationObserver-Protocol.h"
#import "MTXPCServer-Protocol.h"
#import "NAEquatable-Protocol.h"
#import "NAHashable-Protocol.h"
#import "NAScheduler-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "SYChange-Protocol.h"
#import "SYChangeSerializer-Protocol.h"
#import "SYServiceDelegate-Protocol.h"
#import "SYSessionDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"
#import "INIntent+MTAlarmIntent.h"
#import "NSNotificationCenter+MTNotifiying.h"
#import "NSCoder+MTSerializer.h"
#import "UNNotificationSound+MTSound_Notifications.h"
#import "NSDate+MTUtilities.h"
#import "NSCalendar+MTUtilities.h"
#import "NSLocale+MTUtilities.h"
#import "NSDateComponents+MTUtilities.h"
#import "NSURL+MTUtilities.h"
#import "NSUserActivity+MTUtilities.h"
#import "INInteraction+MTUtilities.h"
#import "NAScheduler+MTUtilities.h"
#import "NSDateInterval+MTUtilities.h"
#import "NSDateFormatter+MTUtilities.h"
#import "NAFuture+MTUtilities.h"
#import "NSString+Notification.h"

#endif /* MobileTimer_h */