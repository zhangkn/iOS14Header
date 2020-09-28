/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <libobjc.A.dylib/NSLayoutRule.h>

@class NSString, NSLayoutAnchor;

@interface NSLayoutAnchorRule : NSObject <NSLayoutRule> {

	NSLayoutAnchor* _firstAnchor;
	NSLayoutAnchor* _secondAnchor;
	long long _relation;
	NSString* _identifier;
	double _constant;
	double _multiplier;
	float _priority;

}

@property (copy,readonly) NSLayoutAnchor * firstAnchor;               //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (copy,readonly) NSLayoutAnchor * secondAnchor;              //@synthesize secondAnchor=_secondAnchor - In the implementation block
@property (readonly) long long relation;                              //@synthesize relation=_relation - In the implementation block
@property (readonly) double constant;                                 //@synthesize constant=_constant - In the implementation block
@property (readonly) double multiplier;                               //@synthesize multiplier=_multiplier - In the implementation block
@property (readonly) float priority;                                  //@synthesize priority=_priority - In the implementation block
@property (copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * ruleDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(double)multiplier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ruleDescription;
-(id)makeChildRules;
-(id)makeLayoutConstraint;
-(void)dealloc;
-(long long)relation;
-(BOOL)isEqual:(id)arg1 ;
-(float)priority;
-(unsigned long long)hash;
-(NSLayoutAnchor *)firstAnchor;
-(double)constant;
-(NSString *)description;
-(NSLayoutAnchor *)secondAnchor;
@end
