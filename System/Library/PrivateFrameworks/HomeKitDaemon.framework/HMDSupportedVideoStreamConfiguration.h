/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface HMDSupportedVideoStreamConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSDictionary* _codecConfigurations;

}

@property (nonatomic,copy,readonly) NSDictionary * codecConfigurations;              //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)codecConfigurations;
-(BOOL)_parseFromTLVData;
-(id)initWithCodecConfigurations:(id)arg1 ;
@end

