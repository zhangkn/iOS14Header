/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MDLTransformOp
@property (nonatomic,readonly) NSString * name; 
@required
-(NSString *)name;
-(/*function pointer*/void**)float4x4AtTime:(double)arg1;
-(/*function pointer*/void**)double4x4AtTime:(double)arg1;
-(BOOL)IsInverseOp;

@end
