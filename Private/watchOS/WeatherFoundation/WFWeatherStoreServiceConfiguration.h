//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFWeatherStoreServiceConfiguration_h
#define WFWeatherStoreServiceConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSURLSessionTaskDelegate-Protocol.h"
#include "WFSettingsManager.h"

@class NSString, NSURL, NSURLSession, NWPathEvaluator;

@interface WFWeatherStoreServiceConfiguration : NSObject<NSURLSessionTaskDelegate, NSCopying>

@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } serviceConnectivityEvaluationURLLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } serviceConnectivityEvaluatorLock;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) Class cacheClass;
@property (retain, nonatomic) NSURL *serviceConnectivityEvaluationURL;
@property (retain, nonatomic) WFSettingsManager *settingsManager;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSString *apiVersion;
@property (copy, nonatomic) NSURL *cacheURL;
@property (readonly, nonatomic) NWPathEvaluator *serviceConnectivityEvaluator;
@property (readonly, nonatomic) BOOL isServiceAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultConfigurationWithSourceBundleIdentifier:(id)identifier;
+ (id)defaultConfiguration;
+ (id)generateUserAgent;

/* instance methods */
- (id)init;
- (void)invalidate;
- (id)apiConfiguration;
- (id)apiConfigurationForAPIVersion:(id)apiversion;
- (id)forecastRequestForTypes:(unsigned long long)types location:(id)location date:(id)date error:(id *)error;
- (id)forecastRequestForTypes:(unsigned long long)types location:(id)location date:(id)date apiVersion:(id)version error:(id *)error;
- (id)forecastRequestForTypes:(unsigned long long)types location:(id)location units:(int)units date:(id)date apiVersion:(id)version error:(id *)error;
- (id)forecastRequestForTypes:(unsigned long long)types location:(id)location units:(int)units date:(id)date apiVersion:(id)version error:(id *)error requestOptions:(id)options;
- (id)parseForecast:(unsigned long long)forecast data:(id)data location:(id)location units:(int)units locale:(id)locale date:(id)date error:(id *)error;
- (id)parseForecast:(unsigned long long)forecast data:(id)data location:(id)location units:(int)units locale:(id)locale date:(id)date apiVersion:(id)version error:(id *)error;
- (id)aqiScaleRequestForScaleNamed:(id)named language:(id)language error:(id *)error;
- (id)parseAQIScaleNamed:(id)named data:(id)data apiVersion:(id)version error:(id *)error;
- (void)URLSession:(id)urlsession task:(id)task didFinishCollectingMetrics:(id)metrics;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isServiceAvailableSync;
@end

#endif /* WFWeatherStoreServiceConfiguration_h */