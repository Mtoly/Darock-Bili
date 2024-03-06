//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef DESJSONPredicate_h
#define DESJSONPredicate_h
@import Foundation;

@interface DESJSONPredicate : NSObject
/* class methods */
+ (id)parseJSON:(id)json;
+ (id)fetchObjectAtPath:(id)path from:(id)from;
+ (id)parsePath:(id)path;
+ (BOOL)evaluateDefOp:(id)op onObj:(id)obj;
+ (BOOL)evaluateStringOp:(id)op onObj:(id)obj;
+ (BOOL)evaluateRegexOp:(id)op onObj:(id)obj;
+ (BOOL)evaluateNumericOp:(id)op onObj:(id)obj;
+ (BOOL)_testStrings:(id)strings test:(id)test caseInsensitive:(BOOL)insensitive;
+ (BOOL)evaluateArrayOp:(id)op onObj:(id)obj;
+ (BOOL)isNumber:(id)number;
+ (BOOL)isBoolean:(id)boolean;
+ (BOOL)obj:(id)obj matchesRegex:(id)regex;
+ (BOOL)isDate:(id)date;
+ (BOOL)isDateTime:(id)time;
+ (BOOL)isTime:(id)time;
+ (BOOL)evaluateTypeOp:(id)op onObj:(id)obj;
+ (BOOL)evaluateAnd:(id)and onObj:(id)obj;
+ (BOOL)evaluateOr:(id)or onObj:(id)obj;
+ (BOOL)evaluateBoolOp:(id)op onObj:(id)obj;
+ (BOOL)evaluateDict:(id)dict onObj:(id)obj;
+ (BOOL)evaluatePredicate:(id)predicate onObj:(id)obj;
+ (BOOL)evaluateJson:(id)json onJson:(id)json;
@end

#endif /* DESJSONPredicate_h */