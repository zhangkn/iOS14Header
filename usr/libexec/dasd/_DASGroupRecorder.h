//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASGroupRecorder : NSObject
{
}

+ (id)predicateForName:(id)arg1;	// IMP=0x000000010001d128
+ (id)predicateForUniqueRecord:(id)arg1;	// IMP=0x000000010001d0b0
- (id)fetchAllGroups:(id)arg1;	// IMP=0x000000010001d638
- (id)fetchGroupsUsingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x000000010001d510
- (id)createOrUpdateGroup:(id)arg1 context:(id)arg2;	// IMP=0x000000010001d338
- (id)createGroup:(id)arg1;	// IMP=0x000000010001d2a8
- (void)copyGroup:(id)arg1 toManagedObject:(id)arg2;	// IMP=0x000000010001d1fc
- (id)getGroupFromManagedObject:(id)arg1;	// IMP=0x000000010001d160
- (id)entityName;	// IMP=0x000000010001d0a4

@end

