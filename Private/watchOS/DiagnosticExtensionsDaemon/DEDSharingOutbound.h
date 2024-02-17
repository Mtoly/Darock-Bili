//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDSharingOutbound_h
#define DEDSharingOutbound_h
@import Foundation;

#include "DEDClientProtocol-Protocol.h"
#include "DEDSharingConnection.h"
#include "DEDWorkerProtocol-Protocol.h"

@class NSString, SFSession;
@protocol OS_os_log;

@interface DEDSharingOutbound : NSObject<DEDWorkerProtocol, DEDClientProtocol>

@property (retain) NSString *identifier;
@property (retain) SFSession *session;
@property (weak) DEDSharingConnection *connection;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)transportType;
- (id)initWithID:(id)id withSFSession:(id)sfsession connection:(id)connection;
- (id)basePayloadForCommand:(id)command;
- (void)pingSession:(id)session;
- (void)pongSession:(id)session;
- (void)listAvailableExtensionsForSession:(id)session;
- (void)startDiagnosticWithIdentifier:(id)identifier parameters:(id)parameters session:(id)session;
- (void)startDiagnosticWithIdentifier:(id)identifier parameters:(id)parameters deferRunUntil:(id)until session:(id)session;
- (void)terminateExtension:(id)extension info:(id)info session:(id)session;
- (void)deviceSupportsDiagnosticExtensions:(id)extensions session:(id)session;
- (void)finishedDiagnosticWithIdentifier:(id)identifier result:(id)result session:(id)session;
- (void)getSessionStatusWithSession:(id)session;
- (void)getSessionStateWithSession:(id)session;
- (void)didGetState:(long long)state info:(id)info sessionID:(id)id;
- (void)syncSessionStatusWithSession:(id)session;
- (void)hasCollected:(id)collected isCollecting:(id)collecting inSession:(id)session;
- (void)hasCollected:(id)collected isCollecting:(id)collecting withIdentifiers:(id)identifiers inSession:(id)session;
- (void)adoptFiles:(id)files forSession:(id)session;
- (void)didAdoptFilesWithError:(id)error forSession:(id)session;
- (void)uploadProgress:(unsigned long long)progress total:(unsigned long long)total sessionID:(id)id;
- (void)compressionProgress:(unsigned long long)progress total:(unsigned long long)total sessionID:(id)id;
- (void)commitSession:(id)session;
- (void)didCommitSession:(id)session;
- (void)cancelSession:(id)session;
- (void)scheduleNotificationForSession:(id)session;
- (void)unscheduleNotificationForSession:(id)session;
- (void)addSessionData:(id)data withFilename:(id)filename forSession:(id)session;
- (void)didCancelSession:(id)session;
- (void)loadTextDataForExtensions:(id)extensions localization:(id)localization sessionID:(id)id;
- (void)didLoadTextDataForExtensions:(id)extensions localization:(id)localization session:(id)session;
@end

#endif /* DEDSharingOutbound_h */