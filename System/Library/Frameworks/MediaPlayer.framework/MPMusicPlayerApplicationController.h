/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerController.h>

@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController {

	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,readonly) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(void)beginGeneratingPlaybackNotifications;
-(void)endGeneratingPlaybackNotifications;
-(void)_establishConnectionIfNeeded;
-(void)dealloc;
-(void)onApplicationServerAsync:(/*^block*/id)arg1 ;
-(void)performQueueTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)serviceConnection;
-(void)_clearConnection;
-(void)beginPlaybackAtHostTime:(SCD_Struct_MP5)arg1 ;
-(void)prerollWithCompletion:(/*^block*/id)arg1 ;
@end

