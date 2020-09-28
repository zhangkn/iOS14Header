//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "SUClientInterfaceDelegate-Protocol.h"
#import "ServiceAccountPageEmbeddedParent-Protocol.h"
#import "UIAdaptivePresentationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, NSURL, SUClientInterface, UIViewController;

@interface ServiceWebViewPromptViewController : SBUIRemoteAlertServiceViewController <SUClientInterfaceDelegate, ServiceAccountPageEmbeddedParent, UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _shouldUseAMS;	// 8 = 0x8
    _Bool _viewControllerShown;	// 9 = 0x9
    SUClientInterface *_clientInterface;	// 16 = 0x10
    UIViewController *_underlyingViewController;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
}

+ (id)_generateClientInterface;	// IMP=0x0000000100018ac4
- (void).cxx_destruct;	// IMP=0x0000000100019404
@property(nonatomic) _Bool viewControllerShown; // @synthesize viewControllerShown=_viewControllerShown;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIViewController *underlyingViewController; // @synthesize underlyingViewController=_underlyingViewController;
@property(nonatomic) _Bool shouldUseAMS; // @synthesize shouldUseAMS=_shouldUseAMS;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (id)_viewControllerForType:(long long)arg1;	// IMP=0x0000000100018f70
- (id)_sanitizedURL;	// IMP=0x0000000100018d0c
- (void)_presentViewController;	// IMP=0x0000000100018bbc
- (void)_dismiss;	// IMP=0x00000001000189b4
- (void)_determineTypeForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001873c
- (id)_bag;	// IMP=0x000000010001865c
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000001000185d0
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000001000185c4
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000001000185bc
- (void)attemptDismissHostViewController;	// IMP=0x0000000100018568
- (void)dismissHostViewController;	// IMP=0x000000010001855c
- (_Bool)shouldAutorotate;	// IMP=0x0000000100018500
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000184a0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000183a8
- (void)_willAppearInRemoteViewController;	// IMP=0x000000010001830c
- (void)viewDidLoad;	// IMP=0x000000010001826c
- (void)handleHomeButtonPressed;	// IMP=0x0000000100018260
- (void)handleButtonActions:(id)arg1;	// IMP=0x000000010001812c
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017f44
- (void)dealloc;	// IMP=0x0000000100017f10
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100017e54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
