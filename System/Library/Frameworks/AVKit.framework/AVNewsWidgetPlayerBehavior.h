/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVBehaviorInternal.h>
#import <AVKit/AVBehavior.h>

@class AVNewsWidgetPlayerBehaviorContext, NSString;

@interface AVNewsWidgetPlayerBehavior : NSObject <AVBehaviorInternal, AVBehavior> {

	AVNewsWidgetPlayerBehaviorContext* _behaviorContext;

}

@property (assign,nonatomic,__weak) AVNewsWidgetPlayerBehaviorContext * behaviorContext;              //@synthesize behaviorContext=_behaviorContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)behaviorContextClass;
-(void)dealloc;
-(void)willMoveToContext:(id)arg1 ;
-(AVNewsWidgetPlayerBehaviorContext *)behaviorContext;
-(void)setBehaviorContext:(AVNewsWidgetPlayerBehaviorContext *)arg1 ;
-(void)didMoveToContext:(id)arg1 ;
-(void)willRemoveFromContext:(id)arg1 ;
-(void)didRemoveFromContext:(id)arg1 ;
-(void)willBeginContentTransition;
-(id)playerForContentTransitionType:(long long)arg1 ;
-(void)didUpdateContentTransitionProgress:(double)arg1 ;
-(void)willCompleteContentTransition;
-(void)didCompleteContentTransition;
-(void)willCancelContentTransition;
-(void)didCancelContentTransition;
-(id)init;
@end
