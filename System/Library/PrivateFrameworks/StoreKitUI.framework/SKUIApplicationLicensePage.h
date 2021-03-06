/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SKUIApplicationLicensePage : NSObject <NSCopying> {

	NSString* _licenseAgreementHTML;
	NSString* _title;

}

@property (nonatomic,copy) NSString * licenseAgreementHTML;              //@synthesize licenseAgreementHTML=_licenseAgreementHTML - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLicenseAgreementHTML:(NSString *)arg1 ;
-(NSString *)licenseAgreementHTML;
@end

