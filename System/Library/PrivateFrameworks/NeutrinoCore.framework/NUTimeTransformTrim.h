/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUTimeTransformTrim : NUGeometryTransform {

	SCD_Struct_NU6 _beginTime;

}

@property (readonly) SCD_Struct_NU6 beginTime;              //@synthesize beginTime=_beginTime - In the implementation block
-(id)inverseTransform;
-(SCD_Struct_NU6)beginTime;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SCD_Struct_NU6)transformTime:(SCD_Struct_NU6)arg1 ;
-(id)initWithTrimBeginTime:(SCD_Struct_NU6)arg1 ;
@end

