/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTAbstractIDSDevice <NSObject>
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isCloudReachable; 
@required
-(BOOL)isConnected;
-(BOOL)isNearby;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isCloudReachable;

@end
