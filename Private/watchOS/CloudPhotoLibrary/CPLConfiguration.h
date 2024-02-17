//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLConfiguration_h
#define CPLConfiguration_h
@import Foundation;

@class NSDate, NSDictionary, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject {
  /* instance variables */
  NSURL *_configurationFileURL;
  NSDictionary *_configuration;
  NSDate *_lastUpdate;
  double _updateInterval;
  NSURLSession *_currentSession;
  NSObject<OS_dispatch_queue> *_lock;
  double _minUpdateInterval;
  NSString *_updateIntervalKey;
}

/* class methods */
+ (void)disableConfigurationFetching;

/* instance methods */
- (id)initWithClientLibraryBaseURL:(id)url minUpdateInterval:(double)interval updateIntervalKey:(id)key;
- (id)initWithClientLibraryBaseURL:(id)url;
- (double)_updateInterval;
- (void)check;
- (void)_save;
- (void)_load;
- (void)_setContents:(id)contents;
- (void)refetchFromDisk;
- (id)valueForKey:(id)key;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)invalidate;
@end

#endif /* CPLConfiguration_h */