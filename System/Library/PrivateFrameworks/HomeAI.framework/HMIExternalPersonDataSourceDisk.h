/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HMIPersonDataSourceDisk.h>
#import <libobjc.A.dylib/HMIExternalPersonManagerDataSource.h>

@class NSString;

@interface HMIExternalPersonDataSourceDisk : HMIPersonDataSourceDisk <HMIExternalPersonManagerDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)addPersonFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

