//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REContent_REUIAdditions_h
#define REContent_REUIAdditions_h
@import Foundation;

@interface REContent (REUIAdditions)
/* class methods */
+ (id)defaultPrivacyContentWithAppName:(id)name icon:(id)icon;
+ (id)defaultPrivacyContentWithAppName:(id)name iconImageProvider:(id)provider;
+ (id)defaultPrivacyContentWithAppName:(id)name;

/* instance methods */
- (id)summaryTextProvider;
- (void)setSummaryTextProvider:(id)provider;
- (id)summaryImageProvider;
- (void)setSummaryImageProvider:(id)provider;
- (id)circularTempate;
- (void)setCircularTempate:(id)tempate;
- (id)gaugeProvider;
- (void)setGaugeProvider:(id)provider;
- (id)privacyContent;
- (void)setPrivacyContent:(id)content;
@end

#endif /* REContent_REUIAdditions_h */