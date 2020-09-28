//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface ANCAlert : NSObject <NSCopying>
{
    unsigned char _categoryID;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned char categoryID; // @synthesize categoryID=_categoryID;
- (id)_appIdentifierForTUCallProvider:(id)arg1;	// IMP=0x000000010004391c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100043918
- (_Bool)hasExtraContent;	// IMP=0x0000000100043910
- (_Bool)performNegativeAction;	// IMP=0x0000000100043908
- (_Bool)performPositiveAction;	// IMP=0x0000000100043900
- (id)negativeActionLabel;	// IMP=0x00000001000438f8
- (id)positiveActionLabel;	// IMP=0x00000001000438f0
- (_Bool)hasNegativeAction;	// IMP=0x00000001000438e8
- (_Bool)hasPositiveAction;	// IMP=0x00000001000438e0
- (id)date;	// IMP=0x00000001000438d8
- (id)message;	// IMP=0x00000001000438d0
- (id)subtitle;	// IMP=0x00000001000438c8
- (id)title;	// IMP=0x00000001000438c0
- (id)appIdentifier;	// IMP=0x00000001000438b8
- (_Bool)isImportant;	// IMP=0x00000001000438b0
- (_Bool)isSilent;	// IMP=0x00000001000438a8
- (id)initWithCategoryID:(unsigned char)arg1;	// IMP=0x0000000100043860

@end
