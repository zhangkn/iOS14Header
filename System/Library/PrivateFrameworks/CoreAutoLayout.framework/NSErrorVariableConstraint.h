/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/NSLayoutConstraint.h>

@class NSISVariable;

@interface NSErrorVariableConstraint : NSLayoutConstraint {

	NSISVariable* _errorVariable;
	double _errorValue;

}
-(id)initWithVariable:(id)arg1 value:(double)arg2 ;
-(id)constrainedConstraint;
-(void)dealloc;
-(BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
@end
