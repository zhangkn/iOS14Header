//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSString, NSXPCConnection, UIImage, UIViewController;

@interface FontInstallMainController : SBUIRemoteAlertServiceViewController
{
    UIViewController *_vcNav;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    UIImage *_applicationIconImage;	// 24 = 0x18
    NSString *_applicationName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000a8a0
@property(readonly, retain, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(readonly, retain, nonatomic) UIImage *applicationIconImage; // @synthesize applicationIconImage=_applicationIconImage;
- (void)doneWithInstallFonts:(_Bool)arg1;	// IMP=0x000000010000a6d0
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a4d4
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a330
- (void)connectToEndpoint:(id)arg1;	// IMP=0x000000010000a144
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010000a0cc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000a040
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100009a20

@end
