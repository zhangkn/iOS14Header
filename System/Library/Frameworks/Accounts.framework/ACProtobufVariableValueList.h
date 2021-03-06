/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSSet;

@interface ACProtobufVariableValueList : PBCodable <NSCopying> {

	NSMutableArray* _values;

}

@property (nonatomic,copy) NSArray * array; 
@property (nonatomic,copy) NSSet * set; 
@property (nonatomic,retain) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(void)setSet:(NSSet *)arg1 ;
-(NSSet *)set;
-(id)initWithArray:(id)arg1 ;
-(void)addValue:(id)arg1 ;
-(NSMutableArray *)values;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(unsigned long long)valuesCount;
-(id)initWithSet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)_convertArray:(id)arg1 ;
-(NSArray *)array;
-(void)setArray:(NSArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearValues;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

