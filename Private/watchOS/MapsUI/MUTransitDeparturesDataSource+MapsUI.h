//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef MUTransitDeparturesDataSource_MapsUI_h
#define MUTransitDeparturesDataSource_MapsUI_h
@import Foundation;

@interface MUTransitDeparturesDataSource (MapsUI) <MKTransitDeparturesDataProviderDelegate>
/* instance methods */
- (id)traitsForTransitDeparturesDataProvider:(id)provider;
- (void)transitDeparturesDataProviderDidReload:(id)reload;
@end

#endif /* MUTransitDeparturesDataSource_MapsUI_h */