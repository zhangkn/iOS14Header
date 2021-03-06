/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:35 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/IrisClipStyle.h>

@interface IrisClipStyleTransition : IrisClipStyle {

	BOOL _buildIntro;
	BOOL _buildOutro;
	BOOL _videoContainedWithinTransitions;
	int _containedTransitionOverlapOffset;

}

@property (nonatomic,readonly) int containedTransitionOverlapOffset;              //@synthesize containedTransitionOverlapOffset=_containedTransitionOverlapOffset - In the implementation block
@property (assign,nonatomic) BOOL buildIntro;                                     //@synthesize buildIntro=_buildIntro - In the implementation block
@property (assign,nonatomic) BOOL buildOutro;                                     //@synthesize buildOutro=_buildOutro - In the implementation block
@property (assign,nonatomic) BOOL videoContainedWithinTransitions;                //@synthesize videoContainedWithinTransitions=_videoContainedWithinTransitions - In the implementation block
-(double)maximumDuration;
-(double)minimumDuration;
-(double)idealDuration;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(int)containedTransitionOverlapOffset;
-(BOOL)videoContainedWithinTransitions;
-(int)minimumPhotoFrameDuration;
-(void)setBuildIntro:(BOOL)arg1 ;
-(void)setVideoContainedWithinTransitions:(BOOL)arg1 ;
-(void)setBuildOutro:(BOOL)arg1 ;
-(NSRange)preferredInTransitionDurationRange;
-(NSRange)preferredOutTransitionDurationRange;
-(BOOL)buildIntro;
-(BOOL)buildOutro;
@end

