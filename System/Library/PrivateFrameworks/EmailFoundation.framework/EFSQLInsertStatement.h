/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSQLInsertStatementValue.h>

@class NSString, NSMutableArray, NSMutableOrderedSet;

@interface EFSQLInsertStatement : NSObject <EFSQLInsertStatementValue> {

	NSString* _table;
	unsigned long long _conflictResolution;
	NSMutableArray* _values;
	NSMutableOrderedSet* _requiredColumns;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)addValue;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithTable:(id)arg1 ;
-(id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2 ;
-(void)renderStatementWithNamedBindingsInto:(id)arg1 ;
-(void)enumerateBindingIndicesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEmpty;
-(NSString *)queryString;
@end

