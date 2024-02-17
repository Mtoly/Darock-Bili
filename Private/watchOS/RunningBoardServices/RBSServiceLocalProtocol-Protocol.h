//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSServiceLocalProtocol_Protocol_h
#define RBSServiceLocalProtocol_Protocol_h
@import Foundation;

@protocol RBSServiceLocalProtocol 
/* instance methods */
- (id)acquireAssertion:(id)assertion error:(out id *)error;
- (BOOL)invalidateAssertion:(id)assertion error:(out id *)error;
- (BOOL)invalidateAssertionWithIdentifier:(id)identifier error:(out id *)error;
- (id)assertionDescriptorsByPidWithFlattenedAttributes:(BOOL)attributes error:(out id *)error;
- (BOOL)executeLaunchRequest:(id)request process:(out id *)process assertion:(out id *)assertion error:(out id *)error;
- (BOOL)executeTerminateRequest:(id)request assertion:(out id *)assertion error:(out id *)error;
- (id)handleForKey:(id)key;
- (id)processName:(id)name;
- (id)handleForPredicate:(id)predicate error:(out id *)error;
- (id)portForIdentifier:(id)identifier;
- (void)subscribeToProcessDeath:(id)death handler:(id /* block */)handler;
- (BOOL)subscribeProcessStateMonitor:(id)monitor configuration:(id)configuration error:(out id *)error;
- (void)unsubscribeProcessStateMonitor:(id)monitor configuration:(id)configuration;
- (id)statesForPredicate:(id)predicate withDescriptor:(id)descriptor error:(out id *)error;
- (void)intendToExit:(id)exit withStatus:(id)status;
- (id)lastExitContextForInstance:(id)instance error:(out id *)error;
- (id)limitationsForInstance:(id)instance error:(out id *)error;
- (id)hostProcessForInstance:(id)instance error:(out id *)error;
- (id)infoPlistResultForInstance:(id)instance forKeys:(id)keys error:(out id *)error;
- (BOOL)saveEndowment:(id)endowment withError:(out id *)error;
- (id)captureStateForSubsystem:(id)subsystem error:(out id *)error;
- (id)identifiersForStateCaptureSubsystems:(out id *)subsystems;
- (id)busyExtensionInstancesFromSet:(id)set error:(out id *)error;
- (id)preventLaunchPredicatesWithError:(out id *)error;
- (BOOL)isIdentityAnAngel:(id)angel withError:(out id *)error;
- (void)reset;
@end

#endif /* RBSServiceLocalProtocol_Protocol_h */