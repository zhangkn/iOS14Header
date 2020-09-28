/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBacklightMonitor : _DKMonitor {

	int notifyToken;

}
+(id)entitlements;
+(BOOL)indicatesScreenOnWithNotificationState:(id)arg1 ;
+(id)_eventWithState:(id)arg1 ;
+(BOOL)shouldMergeUnchangedEvents;
+(void)setIsBacklit:(BOOL)arg1 ;
+(id)eventStream;
-(void)synchronouslyReflectCurrentValue;
-(void)obtainCurrentValue;
-(void)dealloc;
-(void)start;
-(void)deactivate;
-(void)stop;
@end
