/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShazamKit/SHStore.h>

@class NSString;

@interface SHRemoteStore : SHStore {

	NSString* _partnerName;
	NSString* _installationID;

}

@property (nonatomic,copy,readonly) NSString * partnerName;                 //@synthesize partnerName=_partnerName - In the implementation block
@property (nonatomic,copy,readonly) NSString * installationID;              //@synthesize installationID=_installationID - In the implementation block
+(id)new;
+(BOOL)validatePartnerName:(id)arg1 ;
+(BOOL)validateInstallationID:(id)arg1 ;
-(NSString *)partnerName;
-(id)init;
-(id)createMatcher;
-(NSString *)installationID;
-(id)initWithPartnerName:(id)arg1 ;
-(id)initWithPartnerName:(id)arg1 installationID:(id)arg2 ;
@end
