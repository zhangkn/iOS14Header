/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSSet, NSUserDefaults, SGContentAdmissionKVOObserver;

@interface SGContentAdmission : NSObject {

	NSSet* _disabledBundleIdentifiers;
	NSUserDefaults* _defaults;
	SGContentAdmissionKVOObserver* _kvoObserver;

}
+(id)sharedInstance;
+(void)initialize;
+(BOOL)isSupportedSearchableItemBundleIdentifier:(id)arg1 ;
+(BOOL)shouldAdmitContentFromBundleIdentifier:(id)arg1 ;
+(void)clearTestSettings;
+(void)disableBundleIdentifier:(id)arg1 ;
+(void)migrateForTests;
-(void)_clearTestSettings;
-(BOOL)_shouldAdmitContentFromBundleIdentifier:(id)arg1 ;
-(void)_disableBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)_migrateIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_refreshDisabledBundleIds;
@end
