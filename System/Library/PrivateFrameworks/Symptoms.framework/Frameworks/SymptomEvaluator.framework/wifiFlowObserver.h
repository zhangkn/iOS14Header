/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/flowDispositionObserver.h>

@class NSDate, ManagedEventHandler, NSString;

@interface wifiFlowObserver : NSObject <flowDispositionObserver> {

	wifiPropertyCounts _foregroundCounts;
	wifiPropertyCounts _backgroundCounts;
	unsigned _dampeningMsecs;
	NSDate* _lastReportTimestamp;
	BOOL _dampening;
	unsigned _seqno;
	ManagedEventHandler* _managedEventHandler;
	BOOL _enabled;
	BOOL _foreground;

}

@property (assign,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL foreground;                       //@synthesize foreground=_foreground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setForeground:(BOOL)arg1 ;
-(id)infoDir;
-(BOOL)foreground;
-(BOOL)addClassification:(id)arg1 context:(wifiPropertyCounts*)arg2 ;
-(BOOL)enabled;
-(id)init;
-(void)configurePolicies:(id)arg1 ;
-(unsigned)noteFlow:(id)arg1 snapshot:(id)arg2 present:(BOOL)arg3 trackedBy:(id)arg4 ;
-(void)_noteNewUsage;
-(BOOL)removeClassification:(id)arg1 context:(wifiPropertyCounts*)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3 ;
-(NSString *)description;
@end
