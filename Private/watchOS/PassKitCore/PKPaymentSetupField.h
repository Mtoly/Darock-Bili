//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupField_h
#define PKPaymentSetupField_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol NSObject><NSCopying;

@interface PKPaymentSetupField : NSObject<NSCopying>

@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *displayFormat;
@property (nonatomic) BOOL optional;
@property (copy, nonatomic) NSString *submissionKey;
@property (copy, nonatomic) NSString *submissionDestination;
@property (nonatomic) BOOL requiresSecureSubmission;
@property (readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary;
@property (readonly, nonatomic) BOOL builtIn;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic) BOOL populateFromMeCard;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL readonly;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long fieldType;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *compactLocalizedDisplayName;
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *currentValue;
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *originalCameraCaptureValue;
@property (nonatomic) BOOL currentValueFromCameraCapture;
@property (readonly, copy, nonatomic) NSString *odiAttribute;
@property (readonly, copy, nonatomic) NSArray *requirements;

/* class methods */
+ (id)newRandomlyGeneratedField;
+ (id)sampleCustomPaymentSetupFields;
+ (id)paymentSetupFieldWithIdentifier:(id)identifier;
+ (id)paymentSetupFieldWithIdentifier:(id)identifier type:(unsigned long long)type;
+ (id)paymentSetupFieldWithIdentifier:(id)identifier configuration:(id)configuration;
+ (Class)classForIdentifier:(id)identifier type:(unsigned long long)type;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier type:(unsigned long long)type;
- (id)initWithIdentifier:(id)identifier configuration:(id)configuration;
- (void)updateWithConfiguration:(id)configuration;
- (BOOL)isBuiltIn;
- (BOOL)isFieldTypeText;
- (BOOL)isFieldTypeDate;
- (BOOL)isFieldTypeLabel;
- (BOOL)isFieldTypeFooter;
- (BOOL)isFieldTypePicker;
- (BOOL)preventVoiceOver;
- (BOOL)_shouldStripDiacritics;
- (id)textFieldObject;
- (id)dateFieldObject;
- (id)labelFieldObject;
- (id)footerFieldObject;
- (id)pickerFieldObject;
- (id)displayString;
- (id)submissionString;
- (id)_submissionStringForValue:(id)value;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)_setLocalizedDisplayName:(id)name;
- (void)noteCurrentValueChanged;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isOptional;
- (BOOL)isReadonly;
- (BOOL)isHidden;
- (BOOL)isCurrentValueFromCameraCapture;
@end

#endif /* PKPaymentSetupField_h */