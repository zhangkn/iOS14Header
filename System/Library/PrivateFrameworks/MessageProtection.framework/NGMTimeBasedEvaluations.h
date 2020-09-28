/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject {

	NSDate* _date;

}

@property (retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)debugDescriptionForAction:(unsigned long long)arg1 ;
+(BOOL)prekeyShouldBeRolled:(id)arg1 ;
+(id)nowDate;
+(id)sharedManager;
+(double)timeIntervalAllowedForAction:(unsigned long long)arg1 ;
+(id)oldestDateAllowedToSendTo;
+(BOOL)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2 ;
+(BOOL)prekeyCanBeDeleted:(id)arg1 ;
+(void)setNowDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
@end
