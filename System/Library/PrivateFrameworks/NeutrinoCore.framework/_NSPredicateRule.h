/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NSPredicateRule.h>

@protocol NSObject;
@interface _NSPredicateRule : NSPredicateRule {

	id<NSObject> _fact;
	double _grade;
	BOOL _asserting;

}
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 fact:(id)arg2 grade:(double)arg3 asserting:(BOOL)arg4 ;
@end
