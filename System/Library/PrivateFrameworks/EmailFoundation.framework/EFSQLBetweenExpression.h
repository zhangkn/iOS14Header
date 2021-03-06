/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EFPair.h>
#import <libobjc.A.dylib/EFSQLBitExpressable.h>
#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLBetweenExpression : EFPair <EFSQLBitExpressable, EFSQLValueExpressable> {

	BOOL _between;
	id<EFSQLExpressable> _left;

}

@property (nonatomic,readonly) id<EFSQLExpressable> left;                     //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) BOOL between;                                  //@synthesize between=_between - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(void)setColumnExpression:(id)arg1 ;
-(NSString *)ef_SQLExpression;
-(id)ef_SQLIsolatedExpression;
-(id<EFSQLExpressable>)left;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(id)initWithLeft:(id)arg1 firstValue:(id)arg2 secondValue:(id)arg3 between:(BOOL)arg4 ;
-(BOOL)between;
@end

