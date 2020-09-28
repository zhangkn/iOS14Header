/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageTransformAffine.h>

@interface NUImageTransformScale : NUImageTransformAffine {

	SCD_Struct_NU7 _scale;

}

@property (readonly) SCD_Struct_NU7 scale;              //@synthesize scale=_scale - In the implementation block
-(SCD_Struct_NU7)scale;
-(id)inverseTransform;
-(id)initWithScale:(SCD_Struct_NU7)arg1 ;
-(BOOL)isIdentityImageTransform;
-(id)initWithAffineTransform:(CGAffineTransform)arg1 ;
@end
