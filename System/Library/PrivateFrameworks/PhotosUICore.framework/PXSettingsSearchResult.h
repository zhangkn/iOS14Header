/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class _PXSettingsIndexEntry, NSString;

@interface PXSettingsSearchResult : NSObject {

	_PXSettingsIndexEntry* _entry;

}

@property (nonatomic,readonly) _PXSettingsIndexEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(NSString *)subtitle;
-(NSString *)title;
-(id)init;
-(id)_initWithEntry:(id)arg1 ;
-(void)revealInSettingsController:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(_PXSettingsIndexEntry *)entry;
@end

