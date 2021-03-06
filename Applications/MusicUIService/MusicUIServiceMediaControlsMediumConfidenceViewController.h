//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "MPAVRoutingControllerDelegate-Protocol.h"

@class AVOutputDevice, MPAVRoute, MPAVRoutingController, MPMediaControlsConfiguration, NSObject, NSString, NSXPCConnection;
@protocol MPMediaControlsProtocol, OS_dispatch_semaphore;

@interface MusicUIServiceMediaControlsMediumConfidenceViewController : SBUIRemoteAlertServiceViewController <MPAVRoutingControllerDelegate>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <MPMediaControlsProtocol> _hostProxy;	// 16 = 0x10
    MPMediaControlsConfiguration *_configuration;	// 24 = 0x18
    AVOutputDevice *_candidateOutputDevice;	// 32 = 0x20
    MPAVRoute *_candidateRoute;	// 40 = 0x28
    MPAVRoutingController *_routingController;	// 48 = 0x30
    NSObject<OS_dispatch_semaphore> *_discoverySemaphore;	// 56 = 0x38
    unsigned long long _dismissalReason;	// 64 = 0x40
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0000000100004a84
- (void).cxx_destruct;	// IMP=0x000000010000528c
@property(nonatomic) unsigned long long dismissalReason; // @synthesize dismissalReason=_dismissalReason;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *discoverySemaphore; // @synthesize discoverySemaphore=_discoverySemaphore;
@property(retain, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) MPAVRoute *candidateRoute; // @synthesize candidateRoute=_candidateRoute;
@property(retain, nonatomic) AVOutputDevice *candidateOutputDevice; // @synthesize candidateOutputDevice=_candidateOutputDevice;
@property(retain, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <MPMediaControlsProtocol> hostProxy; // @synthesize hostProxy=_hostProxy;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000100004f90
- (void)handleButtonActions:(id)arg1;	// IMP=0x0000000100004e84
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004a94
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0000000100004a8c
- (void)presentAlert;	// IMP=0x0000000100003d4c
- (void)beginDiscoveryForCandidateRoute;	// IMP=0x0000000100003c1c
- (_Bool)fetchCandidateOutputDevice;	// IMP=0x0000000100003a14
- (void)configurePresentation;	// IMP=0x00000001000039c0
- (id)connectionWithEndpoint:(id)arg1;	// IMP=0x00000001000036a8
- (void)presentErrorAlert;	// IMP=0x0000000100003370
- (void)dismiss;	// IMP=0x00000001000032b8
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000001000032b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100003260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

