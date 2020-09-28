/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKPluggedInMonitor : _DKMonitor {

	BOOL _enabled;
	int _pluggedInToken;

}

@property (assign,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int pluggedInToken;              //@synthesize pluggedInToken=_pluggedInToken - In the implementation block
+(id)entitlements;
+(id)_eventWithState:(BOOL)arg1 adapterType:(long long)arg2 isWireless:(BOOL)arg3 ;
+(void)setIsPluggedIn:(BOOL)arg1 ;
+(BOOL)shouldMergeUnchangedEvents;
+(id)eventStream;
-(void)synchronouslyReflectCurrentValue;
-(long long)currentAdapterType:(BOOL*)arg1 ;
-(void)setCurrentState;
-(int)pluggedInToken;
-(void)dealloc;
-(BOOL)enabled;
-(void)start;
-(void)deactivate;
-(void)setPluggedInToken:(int)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)stop;
@end
