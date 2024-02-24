//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicationScheduleControlServer_Protocol_h
#define HKMedicationScheduleControlServer_Protocol_h
@import Foundation;

@protocol HKMedicationScheduleControlServer <HKUnitTestingTaskServerInterface>
/* instance methods */
- (void)remote_saveSchedule:(id)schedule completion:(id /* block */)completion;
- (void)remote_updateSchedulesToLocalTimeZoneAndMaintainCalendarDatesAndTimes:(BOOL)times completion:(id /* block */)completion;
- (void)remote_fetchScheduleWithMedicationIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)remote_fetchSchedulesWithMedicationIdentifiers:(id)identifiers completion:(id /* block */)completion;
- (void)remote_fetchAllSchedulesWithCompletion:(id /* block */)completion;
- (void)remote_deleteSchedule:(id)schedule completion:(id /* block */)completion;
- (void)remote_saveScheduleItems:(id)items completion:(id /* block */)completion;
- (void)remote_updateNotificationSent:(BOOL)sent scheduleItemIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)remote_rescheduleMedicationsWithCompletion:(id /* block */)completion;
- (void)remote_observeMedicationScheduleChanges:(BOOL)changes completion:(id /* block */)completion;
@end

#endif /* HKMedicationScheduleControlServer_Protocol_h */