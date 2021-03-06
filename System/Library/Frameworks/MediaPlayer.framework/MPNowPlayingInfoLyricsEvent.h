/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, MPNowPlayingInfoLyricsItemToken;

@interface MPNowPlayingInfoLyricsEvent : NSObject {

	void* _mediaRemoteLyricsEvent;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsEvent;                         //@synthesize mediaRemoteLyricsEvent=_mediaRemoteLyricsEvent - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) MPNowPlayingInfoLyricsItemToken * token; 
-(void)dealloc;
-(MPNowPlayingInfoLyricsItemToken *)token;
-(void*)mediaRemoteLyricsEvent;
-(id)initWithMediaRemoteLyricsEvent:(void*)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
@end

