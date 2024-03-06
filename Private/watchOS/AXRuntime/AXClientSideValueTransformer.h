//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXClientSideValueTransformer_h
#define AXClientSideValueTransformer_h
@import Foundation;

@interface AXClientSideValueTransformer : NSObject
/* class methods */
+ (Class)transformer;
+ (BOOL)canTransformAttribute:(long long)attribute;
+ (id)transformValue:(id)value forAttribute:(long long)attribute withElement:(struct __AXUIElement *)element;
+ (id)_transformUserString:(id)string;
+ (id)_transformArrayWithUserStrings:(id)strings;
+ (id)_transformAutomationDictionary:(id)dictionary;
@end

#endif /* AXClientSideValueTransformer_h */