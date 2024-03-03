//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVContainer_h
#define CoreDAVContainer_h
@import Foundation;

#include "CoreDAVResourceTypeItem.h"
#include "CoreDAVSupportedReportSetItem.h"

@class NSDictionary, NSSet, NSString, NSURL;

@interface CoreDAVContainer : NSObject

@property (retain, nonatomic) CoreDAVSupportedReportSetItem *supportedReportSetItem;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL isUnauthenticated;
@property (retain, nonatomic) CoreDAVResourceTypeItem *resourceType;
@property (retain, nonatomic) NSString *containerTitle;
@property (retain, nonatomic) NSSet *privileges;
@property (retain, nonatomic) NSString *pushKey;
@property (retain, nonatomic) NSDictionary *pushTransports;
@property (retain, nonatomic) NSURL *resourceID;
@property (retain, nonatomic) NSString *quotaAvailable;
@property (retain, nonatomic) NSString *quotaUsed;
@property (readonly, nonatomic) NSSet *supportedReports;
@property (retain, nonatomic) NSURL *owner;
@property (retain, nonatomic) NSURL *addMemberURL;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (retain, nonatomic) NSString *syncToken;
@property (readonly, nonatomic) NSSet *resourceTypeAsStringSet;
@property (readonly, nonatomic) BOOL isPrincipal;
@property (readonly, nonatomic) NSSet *privilegesAsStringSet;
@property (readonly, nonatomic) BOOL hasReadPrivileges;
@property (readonly, nonatomic) BOOL hasWriteContentPrivileges;
@property (readonly, nonatomic) BOOL hasWritePropertiesPrivileges;
@property (readonly, nonatomic) BOOL hasBindPrivileges;
@property (readonly, nonatomic) BOOL hasUnbindPrivileges;
@property (readonly, nonatomic) NSSet *supportedReportsAsStringSet;
@property (readonly, nonatomic) BOOL supportsPrincipalPropertySearchReport;
@property (readonly, nonatomic) BOOL supportsSyncCollectionReport;

/* class methods */
+ (id)copyPropertyMappingsForParser;
+ (id)convertPushTransportsForNSServerNotificationCenter:(id)center;

/* instance methods */
- (id)initWithURL:(id)url andProperties:(id)properties;
- (id)description;
- (void)applyParsedProperties:(id)properties;
- (void)postProcessWithResponseHeaders:(id)headers;
- (BOOL)_anyPrivilegesMatches:(id /* block */)matches;
@end

#endif /* CoreDAVContainer_h */