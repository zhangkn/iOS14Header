/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString;

@interface FCBundleEntitlementsProviderResult : NSObject {

	BOOL _inTrialPeriod;
	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _bundlePurchaseID;
	NSString* _servicesBundlePurchaseID;

}

@property (nonatomic,readonly) NSString * bundlePurchaseID;                      //@synthesize bundlePurchaseID=_bundlePurchaseID - In the implementation block
@property (nonatomic,readonly) NSString * servicesBundlePurchaseID;              //@synthesize servicesBundlePurchaseID=_servicesBundlePurchaseID - In the implementation block
@property (nonatomic,readonly) BOOL inTrialPeriod;                               //@synthesize inTrialPeriod=_inTrialPeriod - In the implementation block
@property (nonatomic,readonly) BOOL isPurchaser;                                 //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (nonatomic,readonly) BOOL isAmplifyUser;                               //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)inTrialPeriod;
-(BOOL)isAmplifyUser;
-(NSString *)servicesBundlePurchaseID;
-(BOOL)isPurchaser;
-(NSString *)bundlePurchaseID;
-(id)initWithBundlePurchaseID:(id)arg1 inTrialPeriod:(BOOL)arg2 isPurchaser:(BOOL)arg3 servicesBundlePurchaseID:(id)arg4 isAmplifyUser:(BOOL)arg5 ;
@end

