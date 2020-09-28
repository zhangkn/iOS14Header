/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSString;

@interface MCDNowPlayingObserver : NSObject {

	NSHashTable* _observers;
	unsigned _playbackState;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                 //@synthesize playbackState=_playbackState - In the implementation block
+(id)sharedInstance;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_notifyObservers;
-(unsigned)playbackState;
-(unsigned)queryPlaybackState;
-(void)playbackStateChanged:(id)arg1 ;
@end
