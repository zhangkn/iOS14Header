/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegSecureAccountWebViewController.h>

@protocol CNFRegViewAccountControllerDelegate;
@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController {

	id<CNFRegViewAccountControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CNFRegViewAccountControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)bagKey;
-(void)dealloc;
-(id)logName;
-(void)setDelegate:(id<CNFRegViewAccountControllerDelegate>)arg1 ;
-(id<CNFRegViewAccountControllerDelegate>)delegate;
-(void)cancelTapped;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
@end

