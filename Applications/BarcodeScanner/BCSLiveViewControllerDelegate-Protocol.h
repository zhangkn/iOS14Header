//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BCSLiveViewController;

@protocol BCSLiveViewControllerDelegate <NSObject>
- (void)liveViewController:(BCSLiveViewController *)arg1 torchModeChangedTo:(_Bool)arg2;
- (_Bool)liveViewControllerTorchModeSupported:(BCSLiveViewController *)arg1;
- (void)liveViewController:(BCSLiveViewController *)arg1 didTapAtDevicePoint:(struct CGPoint)arg2;
- (void)liveViewControllerDidResetCapture:(BCSLiveViewController *)arg1;
- (void)liveViewControllerWillPerformAction:(BCSLiveViewController *)arg1;
@end

