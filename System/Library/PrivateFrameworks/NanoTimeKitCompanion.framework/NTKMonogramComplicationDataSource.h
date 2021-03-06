/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@class NTKMonogramTimelineEntryModel, NSString;

@interface NTKMonogramComplicationDataSource : NTKComplicationDataSource {

	NTKMonogramTimelineEntryModel* _currentEntry;
	NSString* _monogramText;
	BOOL _listeningForMonogramNotifications;

}
+(BOOL)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)pause;
-(void)dealloc;
-(void)resume;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(void)startListeningForMonogramNotifications;
-(void)stopListeningForMonogramNotifications;
-(void)_handleMonogramTextReload;
-(void)_reloadMonogramText;
-(id)_currentTimelineEntry;
-(BOOL)supportsTapAction;
@end

