/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceBinaryToggleItemManager.h>

@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	WBSPerSitePreference* _readerPreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * readerPreference;                                 //@synthesize readerPreference=_readerPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg1 ;
-(id)init;
-(void)getAutomaticReaderEnabledByDefaultUsingBlock:(/*^block*/id)arg1 ;
-(WBSPerSitePreference *)readerPreference;
-(void)getAutomaticReaderEnabledForDomain:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(void)getAutomaticReaderStateForDomain:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticReaderEnabled:(BOOL)arg1 forDomain:(id)arg2 ;
-(void)setAutomaticReaderEnabledByDefault:(BOOL)arg1 removingExistingPreferencesForSites:(BOOL)arg2 ;
-(void)submitOptInOutStateForAnalytics;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(id)onValueForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(id)offValueForPreference:(id)arg1 ;
@end

