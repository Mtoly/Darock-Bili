//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKMergeableDeltaMetadata_Envelope_h
#define CKMergeableDeltaMetadata_Envelope_h
@import Foundation;

@interface CKMergeableDeltaMetadata (Envelope) <CKEncryptable>
/* instance methods */
- (id)envelope;
- (void)setEnvelope:(id)envelope;
- (id)encryptedTimestamps;
- (void)setEncryptedTimestamps:(id)timestamps;
- (id)authenticatedTimestamps;
- (void)setAuthenticatedTimestamps:(id)timestamps;
- (struct __OpaquePCSKeyEnvelope *)_envelopeWithContext:(id)context allowCreation:(BOOL)creation error:(id *)error;
- (struct __OpaquePCSKeyEnvelope *)_encryptWithContext:(id)context error:(id *)error;
- (BOOL)decryptWithContext:(id)context error:(id *)error;
- (struct __OpaquePCSKeyEnvelope *)_decryptWithContext:(id)context error:(id *)error;
- (BOOL)needsEncryption;
- (BOOL)needsDecryption;
@end

#endif /* CKMergeableDeltaMetadata_Envelope_h */