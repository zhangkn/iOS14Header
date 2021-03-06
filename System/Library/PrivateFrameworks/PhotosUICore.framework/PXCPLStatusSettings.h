/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXCPLStatusSettings : PXSettings {

	BOOL _cloudQuotaOfferIncludeAssetCounts;
	long long _cloudQuotaOfferLevel;

}

@property (assign,nonatomic) long long cloudQuotaOfferLevel;                      //@synthesize cloudQuotaOfferLevel=_cloudQuotaOfferLevel - In the implementation block
@property (assign,nonatomic) BOOL cloudQuotaOfferIncludeAssetCounts;              //@synthesize cloudQuotaOfferIncludeAssetCounts=_cloudQuotaOfferIncludeAssetCounts - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setCloudQuotaOfferIncludeAssetCounts:(BOOL)arg1 ;
-(void)setCloudQuotaOfferLevel:(long long)arg1 ;
-(BOOL)cloudQuotaOfferIncludeAssetCounts;
-(long long)cloudQuotaOfferLevel;
-(id)parentSettings;
@end

