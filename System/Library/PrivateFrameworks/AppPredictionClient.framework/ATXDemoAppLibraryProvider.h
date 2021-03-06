/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXDemoAppLibraryProvider : NSObject
+(id)_defaults;
+(BOOL)isAppCategoryDemoModeEnabled;
+(id)demoAppCategoriesForRealAppCategories:(id)arg1 ;
+(BOOL)isSuggestionsAndRecentsDemoModeEnabled;
+(id)demoSuggestionsAndRecents;
+(void)_registerDefaultsForSuggestionsAndRecents:(id)arg1 ;
+(id)_getBundleIdsForPrefix:(id)arg1 inDefaults:(id)arg2 ;
+(void)_registerDefaultsForAppCategories:(id)arg1 ;
+(id)_categoryForIndex:(long long)arg1 inDefaults:(id)arg2 realCategories:(id)arg3 ;
@end

