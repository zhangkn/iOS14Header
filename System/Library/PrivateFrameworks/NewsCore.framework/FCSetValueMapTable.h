/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying> {

	NSMapTable* _backingMapTable;

}

@property (nonatomic,retain) NSMapTable * backingMapTable;              //@synthesize backingMapTable=_backingMapTable - In the implementation block
-(id)_setForKey:(id)arg1 ;
-(id)objectEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)init;
-(NSMapTable *)backingMapTable;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)addObjects:(id)arg1 forKey:(id)arg2 ;
-(void)setBackingMapTable:(NSMapTable *)arg1 ;
-(id)description;
@end

