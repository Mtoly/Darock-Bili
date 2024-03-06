//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISDefaults_h
#define ISDefaults_h
@import Foundation;

@class NSNumber, NSString, NSURL;

@interface ISDefaults : NSObject

@property (retain) NSNumber *_usePerstentCache;
@property (readonly) struct os_unfair_lock_s { unsigned int x0; } lock;
@property (readonly) BOOL _enableAppIconOverrides;
@property (readonly) BOOL _enable1016Icons;
@property (readonly) BOOL _ignoreDocumentClaimIcons;
@property (retain) NSURL *_cacheURL;
@property (readonly, @dynamic) BOOL usePerstentCache;
@property (readonly, @dynamic) NSURL *cacheURL;
@property (readonly) NSString *cacheSaltString;
@property (readonly) NSString *serviceName;
@property (readonly) BOOL defaultToTemplatizedAppIcons;
@property (readonly) BOOL allowDocumentClaimIcons;
@property (readonly) BOOL preferSymbolAsTemplateVariant;
@property (readonly) BOOL enableAppIconOverides;
@property (readonly) double prepareImageDelay;
@property (readonly) BOOL logMissingURLCacheProperties;
@property (readonly) BOOL enableInstanceIDBasedTwoAppModel;
@property (readonly) BOOL enableBadgeOverhange;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (BOOL)isDebugGraphicIconColourEnabled;
- (id)debugGraphicIconColor;
- (id)debugPreDefinedGraphicIconColor;
- (id)debugISIconGraphicIconColor;
@end

#endif /* ISDefaults_h */