/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/ICQBannerViewDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PXCloudQuotaControllerDelegate;
@class PXCloudQuotaOfferProvider, UIView, NSString;

@interface PXCloudQuotaController : NSObject <PXChangeObserver, ICQBannerViewDelegate, PXSettingsKeyObserver> {

	PXCloudQuotaOfferProvider* _offerProvider;
	UIView* _informationBanner;
	id<PXCloudQuotaControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * informationBanner;                                    //@synthesize informationBanner=_informationBanner - In the implementation block
@property (assign,nonatomic,__weak) id<PXCloudQuotaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_mockOfferLevel;
-(BOOL)_mockOfferIncludeAssetCounts;
-(void)dealloc;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(UIView *)informationBanner;
-(id)init;
-(void)setDelegate:(id<PXCloudQuotaControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id<PXCloudQuotaControllerDelegate>)delegate;
-(id)presentingViewControllerForBannerView:(id)arg1 ;
-(void)setInformationBanner:(UIView *)arg1 ;
-(void)_updateInformationBanner;
@end
