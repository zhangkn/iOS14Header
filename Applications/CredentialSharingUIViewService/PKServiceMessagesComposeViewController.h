//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "PKServiceShareableCredentialsMessageComposeViewControllerProtocol-Protocol.h"

@class MFMessageComposeViewController, NSString, PKAddTicketConfiguration;

@interface PKServiceMessagesComposeViewController : UIViewController <PKServiceShareableCredentialsMessageComposeViewControllerProtocol, MFMessageComposeViewControllerDelegate>
{
    PKAddTicketConfiguration *_configuration;	// 8 = 0x8
    MFMessageComposeViewController *_messageComposeViewController;	// 16 = 0x10
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100001798
+ (id)_exportedInterface;	// IMP=0x0000000100001794
- (void).cxx_destruct;	// IMP=0x0000000100001e84
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x0000000100001e14
- (void)setConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100001950
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000100001848
- (void)_hostApplicationDidEnterBackground;	// IMP=0x0000000100001814
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000001000017e0
- (void)loadView;	// IMP=0x00000001000017ac
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000001000017a4
- (_Bool)shouldAutorotate;	// IMP=0x000000010000179c
- (id)init;	// IMP=0x0000000100001714

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

