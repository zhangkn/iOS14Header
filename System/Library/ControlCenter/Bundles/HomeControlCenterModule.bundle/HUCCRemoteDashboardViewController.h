/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HUHomeControlInterface.h>

@protocol HUCCRemoteDashboardDelegate;
@interface HUCCRemoteDashboardViewController : _UIRemoteViewController <HUHomeControlInterface> {

	id<HUCCRemoteDashboardDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUCCRemoteDashboardDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)authorizeIfLocked;
-(void)setDelegate:(id<HUCCRemoteDashboardDelegate>)arg1 ;
-(void)quickControlsPresentationDidUpdate:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id<HUCCRemoteDashboardDelegate>)delegate;
-(BOOL)_canShowWhileLocked;
@end

