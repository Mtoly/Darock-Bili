//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditIssueDescriptionManager_h
#define AXAuditIssueDescriptionManager_h
@import Foundation;

@interface AXAuditIssueDescriptionManager : NSObject
/* class methods */
+ (id)sharedManager;
+ (id)_auditIssueTypeToLocalizationKeyLookup;
+ (id)auditIssueTypeToAuditTestTypeMapping;
+ (id)allAuditIssueClassificationCodes;

/* instance methods */
- (id)shortTitleForAuditIssue:(id)issue;
- (id)longDescriptionForAuditIssue:(id)issue;
- (id)longDescExtraInfoForAuditIssue:(id)issue;
- (id)suggestionDescriptionForAuditIssue:(id)issue;
- (id)_locStringForKey:(id)key;
- (id)_locStringForIssue:(id)issue suffix:(id)suffix;
- (id)_locKeyWithSuffix:(id)suffix issueClassification:(long long)classification;
- (id)_locKeyForAuditIssueClassification:(long long)classification;
- (BOOL)isContrastTypeIssue:(long long)issue;
- (id)humanReadableDescriptionForAuditIssueTestType:(id)type;
- (id)humanReadableDescriptionForAuditTestType:(id)type;
@end

#endif /* AXAuditIssueDescriptionManager_h */