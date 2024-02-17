//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVCalendarQueryTask_h
#define CalDAVCalendarQueryTask_h
@import Foundation;

#include "CoreDAVPropFindTask.h"

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask

@property (nonatomic) BOOL syncEvents;
@property (nonatomic) BOOL syncTodos;
@property (retain, nonatomic) NSDateComponents *eventFilterStartDate;
@property (retain, nonatomic) NSDateComponents *eventFilterEndDate;

/* instance methods */
- (id)description;
- (id)httpMethod;
- (id)_icsDateStringForNSDateComponents:(id)components;
- (void)_appendTimeRangeFilterToXMLData:(id)xmldata startDate:(id)date endDate:(id)date;
- (void)_appendComponentFiltersToXMLData:(id)xmldata;
- (id)requestBody;
@end

#endif /* CalDAVCalendarQueryTask_h */