/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MapsSuggestionsSignalPackCache : NSObject {

	NSMutableArray* _mapItems;
	NSMutableArray* _signalPacks;
	NSMutableArray* _entries;

}
-(BOOL)insertMapItem:(id)arg1 signalPack:(id)arg2 entry:(id)arg3 ;
-(id)signalPackForMapItem:(id)arg1 ;
-(id)init;
@end

