/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUAnimationGroup.h>

@interface PUTimedAnimationGroup : PUAnimationGroup {

	BOOL _areAnimationsPaused;
	double _pausedElapsedTime;
	double _beginTime;

}

@property (assign,nonatomic) double beginTime;                  //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,readonly) double currentTime; 
-(void)setBeginTime:(double)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)updateAnimations;
-(double)elapsedTime;
-(double)beginTime;
-(id)init;
-(double)currentTime;
-(void)pauseAnimations;
-(void)resumeAnimations;
-(void)_update;
@end

