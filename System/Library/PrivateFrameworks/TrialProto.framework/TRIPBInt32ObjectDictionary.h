/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/TRIPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBInt32ObjectDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {

	TRIPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)initWithObjects:(const id*)arg1 forKeys:(const int*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAll;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isInitialized;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 forKey:(int)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectForKey:(int)arg1 ;
-(id)description;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)setTRIPBGenericValue:(/*function pointer*/void**)arg1 forTRIPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

