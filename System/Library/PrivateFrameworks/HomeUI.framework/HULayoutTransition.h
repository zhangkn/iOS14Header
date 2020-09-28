/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface HULayoutTransition : NSObject {

	unsigned long long _phase;
	UIView* _view;
	/*^block*/id _setupBlock;
	/*^block*/id _transitionBlock;
	/*^block*/id _completionBlock;
	id _fromState;
	id _toState;

}

@property (nonatomic,copy,readonly) id setupBlock;                   //@synthesize setupBlock=_setupBlock - In the implementation block
@property (nonatomic,copy,readonly) id transitionBlock;              //@synthesize transitionBlock=_transitionBlock - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id fromState;                           //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,retain) id toState;                             //@synthesize toState=_toState - In the implementation block
@property (assign,nonatomic) unsigned long long phase;               //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) UIView * view;                        //@synthesize view=_view - In the implementation block
-(void)setPhase:(unsigned long long)arg1 ;
-(id)completionBlock;
-(id)toState;
-(id)fromState;
-(unsigned long long)phase;
-(void)setToState:(id)arg1 ;
-(id)setupBlock;
-(void)setFromState:(id)arg1 ;
-(UIView *)view;
-(id)init;
-(id)initWithView:(id)arg1 setupBlock:(/*^block*/id)arg2 transitionBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)transitionBlock;
-(void)setupTransitionWithFromState:(id)arg1 toState:(id)arg2 ;
-(void)executeTransition;
-(void)completeTransition;
@end
