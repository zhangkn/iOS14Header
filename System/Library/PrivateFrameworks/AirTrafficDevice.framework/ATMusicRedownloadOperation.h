/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICMediaRedownloadRequest, ICMediaAssetDownloadRequest;

@interface ATMusicRedownloadOperation : ATStoreDownloadOperation {

	ICMediaRedownloadRequest* _redownloadRequest;
	ICMediaAssetDownloadRequest* _assetDownloadRequest;

}
-(void)cancel;
-(void)finishWithError:(id)arg1 ;
-(void)execute;
-(id)_musicAppBundleID;
-(void)_getICStoreMediaResponseItemWithRequestContext:(id)arg1 playBackEndPointType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

