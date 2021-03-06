/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSPredicate;

@interface CPAnalyticsConditional : NSObject {

	NSString* _property;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) NSString * property;                  //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(NSString *)property;
-(id)_validateAndParseConfig:(id)arg1 forKey:(id)arg2 ;
-(NSPredicate *)predicate;
-(id)initWithConfig:(id)arg1 ;
@end

