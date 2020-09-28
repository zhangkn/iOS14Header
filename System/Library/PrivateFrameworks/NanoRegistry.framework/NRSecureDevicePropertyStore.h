/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRSecureDevicePropertyStore : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _IDToProperty;
	NSMutableDictionary* _propertyToID;
	NSObject*<OS_dispatch_queue> _dirtyQueue;
	BOOL _dirty;

}

@property (nonatomic,readonly) BOOL dirty;              //@synthesize dirty=_dirty - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)classTypes;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)dirty;
-(id)allSecurePropertyIDs;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)forceImportSecureProperties:(id)arg1 ;
-(void)forceWriteSecurePropertyID:(id)arg1 withValue:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)storeSecureProperty:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)removeSecureProperty:(id)arg1 ;
-(id)securePropertyForID:(id)arg1 ;
-(id)description;
@end
