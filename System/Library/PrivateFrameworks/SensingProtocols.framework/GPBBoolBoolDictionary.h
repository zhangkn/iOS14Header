/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SensingProtocols/SensingProtocols-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBBoolBoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	BOOL _values[2];
	BOOL _valueSet[2];

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)removeAll;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)init;
-(void)setBool:(BOOL)arg1 forKey:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(id)initWithBools:(const BOOL*)arg1 forKeys:(const BOOL*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndBoolsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)getBool:(BOOL*)arg1 forKey:(BOOL)arg2 ;
-(void)removeBoolForKey:(BOOL)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end
