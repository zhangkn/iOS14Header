/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBTransientOverlayTransitionCoordinating.h>

@class NSString;

@interface SBTransientOverlayBlockTransitionCoordinator : NSObject <SBTransientOverlayTransitionCoordinating> {

	/*^block*/id _startTransitionHandler;
	/*^block*/id _finalizeTransitionHandler;

}

@property (nonatomic,copy) id startTransitionHandler;                 //@synthesize startTransitionHandler=_startTransitionHandler - In the implementation block
@property (nonatomic,copy) id finalizeTransitionHandler;              //@synthesize finalizeTransitionHandler=_finalizeTransitionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStartTransitionHandler:(id)arg1 ;
-(void)setFinalizeTransitionHandler:(id)arg1 ;
-(void)finalizeTransitionWithContextProvider:(id)arg1 ;
-(void)startTransitionWithContextProvider:(id)arg1 ;
-(id)startTransitionHandler;
-(id)finalizeTransitionHandler;
@end

