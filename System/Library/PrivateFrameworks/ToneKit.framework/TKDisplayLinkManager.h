/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink, NSMutableDictionary;

@interface TKDisplayLinkManager : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _activeObservers;
	NSMutableDictionary* _updatedObservers;
	BOOL _hasUpdatedObservers;
	BOOL _isHandlingDisplayRefresh;
	unsigned long long _warmUpModeRequirementsCount;

}

@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
+(void)_releaseCurrentDisplayLinkManager;
+(id)currentDisplayLinkManager;
-(double)duration;
-(void)dealloc;
-(double)timestamp;
-(BOOL)isPaused;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
-(id)_displayLink;
-(id)init;
-(void)_setDisplayLink:(id)arg1 ;
-(void)removeObserverWithToken:(id)arg1 ;
-(id)addObserverForFrameInterval:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)_prepareUpdatedObserversForModification;
-(void)_didAddFirstObserver;
-(void)_didRemoveLastObserver;
-(BOOL)_isWarmUpModeEnabled;
-(id)addObserverWithHandler:(/*^block*/id)arg1 ;
@end

