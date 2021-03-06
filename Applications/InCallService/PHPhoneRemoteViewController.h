//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@protocol PHInCallBackgroundStyleProtocol, PHPhoneRemoteViewControllerDelegate;

@interface PHPhoneRemoteViewController : _UIRemoteViewController
{
    id <PHPhoneRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
    id <PHInCallBackgroundStyleProtocol> _backgroundStyleDelegate;	// 16 = 0x10
}

+ (id)serviceBundleIdentifier;	// IMP=0x00000001000940d8
+ (id)viewControllerClassName;	// IMP=0x00000001000940d0
+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x0000000100093f38
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100093de8
+ (_Bool)isSupported;	// IMP=0x0000000100093de0
- (void).cxx_destruct;	// IMP=0x0000000100094150
@property(nonatomic) __weak id <PHInCallBackgroundStyleProtocol> backgroundStyleDelegate; // @synthesize backgroundStyleDelegate=_backgroundStyleDelegate;
@property(nonatomic) __weak id <PHPhoneRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long backgroundStyle;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100094058
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100093fcc
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000100093f40

@end

