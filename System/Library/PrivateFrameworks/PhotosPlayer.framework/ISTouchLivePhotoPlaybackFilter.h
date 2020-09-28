/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISLivePhotoPlaybackFilter.h>

@class ISDisplayLink, NSDate;

@interface ISTouchLivePhotoPlaybackFilter : ISLivePhotoPlaybackFilter {

	BOOL _touchActive;
	long long __playbackRequestID;
	ISDisplayLink* __displayLink;
	NSDate* __playbackStartDate;

}

@property (assign,setter=_setPlaybackReaquestID:,nonatomic) long long _playbackRequestID;              //@synthesize _playbackRequestID=__playbackRequestID - In the implementation block
@property (assign,setter=_setDisplayLink:,nonatomic) ISDisplayLink * _displayLink;                     //@synthesize _displayLink=__displayLink - In the implementation block
@property (setter=_setPlaybackStartDate:,nonatomic,retain) NSDate * _playbackStartDate;                //@synthesize _playbackStartDate=__playbackStartDate - In the implementation block
@property (assign,getter=isTouchActive,nonatomic) BOOL touchActive;                                    //@synthesize touchActive=_touchActive - In the implementation block
-(void)didPerformChanges;
-(NSDate *)_playbackStartDate;
-(void)_handleDisplayLink;
-(void)reset;
-(long long)_nextPlaybackRequestID;
-(ISDisplayLink *)_displayLink;
-(void)setTouchActive:(BOOL)arg1 ;
-(BOOL)isTouchActive;
-(void)_setPlaybackReaquestID:(long long)arg1 ;
-(long long)_playbackRequestID;
-(void)_setDisplayLink:(id)arg1 ;
-(void)_setPlaybackStartDate:(id)arg1 ;
@end
