//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface GKCacheObject : NSManagedObject
{
}

+ (id)attributesDescriptionsForAttributesWithKeys:(id)arg1;	// IMP=0x0000000100041c60
+ (id)uniqueObjectIDLookupWithContext:(id)arg1;	// IMP=0x0000000100041b74
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x0000000100041a94
+ (id)uniqueAttributeName;	// IMP=0x00000001000419b4
+ (void)deleteObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100041734
+ (id)firstObjectMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x00000001000414fc
+ (unsigned long long)countObjectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100041300
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x0000000100041104
+ (id)allObjectsInContext:(id)arg1;	// IMP=0x00000001000410f0
+ (id)fetchSortDescriptors;	// IMP=0x00000001000410e8
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x00000001000410e0
+ (id)fetchRequestForContext:(id)arg1;	// IMP=0x0000000100040f9c
+ (id)entityInManagedObjectContext:(id)arg1;	// IMP=0x0000000100040c78
+ (id)entityName;	// IMP=0x0000000100040ba0
- (void)invalidate;	// IMP=0x00000001000419b0
- (_Bool)isValid;	// IMP=0x00000001000419a8
- (id)initWithManagedObjectContext:(id)arg1;	// IMP=0x0000000100040de8
- (id)internalRepresentation;	// IMP=0x0000000100040b98
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100040a88
- (_Bool)hasImages;	// IMP=0x0000000100042a8c
- (void)clearImages;	// IMP=0x00000001000427e4
- (void)deleteCachedImage:(id)arg1;	// IMP=0x00000001000425fc
- (id)imageURLDictionary;	// IMP=0x0000000100042224
- (id)updateImagesWithImageURLs:(id)arg1;	// IMP=0x0000000100041e7c
- (id)imageCacheKeyPathsByKey;	// IMP=0x0000000100041d28

@end
