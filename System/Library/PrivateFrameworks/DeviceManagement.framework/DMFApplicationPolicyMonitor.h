/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSUUID, DMFPolicyRegistration;

@interface DMFApplicationPolicyMonitor : NSObject {

	NSArray* _policyTypes;
	NSUUID* _identifier;
	DMFPolicyRegistration* _registration;

}

@property (nonatomic,copy,readonly) NSArray * policyTypes;                        //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) DMFPolicyRegistration * registration;              //@synthesize registration=_registration - In the implementation block
+(id)_fetchCategoriesForBundleIdentifiers:(id)arg1 withError:(id*)arg2 ;
+(void)_fetchCategoriesForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)createPolicyMonitorWithPolicyChangeHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSUUID *)identifier;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(DMFPolicyRegistration *)registration;
-(void)dealloc;
-(NSArray *)policyTypes;
-(id)_initWithPolicyChangeHandler:(/*^block*/id)arg1 addingRegistration:(BOOL)arg2 ;
-(id)requestPoliciesForBundleIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

