/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTAssetProcessor, RTDefaultsManager, RTXPCActivityManager;

@interface RTAssetManager : RTService {

	RTAssetProcessor* _assetProcessor;
	RTDefaultsManager* _defaultsManager;
	RTXPCActivityManager* _xpcActivityManager;

}

@property (nonatomic,retain) RTAssetProcessor * assetProcessor;                      //@synthesize assetProcessor=_assetProcessor - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTXPCActivityManager * xpcActivityManager;              //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(BOOL)nonUserInitiatedDownloadsAllowed;
-(void)_shutdown;
-(void)setXpcActivityManager:(RTXPCActivityManager *)arg1 ;
-(id)init;
-(RTXPCActivityManager *)xpcActivityManager;
-(id)initWithDefaultsManager:(id)arg1 assetProcessor:(id)arg2 xpcActivityManager:(id)arg3 ;
-(id)defaultXPCActivityCriteria;
-(void)performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_finalizeAssetUpdateOperationWithError:(id)arg1 ;
-(void)_performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultCatalogDownloadOptions;
-(void)_handleCatalogDownloadWithType:(id)arg1 downloadResult:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_handleMetadataQueryResult:(long long)arg1 assetQuery:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)latestAssetFromAssets:(id)arg1 ;
-(void)_downloadAsset:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)defaultAssetDownloadOptions;
-(void)_handleAssetDownloadResult:(long long)arg1 asset:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_installAsset:(id)arg1 fileManager:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)forceUpdateAssetMetadataWithHandler:(/*^block*/id)arg1 ;
-(void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTAssetProcessor *)assetProcessor;
-(void)setAssetProcessor:(RTAssetProcessor *)arg1 ;
@end
