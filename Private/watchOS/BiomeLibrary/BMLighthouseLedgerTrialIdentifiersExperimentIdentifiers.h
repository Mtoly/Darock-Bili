//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers_h
#define BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *trialExperimentID;
@property (readonly, nonatomic) NSString *trialDeploymentID;
@property (readonly, nonatomic) NSString *trialTreatmentID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithTrialExperimentID:(id)id trialDeploymentID:(id)id trialTreatmentID:(id)id;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers_h */