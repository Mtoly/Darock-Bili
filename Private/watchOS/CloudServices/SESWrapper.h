//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 611.60.5.0.0
//
#ifndef SESWrapper_h
#define SESWrapper_h
@import Foundation;

@class NSData, NSDate, NSDictionary, NSString;

@interface SESWrapper : NSObject

@property (nonatomic) int reqVersion;
@property (readonly, nonatomic) struct ckvr_srp_context { struct ccrng_state * x0; struct ccdigest_info * x1; struct ccmode_cbc * x2; struct ccmode_cbc * x3; struct ccmode_gcm * x4; struct ccmode_gcm * x5; struct ccsrp_ctx * x6; } * ckvr;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *recoveryPassphrase;
@property (nonatomic) BOOL recoveryPassphraseMutable;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *recordID;
@property (readonly, copy, nonatomic) NSDictionary *escrowRecord;
@property (copy, nonatomic) NSString *decodedLabel;
@property (copy, nonatomic) NSDate *escrowDate;
@property (retain, nonatomic) NSData *escrowBlob;
@property (retain) NSData *recoveryBlob;

/* instance methods */
- (id)initWithRequest:(id)request;
- (id)initWithRequest:(id)request reqVersion:(int)version;
- (id)initWithDSID:(id)dsid escrowRecordContents:(id)contents recoveryPassphrase:(id)passphrase recordID:(id)id recordLabel:(id)label;
- (id)initWithDSID:(id)dsid escrowRecordContents:(id)contents recoveryPassphrase:(id)passphrase recordID:(id)id recordLabel:(id)label reqVersion:(int)version;
- (id)srpInitBlob;
- (unsigned long long)srpKeySize;
- (unsigned long long)srpPublicKeySize;
- (void)srpRecoveryUpdateDSID:(id)dsid recoveryPassphrase:(id)passphrase;
- (id)srpRecoveryBlobFromData:(id)data error:(id *)error;
- (id)encodedEscrowRecordWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)key error:(id *)error;
- (id)decodedEscrowRecordFromData:(id)data stingray:(BOOL)stingray env:(id)env duplicate:(BOOL)duplicate;
- (id)srpResponseForEscrowBlob:(id)blob withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)key withFullCCKey:(struct ccrsa_full_ctx { unsigned long long x0; unsigned long long x1; struct cczp_funcs * x2; unsigned long long x3[0] } *)cckey;
- (id)recoveryResponseForBlob:(id)blob;
- (void)dealloc;
@end

#endif /* SESWrapper_h */