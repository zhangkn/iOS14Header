/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSStringPredicateOperator.h>

@interface NSMatchingPredicateOperator : NSStringPredicateOperator {

	int _contextLock;
	SCD_Struct_NS46* _regexContext;

}
-(id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 ;
-(SEL)selector;
-(BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2 ;
-(id)symbol;
-(BOOL)_shouldEscapeForLike;
-(void)dealloc;
-(void)_clearContext;
@end
