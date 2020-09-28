/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFPlaybackStackController;
@class MPCMediaFoundationTranslator, MPCPlaybackEngine;

@interface MPCPlayerItemConfigurator : NSObject {

	long long _defaultEQPresetType;
	MPCMediaFoundationTranslator* _translator;
	id<MFPlaybackStackController> _stackController;
	MPCPlaybackEngine* _playbackEngine;

}

@property (assign,nonatomic) long long defaultEQPresetType;                                       //@synthesize defaultEQPresetType=_defaultEQPresetType - In the implementation block
@property (nonatomic,__weak,readonly) MPCMediaFoundationTranslator * translator;                  //@synthesize translator=_translator - In the implementation block
@property (nonatomic,__weak,readonly) id<MFPlaybackStackController> stackController;              //@synthesize stackController=_stackController - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                         //@synthesize playbackEngine=_playbackEngine - In the implementation block
-(MPCPlaybackEngine *)playbackEngine;
-(void)_setupNotifications;
-(void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(MPCMediaFoundationTranslator *)translator;
-(void)configurePlayerItem:(id)arg1 ;
-(id)initWithPlaybackEngine:(id)arg1 stackController:(id)arg2 translator:(id)arg3 ;
-(long long)defaultEQPresetType;
-(void)setDefaultEQPresetType:(long long)arg1 ;
-(id<MFPlaybackStackController>)stackController;
@end
