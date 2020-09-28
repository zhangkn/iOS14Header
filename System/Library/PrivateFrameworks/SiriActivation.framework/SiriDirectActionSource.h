/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivationSource.h>

@protocol SiriDirectActionSourceDelegate;
@interface SiriDirectActionSource : SiriActivationSource {

	id<SiriDirectActionSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriDirectActionSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<SiriDirectActionSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<SiriDirectActionSourceDelegate>)delegate;
-(void)activateWithContext:(id)arg1 ;
-(void)activateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureConnection;
-(oneway void)canActivateChangedTo:(id)arg1 ;
@end
