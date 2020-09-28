/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate {

	id _ifPropertyIsNullValue;

}

@property (nonatomic,copy,readonly) id ifPropertyIsNullValue;              //@synthesize ifPropertyIsNullValue=_ifPropertyIsNullValue - In the implementation block
-(id)ifPropertyIsNullValue;
-(BOOL)isEqual:(id)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(unsigned long long)hash;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
-(id)initWithProperty:(id)arg1 ifPropertyIsNullValue:(id)arg2 value:(id)arg3 comparisonType:(long long)arg4 ;
-(id)description;
@end
