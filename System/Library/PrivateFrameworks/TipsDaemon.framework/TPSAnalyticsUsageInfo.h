/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSPredicate, NSString;

@interface TPSAnalyticsUsageInfo : NSObject {

	NSDate* _firstShownDate;
	NSPredicate* _usagePredicate;
	NSString* _usageStream;
	NSString* _identifier;
	unsigned long long _desiredOutcomeCount;

}

@property (nonatomic,retain) NSDate * firstShownDate;                             //@synthesize firstShownDate=_firstShownDate - In the implementation block
@property (nonatomic,retain) NSPredicate * usagePredicate;                        //@synthesize usagePredicate=_usagePredicate - In the implementation block
@property (nonatomic,copy) NSString * usageStream;                                //@synthesize usageStream=_usageStream - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long desiredOutcomeCount;              //@synthesize desiredOutcomeCount=_desiredOutcomeCount - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)firstShownDate;
-(unsigned long long)desiredOutcomeCount;
-(void)setFirstShownDate:(NSDate *)arg1 ;
-(void)setUsagePredicate:(NSPredicate *)arg1 ;
-(void)setUsageStream:(NSString *)arg1 ;
-(void)setDesiredOutcomeCount:(unsigned long long)arg1 ;
-(NSPredicate *)usagePredicate;
-(NSString *)usageStream;
@end
