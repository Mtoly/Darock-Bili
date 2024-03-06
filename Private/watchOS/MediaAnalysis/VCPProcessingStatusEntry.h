//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPProcessingStatusEntry_h
#define VCPProcessingStatusEntry_h
@import Foundation;

@class NSDate, NSString;

@interface VCPProcessingStatusEntry : NSObject

@property (readonly, nonatomic) unsigned long long taskID;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) unsigned long long attempts;
@property (readonly, nonatomic) NSDate *lastAttemptDate;
@property (readonly, nonatomic) NSDate *nextAttemptDate;

/* class methods */
+ (id)entryWithLocalIdentifier:(id)identifier taskID:(unsigned long long)id status:(unsigned long long)status attempts:(unsigned long long)attempts lastAttemptDate:(id)date andNextAttemptDate:(id)date;

/* instance methods */
- (id)initWithLocalIdentifier:(id)identifier taskID:(unsigned long long)id status:(unsigned long long)status attempts:(unsigned long long)attempts lastAttemptDate:(id)date andNextAttemptDate:(id)date;
@end

#endif /* VCPProcessingStatusEntry_h */