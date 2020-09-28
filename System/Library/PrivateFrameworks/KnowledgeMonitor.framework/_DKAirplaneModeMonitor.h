/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/KnowledgeMonitor-Structs.h>
#import <KnowledgeMonitor/_DKMonitor.h>

@class NSNumber;

@interface _DKAirplaneModeMonitor : _DKMonitor {

	NSNumber* _airplaneModeStatus;
	SCPreferencesRef _radioPrefs;

}

@property (nonatomic,retain) NSNumber * airplaneModeStatus;              //@synthesize airplaneModeStatus=_airplaneModeStatus - In the implementation block
@property (assign) SCPreferencesRef radioPrefs;                          //@synthesize radioPrefs=_radioPrefs - In the implementation block
+(id)_eventWithState:(BOOL)arg1 ;
+(id)eventStream;
-(SCPreferencesRef)radioPrefs;
-(void)dealloc;
-(void)start;
-(void)deactivate;
-(void)setRadioPrefs:(SCPreferencesRef)arg1 ;
-(NSNumber *)airplaneModeStatus;
-(void)setAirplaneModeStatus:(NSNumber *)arg1 ;
-(void)updateAirplaneModeStatus;
-(void)stop;
@end
