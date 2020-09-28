/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface UIGestureGraphElement : NSObject {

	NSMutableDictionary* _properties;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllProperties;
-(void)removePropertyForKey:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)label;
-(id)description;
@end
