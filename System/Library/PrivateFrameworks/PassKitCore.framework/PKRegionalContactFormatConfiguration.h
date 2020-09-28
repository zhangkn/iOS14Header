/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKNameComponentFormatConfiguration, PKAddressFormatConfiguration;

@interface PKRegionalContactFormatConfiguration : NSObject <NSSecureCoding> {

	PKNameComponentFormatConfiguration* _nameComponentFormatConfiguration;
	PKAddressFormatConfiguration* _addressFormatConfiguration;

}

@property (nonatomic,readonly) PKNameComponentFormatConfiguration * nameComponentFormatConfiguration;              //@synthesize nameComponentFormatConfiguration=_nameComponentFormatConfiguration - In the implementation block
@property (nonatomic,readonly) PKAddressFormatConfiguration * addressFormatConfiguration;                          //@synthesize addressFormatConfiguration=_addressFormatConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(PKNameComponentFormatConfiguration *)nameComponentFormatConfiguration;
-(PKAddressFormatConfiguration *)addressFormatConfiguration;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
@end
