/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface MapsSuggestionsFakeManager : NSObject <MapsSuggestionsSourceDelegate> {

	ReadWriteQueue _readwrite;
	NSMutableArray* _allCurrentEntries;
	NSMutableDictionary* _currentEntriesPerSource;
	NSObject*<OS_dispatch_semaphore> _sema;

}

@property (retain,readonly) NSMutableArray * allCurrentEntries; 
@property (retain,readonly) NSMutableDictionary * currentEntriesPerSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)detachSource:(id)arg1 ;
-(unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2 ;
-(id)init;
-(BOOL)attachSource:(id)arg1 ;
-(NSMutableArray *)allCurrentEntries;
-(NSMutableDictionary *)currentEntriesPerSource;
-(void)prepareWait;
-(BOOL)waitWithTimeout:(double)arg1 ;
@end

