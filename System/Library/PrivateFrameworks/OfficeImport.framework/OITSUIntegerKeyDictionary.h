/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(long long)arg2 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)init;
-(unsigned long long)count;
-(void)removeObjectForKey:(long long)arg1 ;
-(id)objectForKey:(long long)arg1 ;
-(id)description;
-(id)valueEnumerator;
-(CFDictionaryRef)p_cfDictionary;
@end

