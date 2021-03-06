/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKCalendarMonitor : _DKMonitor {

	BOOL _enabled;

}
+(id)entitlements;
+(id)eventStream;
+(id)_eventWithTitle:(id)arg1 interaction:(id)arg2 ;
-(void)dealloc;
-(void)start;
-(void)update;
-(id)init;
-(void)deactivate;
-(void)_receiveDatabaseChangeNotification:(id)arg1 ;
-(void)stop;
@end

