/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString, NSDate, NSArray;

@interface FCBundleSubscriptionLookUpEntry : NSObject {

	BOOL _hasShownRenewalNotice;
	BOOL _inTrialPeriod;
	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _identifier;
	NSString* _purchaseID;
	NSDate* _dateOfExpiration;
	unsigned long long _purchaseValidationState;
	NSString* _servicesBundlePurchaseID;
	NSArray* _bundleChannelIDs;

}

@property (assign,nonatomic) unsigned long long purchaseValidationState;              //@synthesize purchaseValidationState=_purchaseValidationState - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * bundleChannelIDs;                                //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,copy) NSString * purchaseID;                                     //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * servicesBundlePurchaseID;                       //@synthesize servicesBundlePurchaseID=_servicesBundlePurchaseID - In the implementation block
@property (nonatomic,copy) NSDate * dateOfExpiration;                                 //@synthesize dateOfExpiration=_dateOfExpiration - In the implementation block
@property (assign,nonatomic) BOOL hasShownRenewalNotice;                              //@synthesize hasShownRenewalNotice=_hasShownRenewalNotice - In the implementation block
@property (assign,nonatomic) BOOL inTrialPeriod;                                      //@synthesize inTrialPeriod=_inTrialPeriod - In the implementation block
@property (assign,nonatomic) BOOL isPurchaser;                                        //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (assign,nonatomic) BOOL isAmplifyUser;                                      //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
-(NSString *)identifier;
-(id)initWithEntryID:(id)arg1 bundleChannelIDs:(id)arg2 purchaseID:(id)arg3 purchaseValidationState:(unsigned long long)arg4 dateOfExpiration:(id)arg5 hasShownRenewalNotice:(BOOL)arg6 inTrialPeriod:(BOOL)arg7 isPurchaser:(BOOL)arg8 servicesBundlePurchaseID:(id)arg9 isAmplifyUser:(BOOL)arg10 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setBundleChannelIDs:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setServicesBundlePurchaseID:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIsPurchaser:(BOOL)arg1 ;
-(id)bundleSubscription;
-(BOOL)inTrialPeriod;
-(void)setInTrialPeriod:(BOOL)arg1 ;
-(void)setDateOfExpiration:(NSDate *)arg1 ;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(unsigned long long)purchaseValidationState;
-(BOOL)hasShownRenewalNotice;
-(void)setPurchaseValidationState:(unsigned long long)arg1 ;
-(void)setHasShownRenewalNotice:(BOOL)arg1 ;
-(void)setPurchaseID:(NSString *)arg1 ;
-(BOOL)isAmplifyUser;
-(NSString *)purchaseID;
-(NSDate *)dateOfExpiration;
-(NSString *)servicesBundlePurchaseID;
-(void)setIsAmplifyUser:(BOOL)arg1 ;
-(BOOL)isPurchaser;
-(NSArray *)bundleChannelIDs;
-(id)description;
-(id)dictionaryRepresentation;
@end

