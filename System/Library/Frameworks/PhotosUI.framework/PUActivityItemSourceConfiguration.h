/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class PHAssetExportRequestOptions, PHAsset, NSDictionary, NSString;

@interface PUActivityItemSourceConfiguration : NSObject {

	BOOL _requiresAssetExport;
	SCD_Struct_PU13 _sharingPreferences;
	unsigned long long _maxFileSizeLimit;
	long long _outputType;
	long long _assetExportKind;
	PHAssetExportRequestOptions* _assetExportRequestOptions;
	PHAsset* _asset;
	NSDictionary* _sharingVariants;
	NSString* _activityType;

}

@property (nonatomic,retain) PHAsset * asset;                                                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) NSDictionary * sharingVariants;                                           //@synthesize sharingVariants=_sharingVariants - In the implementation block
@property (nonatomic,copy) NSString * activityType;                                                  //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) SCD_Struct_PU13 sharingPreferences;                                     //@synthesize sharingPreferences=_sharingPreferences - In the implementation block
@property (nonatomic,readonly) unsigned long long maxFileSizeLimit;                                  //@synthesize maxFileSizeLimit=_maxFileSizeLimit - In the implementation block
@property (nonatomic,readonly) long long outputType;                                                 //@synthesize outputType=_outputType - In the implementation block
@property (nonatomic,readonly) BOOL requiresAssetExport;                                             //@synthesize requiresAssetExport=_requiresAssetExport - In the implementation block
@property (nonatomic,readonly) long long assetExportKind;                                            //@synthesize assetExportKind=_assetExportKind - In the implementation block
@property (nonatomic,readonly) PHAssetExportRequestOptions * assetExportRequestOptions;              //@synthesize assetExportRequestOptions=_assetExportRequestOptions - In the implementation block
+(BOOL)shouldExcludeAlternateVariantForActivityType:(id)arg1 ;
+(BOOL)supportsAssetLocalIdentifierForActivityType:(id)arg1 ;
+(id)descriptionForAssetExportKind:(long long)arg1 ;
+(id)descriptionForOutputType:(long long)arg1 ;
+(BOOL)isAssetBundleSupportedByActivityType:(id)arg1 ;
+(BOOL)isLivePhotoBundleSupportedByActivityType:(id)arg1 ;
+(id)_activitiesThatDontRequireAssetExport;
+(unsigned long long)maxFileSizeLimitForActivityType:(id)arg1 asset:(id)arg2 ;
+(id)_activitiesThatSupportLivePhotoBundles;
+(id)_activitiesThatSupportAssetBundles;
+(id)_photosInternalActivities;
+(id)_photosActionSheetActivities;
+(id)_systemActivitiesThatDontSupportMomentShareLinks;
+(id)_activitiesThatDontSupportMomentShareLinks;
+(id)_activitiesThatOnlySupportMomentShareLinks;
+(id)_activitiesThatSupportHEIFHEVC;
+(BOOL)shouldProvideAlternateVariantForActivityType:(id)arg1 forAsset:(id)arg2 withAvailableSharingVariants:(id)arg3 ;
+(BOOL)shouldProvideCompatibleFormatForActivityType:(id)arg1 andAvailableSharingVariants:(id)arg2 ;
+(BOOL)isMomentShareLinkSupportedByActivityType:(id)arg1 ;
+(BOOL)isIndividualItemPreparationSupportedByActivityType:(id)arg1 ;
-(NSString *)activityType;
-(void)setActivityType:(NSString *)arg1 ;
-(void)_configure;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(long long)outputType;
-(SCD_Struct_PU13)sharingPreferences;
-(void)setSharingPreferences:(SCD_Struct_PU13)arg1 ;
-(long long)assetExportKind;
-(PHAssetExportRequestOptions *)assetExportRequestOptions;
-(unsigned long long)maxFileSizeLimit;
-(BOOL)requiresAssetExport;
-(id)_videoExportPresetForActivityType:(id)arg1 ;
-(id)initWithAsset:(id)arg1 availableSharingVariants:(id)arg2 activityType:(id)arg3 preferences:(SCD_Struct_PU13)arg4 ;
-(BOOL)_requiresAssetsLibraryURLForAsset:(id)arg1 forActivityType:(id)arg2 ;
-(BOOL)_requiresAssetExportForAsset:(id)arg1 forActivityType:(id)arg2 ;
-(BOOL)_shouldFlattenSlomoVideoForActivityType:(id)arg1 ;
-(id)_videoExportFileTypeForActivityType:(id)arg1 ;
-(id)_customAccessibilityLabel;
-(BOOL)_wantsLivePhotoBundleForActivityType:(id)arg1 ;
-(BOOL)_wantsAssetBundleForActivityType:(id)arg1 ;
-(NSDictionary *)sharingVariants;
-(void)setSharingVariants:(NSDictionary *)arg1 ;
@end

