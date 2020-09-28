/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIViewSpringAnimationDescription : NSObject {

	BOOL _usesDampingRatioAndResponse;
	double _tension;
	double _friction;
	SCD_Struct_UI155 _parameters;

}

@property (assign,nonatomic) BOOL usesDampingRatioAndResponse;              //@synthesize usesDampingRatioAndResponse=_usesDampingRatioAndResponse - In the implementation block
@property (assign,nonatomic) double tension;                                //@synthesize tension=_tension - In the implementation block
@property (assign,nonatomic) double friction;                               //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI155 parameters;                   //@synthesize parameters=_parameters - In the implementation block
+(id)descriptionWithSpringAnimationParameters:(SCD_Struct_UI155)arg1 ;
+(id)descriptionWithTension:(double)arg1 friction:(double)arg2 ;
-(double)friction;
-(void)setParameters:(SCD_Struct_UI155)arg1 ;
-(SCD_Struct_UI155)parameters;
-(void)setFriction:(double)arg1 ;
-(BOOL)usesDampingRatioAndResponse;
-(void)setUsesDampingRatioAndResponse:(BOOL)arg1 ;
-(void)setTension:(double)arg1 ;
-(double)tension;
@end
