/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSMobileAssetControllerDelegate <NSObject>
@optional
-(BOOL)mobileAssetControllerShouldPerformScheduledUpdate:(id)arg1;

@required
-(void)mobileAssetController:(id)arg1 didBecomeAvailable:(id)arg2;
-(void)mobileAssetController:(id)arg1 didDownload:(id)arg2;
-(void)mobileAssetController:(id)arg1 didFailDownload:(id)arg2;
-(void)mobileAssetController:(id)arg1 didFailCatalogDownload:(id)arg2;
-(void)mobileAssetController:(id)arg1 didFailRetrieve:(id)arg2;

@end
