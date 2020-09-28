/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>

@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {

	const char* _notificationName;
	int _notificationToken;

}
-(id)initWithName:(id)arg1 ;
-(void)didRemoveLastObserver;
-(void)dealloc;
-(void)didAddFirstObserver;
-(id)initWithNotificationName:(const char*)arg1 ;
-(id)initWithNotificationName:(const char*)arg1 triggerName:(id)arg2 ;
-(const char*)notificationName;
@end
