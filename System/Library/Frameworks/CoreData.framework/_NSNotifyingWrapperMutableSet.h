/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@class NSManagedObject, NSString, NSMutableSet;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {

	NSManagedObject* _container;
	NSString* _key;
	NSMutableSet* _mutableSet;

}
+(Class)classForKeyedUnarchiver;
-(void)setSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(id)member:(id)arg1 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)removeObject:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)objectEnumerator;
-(id)anyObject;
-(id)allObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(BOOL)isEqualToSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeAllObjects;
-(void)dealloc;
-(id)valueForKeyPath:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)description;
@end
