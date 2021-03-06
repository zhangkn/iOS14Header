/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MABaseGraph, NSString;


@protocol MAElement <NSObject>
@property (readonly,nonatomic) MABaseGraph * graph; 
@property (readonly,nonatomic) unsigned identifier; 
@property (readonly,nonatomic) NSString * label; 
@property (readonly,nonatomic) unsigned short domain; 
@property (readonly,nonatomic) float weight; 
@required
-(MABaseGraph *)graph;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1;
-(unsigned)identifier;
-(void)setProperties:(id)arg1;
-(id)objectForKeyedSubscript:(id)arg1;
-(id)objectForKeyedSubscript:(id)arg1;
-(void)removeAllProperties;
-(void)removePropertyForKey:(id)arg1;
-(void)removePropertyForKey:(id)arg1;
-(id)propertyForKey:(id)arg1;
-(id)propertyForKey:(id)arg1;
-(BOOL)hasProperties:(id)arg1;
-(BOOL)hasProperties;
-(unsigned long long)propertiesCount;
-(BOOL)isIdentifiedByProperties:(id)arg1;
-(BOOL)isIdentifiedByProperties:(id)arg1;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(id)setObject:(id)arg1;
-(unsigned short)domain;
-(id)propertyKeys;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2;
-(NSString *)label;
-(float)weight;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
-(id)visualString;

@end

