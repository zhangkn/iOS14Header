/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXMutableVideoSession <NSObject>
@property (assign,nonatomic) SCD_Struct_PX9 playbackTimeRange; 
@property (assign,nonatomic) BOOL seekToBeginningAtEnd; 
@property (assign,getter=isLoopingEnabled,nonatomic) BOOL loopingEnabled; 
@property (assign,nonatomic) long long desiredPlayState; 
@property (assign,nonatomic) BOOL preventsSleepDuringVideoPlayback; 
@property (assign,nonatomic) BOOL allowsExternalPlayback; 
@required
-(void)setDesiredPlayState:(long long)arg1;
-(BOOL)preventsSleepDuringVideoPlayback;
-(SCD_Struct_PX9)playbackTimeRange;
-(BOOL)seekToBeginningAtEnd;
-(BOOL)allowsExternalPlayback;
-(long long)desiredPlayState;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1;
-(void)setAllowsExternalPlayback:(BOOL)arg1;
-(void)setVolume:(float)arg1 withFade:(BOOL)arg2;
-(void)setSeekToBeginningAtEnd:(BOOL)arg1;
-(void)setPlaybackTimeRange:(SCD_Struct_PX9)arg1;
-(void)setAudioSessionCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4;
-(void)setLoopingEnabled:(BOOL)arg1;
-(BOOL)isLoopingEnabled;

@end

