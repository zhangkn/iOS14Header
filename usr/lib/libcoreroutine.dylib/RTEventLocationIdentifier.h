/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTEventLocationIdentifier : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _source;
	NSString* _calendarIdentifier;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(long long)levenshteinDistanceToIdentifier:(id)arg1 ;
-(id)initWithEvent:(id)arg1 source:(unsigned long long)arg2 useCalendarIdentifier:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)source;
-(unsigned long long)hash;
-(BOOL)isSuitableForFuzzyMatch;
-(NSString *)name;
-(NSString *)calendarIdentifier;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(id)normalize;
-(id)description;
-(id)initWithName:(id)arg1 source:(unsigned long long)arg2 calendarIdentifier:(id)arg3 ;
@end

