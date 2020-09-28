/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSLayoutRect, NSString;

@interface NSLayoutRectRule : NSObject <NSLayoutRule> {

	NSLayoutRect* _firstLayoutRect;
	NSLayoutRect* _secondLayoutRect;
	long long _relation;

}

@property (copy,readonly) NSLayoutRect * firstLayoutRect;               //@synthesize firstLayoutRect=_firstLayoutRect - In the implementation block
@property (copy,readonly) NSLayoutRect * secondLayoutRect;              //@synthesize secondLayoutRect=_secondLayoutRect - In the implementation block
@property (assign) long long relation;                                  //@synthesize relation=_relation - In the implementation block
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(NSLayoutRect *)firstLayoutRect;
-(NSLayoutRect *)secondLayoutRect;
-(void)dealloc;
-(long long)relation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setRelation:(long long)arg1 ;
-(NSString *)description;
@end
