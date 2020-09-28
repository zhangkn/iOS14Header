/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Navigation-iOS.feature/Navigation-iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ACCiAP2ShimAccessory, ACCNavigationAccessory, NSObject;

@interface ACCNavigationShimAccessory : NSObject {

	ACCiAP2ShimAccessory* _iap2ShimAccessory;
	ACCNavigationAccessory* _navigationAccessory;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> processingQueue;                        //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,retain) ACCiAP2ShimAccessory * iap2ShimAccessory;                  //@synthesize iap2ShimAccessory=_iap2ShimAccessory - In the implementation block
@property (nonatomic,retain) ACCNavigationAccessory * navigationAccessory;              //@synthesize navigationAccessory=_navigationAccessory - In the implementation block
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)description;
-(ACCiAP2ShimAccessory *)iap2ShimAccessory;
-(void)setIap2ShimAccessory:(ACCiAP2ShimAccessory *)arg1 ;
-(id)create_xpc_representation;
-(ACCNavigationAccessory *)navigationAccessory;
-(void)setNavigationAccessory:(ACCNavigationAccessory *)arg1 ;
@end
