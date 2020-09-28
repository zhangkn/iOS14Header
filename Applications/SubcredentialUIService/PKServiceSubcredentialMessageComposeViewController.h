//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "PKServiceSubcredentialMessageComposeViewControllerProtocol-Protocol.h"

@class MFMessageComposeViewController, NSString;

@interface PKServiceSubcredentialMessageComposeViewController : UIViewController <PKServiceSubcredentialMessageComposeViewControllerProtocol, MFMessageComposeViewControllerDelegate>
{
    MFMessageComposeViewController *_messageComposeViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100001760
+ (id)_exportedInterface;	// IMP=0x000000010000175c
- (void).cxx_destruct;	// IMP=0x0000000100001f78
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x0000000100001ee8
- (void)setSharingRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000187c
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000100001774
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010000176c
- (_Bool)shouldAutorotate;	// IMP=0x0000000100001764
- (id)init;	// IMP=0x00000001000016dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
