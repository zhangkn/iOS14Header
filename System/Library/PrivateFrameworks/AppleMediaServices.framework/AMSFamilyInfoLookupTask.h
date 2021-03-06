/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class ACAccount, NSString;

@interface AMSFamilyInfoLookupTask : AMSTask <AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSString* _logKey;

}

@property (nonatomic,readonly) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSString * logKey;                     //@synthesize logKey=_logKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfileVersion;
+(id)bagSubProfile;
+(id)bagKeySet;
+(id)createBagForSubProfile;
+(id)_processURLResult:(id)arg1 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithBagContract:(id)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithBag:(id)arg1 ;
-(id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_pathForCachedFamilyInfoLookupResult;
-(id)_cachedFamilyInfoLookupResultForAccount:(id)arg1 ;
-(id)_currentCachedFamilyInfo;
-(void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2 ;
-(id)performFamilyInfoLookup;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
@end

