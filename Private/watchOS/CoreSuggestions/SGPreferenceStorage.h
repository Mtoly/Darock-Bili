//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGPreferenceStorage_h
#define SGPreferenceStorage_h
@import Foundation;

@interface SGPreferenceStorage : NSObject
/* class methods */
+ (BOOL)showContactsFoundInMail;
+ (void)setShowContactsFoundInMail:(BOOL)mail;
+ (BOOL)showEventsFoundInMail;
+ (void)setShowEventsFoundInMail:(BOOL)mail;
+ (void)resetAllPreferences;
+ (long long)suggestionsLogLevel;
+ (BOOL)showPastEvents;
+ (void)setShowPastEvents:(BOOL)events;
+ (BOOL)alwaysShowCancelledEvents;
+ (void)setAlwaysShowCancelledEvents:(BOOL)events;
+ (void)updateBoolSettingKey:(id)key withValue:(BOOL)value;
+ (void)updateIntSettingKey:(id)key withValue:(int)value;
+ (BOOL)onlyShowSignificantPseudoContacts;
+ (void)setOnlyShowSignificantPseudoContacts:(BOOL)contacts;
+ (void)setOnlyShowSignificantPseudoContactsForTests:(BOOL)tests;
+ (BOOL)onlyShowSignificantNLEvents;
+ (void)setOnlyShowSignificantNLEvents:(BOOL)nlevents;
+ (long long)hashedSessionsLogging;
+ (void)setHashedSessionsLogging:(int)logging;
+ (BOOL)showSuggestionsCalendar;
+ (int)registerBlockOnSuggestionsSettingsChange:(id /* block */)change;
+ (void)removeDeprecatedDefaults;
+ (id)defaults;
+ (long long)messagesToProcessImmediately;
+ (void)setMessagesToProcessImmediately:(long long)immediately;
+ (BOOL)syncHistoryToCloud;
+ (void)setSyncHistoryToCloud:(BOOL)cloud;
+ (BOOL)allowGeocode;
+ (BOOL)allowUnverifiedSourceForMarkup;
+ (void)setAllowUnverifiedSourceForMarkup:(BOOL)markup;
+ (BOOL)allowAnyDomainForMarkup;
+ (void)setAllowAnyDomainForMarkup:(BOOL)markup;
+ (id)disabledEventUpdateCategories;
+ (void)setDisabledEventUpdateCategories:(id)categories;
+ (BOOL)allowAgeBasedPruning;
+ (void)setAllowAgeBasedPruning:(BOOL)pruning;
+ (BOOL)useMLModelForContacts;
+ (void)setUseMLModelForContacts:(BOOL)contacts;
+ (BOOL)useMLModelForSelfId;
+ (void)setUseMLModelForSelfId:(BOOL)id;
+ (BOOL)useMLModelForContactSharing;
+ (void)setUseMLModelForContactSharing:(BOOL)sharing;
+ (float)contactSharingNegativeSamplingRate;
+ (void)setContactSharingNegativeSamplingRate:(float)rate;
+ (BOOL)detectContacts;
+ (BOOL)detectNLEvents;
+ (BOOL)detectMessageEventsML;
+ (BOOL)detectStructuredEvents;
+ (BOOL)detectReminders;
+ (BOOL)detectStructuredEventsML;
+ (BOOL)detectRemindersInMail;
+ (id)detectSalientMails;
+ (void)updateDetection:(BOOL)detection forKey:(id)key;
+ (void)setDetectStructuredEvents:(BOOL)events;
+ (void)setDetectNLEvents:(BOOL)nlevents;
+ (void)setDetectMessageEventsML:(BOOL)ml;
+ (void)setDetectContacts:(BOOL)contacts;
+ (void)setDetectReminders:(BOOL)reminders;
+ (void)setDetectStructuredEventsML:(BOOL)ml;
+ (void)setDetectRemindersInMail:(BOOL)mail;
+ (id)parsecFlightCachingAPIBaseURL;
+ (void)setParsecFlightCachingAPIBaseURL:(id)url;
+ (void)setFirstPartyCalendarAppIsInstalled:(BOOL)installed;
+ (void)setFirstPartyMailAppIsInstalled:(BOOL)installed;
+ (BOOL)shouldHarvestEvents;
+ (id)cloudKitPersistedState;
+ (void)setCloudKitPersistedState:(id)state;
+ (id)userAccountsPersistedState;
+ (void)setUserAccountsPersistedState:(id)state;
+ (BOOL)useManateeSaltForHistory;
+ (void)setUseManateeSaltForHistory:(BOOL)history;
+ (id)didKVSMigrationTokenForIdentifier:(id)identifier;
+ (void)setDidKVSMigrationToken:(id)token forIdentifier:(id)identifier;
+ (BOOL)showOperatingSystemVersionInSnippets;
+ (void)setShowOperatingSystemVersionInSnippets:(BOOL)snippets;
+ (long long)harvestBudgetNumberOfOperations;
+ (void)setHarvestBudgetNumberOfOperations:(long long)operations;
+ (double)harvestBudgetCPUTimeSeconds;
+ (void)setHarvestBudgetCPUTimeSeconds:(double)seconds;
+ (id)followUpTimeRangeForDebugging;
+ (id)followUpComputeCustomTimeRangeForLanguage:(id)language;
+ (BOOL)mailIntelligenceSPILogging;
+ (BOOL)enableDKIMEnforcement;
+ (void)setEnableDKIMEnforcement:(BOOL)dkimenforcement;
+ (BOOL)hidePastEventsForTests;
+ (void)setHidePastEventsForTests:(BOOL)tests;
+ (void)setShowCancelledEventsForTests:(BOOL)tests;
+ (void)setNLEventsDetectionEnabledForTests:(BOOL)tests;
+ (void)setMessageEventsMLDetectionEnabledForTests:(BOOL)tests;
+ (void)setStructuredEventsDetectionEnabledForTests:(BOOL)tests;
+ (void)setRemindersDetectionEnabledForTests:(BOOL)tests;
+ (void)setStructuredEventsMLDetectionEnabledForTests:(BOOL)tests;
+ (void)setRemindersDetectionInMailEnabledForTests:(BOOL)tests;
+ (void)setMailSaliencyDetectionEnabledForTests:(BOOL)tests;
+ (void)setContactsDetectionEnabledForTests:(BOOL)tests;
+ (void)setAllowGeocodeForTests:(BOOL)tests;
+ (void)setSyncHistoryToCloudForTests:(BOOL)tests;
+ (void)setMessagesToProcessImmediatelyForTests:(long long)tests;
+ (void)setUseMLModelForSelfIdForTests:(BOOL)tests;
+ (id)defaultsForTests;
+ (void)suspendNotificationQueue;
+ (void)resumeNotificationQueue;
@end

#endif /* SGPreferenceStorage_h */