/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DRSDampeningConfiguration : NSObject {

	double _hysteresis;
	unsigned long long _countCap;
	double _acceptanceRate;

}

@property (assign,nonatomic) double hysteresis;                        //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) unsigned long long countCap;              //@synthesize countCap=_countCap - In the implementation block
@property (assign,nonatomic) double acceptanceRate;                    //@synthesize acceptanceRate=_acceptanceRate - In the implementation block
+(id)_entityName;
+(id)defaultSignatureDampeningConfiguration;
+(id)nandDefaultConfiguration;
+(id)hangTracerNoDownsamplingConfiguration;
+(id)hangTracerDownsamplingConfiguration;
+(id)sentryMacOSAppLaunchConfiguration;
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHysteresis:(double)arg1 ;
-(double)hysteresis;
-(id)description;
-(unsigned long long)countCap;
-(double)acceptanceRate;
-(id)initWithHysteresis:(double)arg1 cap:(unsigned long long)arg2 acceptanceRate:(double)arg3 ;
-(id)jsonCompatibleDictRepresentation;
-(void)setCountCap:(unsigned long long)arg1 ;
-(void)setAcceptanceRate:(double)arg1 ;
-(BOOL)isEqualToDampeningConfiguration:(id)arg1 ;
-(id)_initWithMO:(id)arg1 ;
-(id)_moRepresentationInContext:(id)arg1 identifier:(id)arg2 ;
@end

