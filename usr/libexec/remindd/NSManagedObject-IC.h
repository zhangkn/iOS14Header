//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (IC)
+ (id)ic_dictionariesMatchingPredicate:(id)arg1 propertiesToFetch:(id)arg2 context:(id)arg3;	// IMP=0x000000010003b96c
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x000000010003b904
+ (id)ic_objectIDsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;	// IMP=0x000000010003b878
+ (id)ic_objectsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x000000010003b810
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 context:(id)arg4;	// IMP=0x000000010003b764
+ (id)ic_objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;	// IMP=0x000000010003b6e0
+ (id)ic_resultsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 resultType:(unsigned long long)arg3 propertiesToFetch:(id)arg4 relationshipKeyPathsForPrefetching:(id)arg5 context:(id)arg6;	// IMP=0x000000010003b2e0
+ (id)ic_permanentObjectIDsFromObjects:(id)arg1;	// IMP=0x000000010003a9b4
+ (id)ic_objectIDsFromObjects:(id)arg1;	// IMP=0x000000010003a834
+ (id)ic_objectsFromObjectIDs:(id)arg1 context:(id)arg2;	// IMP=0x000000010003a7cc
+ (id)ic_objectsFromObjectIDs:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 context:(id)arg3;	// IMP=0x000000010003a5a0
+ (id)ic_objectFromObjectID:(id)arg1 context:(id)arg2;	// IMP=0x000000010003a40c
- (id)ic_postNotificationOnMainThreadAfterSaveWithName:(id)arg1;	// IMP=0x000000010003af40
- (void)ic_postNotificationOnMainThreadWithName:(id)arg1;	// IMP=0x000000010003ad18
- (id)ic_permanentObjectID;	// IMP=0x000000010003ace4
- (_Bool)ic_obtainPermanentObjectIDIfNecessary;	// IMP=0x000000010003ab64
@end

