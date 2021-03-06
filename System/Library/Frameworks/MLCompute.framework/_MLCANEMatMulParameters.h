/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _MLCANEMatMulParameters : NSObject {

	NSDictionary* _matMulParams;
	NSDictionary* _gocParams;

}

@property (nonatomic,retain,readonly) NSDictionary * matMulParams;              //@synthesize matMulParams=_matMulParams - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * gocParams;                 //@synthesize gocParams=_gocParams - In the implementation block
+(id)matMulUnitParametersWith:(id)arg1 gocParams:(id)arg2 ;
-(id)initWithMatMulParams:(id)arg1 gocParams:(id)arg2 ;
-(NSDictionary *)matMulParams;
-(NSDictionary *)gocParams;
@end

