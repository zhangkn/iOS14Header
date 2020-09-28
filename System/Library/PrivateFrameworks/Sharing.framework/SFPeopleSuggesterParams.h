/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SFPeopleSuggesterParams : NSObject <NSSecureCoding> {

	unsigned _flags;
	unsigned _maxPeople;
	NSArray* _contactIDs;

}

@property (nonatomic,copy) NSArray * contactIDs;              //@synthesize contactIDs=_contactIDs - In the implementation block
@property (assign,nonatomic) unsigned flags;                  //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) unsigned maxPeople;              //@synthesize maxPeople=_maxPeople - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)setContactIDs:(NSArray *)arg1 ;
-(NSArray *)contactIDs;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMaxPeople:(unsigned)arg1 ;
-(unsigned)maxPeople;
@end
