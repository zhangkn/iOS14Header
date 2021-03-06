/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class AVQueuePlayer, HMCameraProfile, NSArray, HFCameraClipPosition, NSError;


@protocol HFCameraClipPlaying <NSObject>
@property (nonatomic,readonly) AVQueuePlayer * player; 
@property (nonatomic,readonly) HMCameraProfile * cameraProfile; 
@property (nonatomic,retain) NSArray * clips; 
@property (assign,nonatomic,__weak) id<HFCameraClipPlayerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<HFCameraClipScrubbing> scrubber; 
@property (nonatomic,copy) HFCameraClipPosition * currentPosition; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) long long timeControlStatus; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) BOOL hasFatalError; 
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing; 
@required
-(void)setCurrentTime:(double)arg1;
-(void)play;
-(AVQueuePlayer *)player;
-(void)pause;
-(BOOL)isScrubbing;
-(NSArray *)clips;
-(id<HFCameraClipScrubbing>)scrubber;
-(void)setScrubbing:(BOOL)arg1;
-(HFCameraClipPosition *)currentPosition;
-(void)setClips:(id)arg1;
-(NSError *)error;
-(HMCameraProfile *)cameraProfile;
-(void)setCurrentPosition:(id)arg1;
-(void)endScrubbingWithOffset:(double)arg1;
-(void)setDelegate:(id)arg1;
-(double)currentTime;
-(void)removeTimeObserver:(id)arg1;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(long long)timeControlStatus;
-(id<HFCameraClipPlayerDelegate>)delegate;
-(BOOL)hasFatalError;
-(void)setScrubber:(id)arg1;

@end

