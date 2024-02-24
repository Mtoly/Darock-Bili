//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMHSettingsManager_h
#define HKMHSettingsManager_h
@import Foundation;

@class HKObserverSet, NSArray, NSUserDefaults;

@interface HKMHSettingsManager : NSObject {
  /* instance variables */
  HKObserverSet *_observers;
  NSArray *_allSettingsToObserve;
}

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) BOOL middayNotificationsEnabled;
@property (nonatomic) BOOL endOfDayNotificationsEnabled;
@property (retain, nonatomic) NSArray *customReminderSchedule;

/* instance methods */
- (id)init;
- (id)initWithUserDefaults:(id)defaults;
- (void)dealloc;
- (void)_startObservingDefaults;
- (void)_stopObservingAllDefaults;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (BOOL)hasAnyStateOfMindReminderEnabled;
- (BOOL)hasEverEnabledAStateOfMindReminderNotification;
- (void)setReminders:(BOOL)reminders;
- (void)addObserver:(id)observer queue:(id)queue;
- (void)removeObserver:(id)observer;
- (void)_notificationSettingsDidUpdate;
- (void)_setTestDefaults:(id)defaults;
@end

#endif /* HKMHSettingsManager_h */