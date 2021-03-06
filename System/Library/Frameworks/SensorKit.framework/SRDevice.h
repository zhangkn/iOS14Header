/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SRDevice : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _model;
	NSString* _systemName;
	NSString* _systemVersion;
	NSString* _internalProductType;
	NSString* _deviceIdentifier;
	NSString* _buildVersion;

}

@property (copy) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (copy) NSString * buildVersion;                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (copy,readonly) NSString * systemName;                 //@synthesize systemName=_systemName - In the implementation block
@property (copy,readonly) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentDevice;
-(NSString *)deviceIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)systemVersion;
-(id)sr_dictionaryRepresentation;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)model;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)_productType;
-(NSString *)name;
-(NSString *)buildVersion;
-(id)description;
-(NSString *)systemName;
-(id)initWithDeviceDetails:(id)arg1 ;
@end

