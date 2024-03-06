//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVBulkChangeTask_h
#define CoreDAVBulkChangeTask_h
@import Foundation;

#include "CoreDAVTask.h"

@class NSData, NSDictionary, NSMutableSet, NSSet, NSString;

@interface CoreDAVBulkChangeTask : CoreDAVTask {
  /* instance variables */
  NSString *_appSpecificNamespace;
  NSString *_appSpecificDataProp;
  NSString *_checkCTag;
  BOOL _simple;
  BOOL _returnChangedData;
  NSData *_pushedData;
  BOOL _validCTag;
  NSString *_requestDataContentType;
}

@property (readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property (readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;
@property (readonly, nonatomic) NSString *nextCTag;
@property (readonly, nonatomic) NSSet *bulkChangeResponses;

/* instance methods */
- (id)initWithURL:(id)url checkCTag:(id)ctag simple:(BOOL)simple returnChangedData:(BOOL)data uuidsToAddActions:(id)actions hrefsToModDeleteActions:(id)actions;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)requestBody;
- (void)fillOutDataWithUUIDsToAddActions:(id)actions hrefsToModDeleteActions:(id)actions;
- (id)copyDefaultParserForContentType:(id)type;
- (void)finishCoreDAVTaskWithError:(id)error;
@end

#endif /* CoreDAVBulkChangeTask_h */