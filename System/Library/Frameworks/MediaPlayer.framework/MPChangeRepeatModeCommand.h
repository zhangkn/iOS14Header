/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeRepeatModeCommand : MPRemoteCommand {

	NSArray* _supportedRepeatTypes;
	long long _currentRepeatType;

}

@property (assign,nonatomic) long long currentRepeatType;              //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(long long)currentRepeatType;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(BOOL)arg2 ;
-(id)newCommandEventWithType:(long long)arg1 ;
-(void)setSupportedRepeatTypes:(id)arg1 ;
@end

