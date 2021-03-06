/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhoneNumberResolver.framework/PhoneNumberResolver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSCache;

@interface PNRResourceManager : NSObject {

	NSDate* _lastCatalogLoadTime;
	unsigned _catalogLoadRetryMultiplier;
	NSCache* _fileDataCache;

}
+(id)sharedManager;
-(id)init;
-(id)_lastCatalogLoadTime;
-(void)_updateCatalogAfterDelay:(double)arg1 ;
-(id)openCountryCodeFile;
-(BOOL)_lookupString:(id)arg1 inTrieMemory:(void*)arg2 value:(unsigned*)arg3 ;
-(id)openNANPFile;
-(id)openPNRFileForPrefix:(id)arg1 ;
-(id)openPNRSFileForPrefix:(id)arg1 ;
-(id)_bestStringForInCountryPhoneNumber:(id)arg1 phoneNumberCC:(id)arg2 countryOfDevice:(id)arg3 countryTrieData:(id)arg4 countryStrings:(id)arg5 ;
-(id)_checkCacheForAssetName:(id)arg1 ;
-(id)_URLForInstalledResourceOfType:(id)arg1 ;
-(id)_readAndCacheDataFrom:(id)arg1 forAssetName:(id)arg2 zeroCacheCost:(BOOL)arg3 ;
-(id)openLatestAssetWithBasename:(id)arg1 maType:(id)arg2 ;
-(id)_assetQueryForPNRResource:(id)arg1 ;
-(id)_localFileURLForMAQuery:(id)arg1 queryResult:(long long)arg2 ;
-(void)_updateCatalog;
-(void)_catalogDownloadFinishedWithResult:(long long)arg1 ;
-(void)_setLastCatalogLoadTime:(id)arg1 ;
-(id)lookupCCForPhoneNumber:(id)arg1 ;
-(id)lookupISOCountryCodeFromNANPNumber:(id)arg1 ;
-(id)lookupStringForPhoneNumber:(id)arg1 inCC:(id)arg2 countryCodeOfDevice:(id)arg3 ;
-(void)catalogLoadThen:(/*^block*/id)arg1 ;
@end

