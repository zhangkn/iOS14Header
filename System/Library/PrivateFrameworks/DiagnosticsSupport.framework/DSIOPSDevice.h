/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@class NSDictionary;

@interface DSIOPSDevice : NSObject {

	NSDictionary* _info;

}

@property (nonatomic,retain) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(id)deviceWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(NSDictionary *)info;
-(id)serialNumber;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)information;
-(id)initWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
@end

