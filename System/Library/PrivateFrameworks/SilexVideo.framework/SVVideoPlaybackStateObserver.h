/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoPlaybackStateObserving.h>

@protocol SVPlayerStatusObserving, SVVideoPlaybackPositionObserving, SVPlayerTimeControlStatusObserving;
@class NSError, NFStateMachine, NSString;

@interface SVVideoPlaybackStateObserver : NSObject <SVVideoPlaybackStateObserving> {

	/*^block*/id changeBlock;
	id<SVPlayerStatusObserving> _statusObserver;
	id<SVVideoPlaybackPositionObserving> _playbackPositionObserver;
	id<SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
	NFStateMachine* _stateMachine;
	unsigned long long _state;
	NSError* _error;

}

@property (nonatomic,readonly) id<SVPlayerStatusObserving> statusObserver;                                    //@synthesize statusObserver=_statusObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackPositionObserving> playbackPositionObserver;                 //@synthesize playbackPositionObserver=_playbackPositionObserver - In the implementation block
@property (nonatomic,readonly) id<SVPlayerTimeControlStatusObserving> timeControlStatusObserver;              //@synthesize timeControlStatusObserver=_timeControlStatusObserver - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                                                 //@synthesize stateMachine=_stateMachine - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlaying;
-(NFStateMachine *)stateMachine;
-(id)changeBlock;
-(NSError *)error;
-(void)onChange:(/*^block*/id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(id<SVPlayerTimeControlStatusObserving>)timeControlStatusObserver;
-(id<SVPlayerStatusObserving>)statusObserver;
-(id)initWithStatusObserver:(id)arg1 playbackPositionObserver:(id)arg2 timeControlStatusObserver:(id)arg3 ;
-(id<SVVideoPlaybackPositionObserving>)playbackPositionObserver;
@end

