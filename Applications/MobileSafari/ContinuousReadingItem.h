//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, WebBookmark;

@interface ContinuousReadingItem : NSObject
{
    WebBookmark *_readingListBookmark;	// 8 = 0x8
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x0000000100166104
+ (id)itemWithReadingListItem:(id)arg1;	// IMP=0x0000000100165ef4
- (void).cxx_destruct;	// IMP=0x00000001001664f8
@property(retain, nonatomic, setter=_setReadingListBookmark:) WebBookmark *readingListBookmark; // @synthesize readingListBookmark=_readingListBookmark;
- (void)_readingListItemDidUpdate:(id)arg1;	// IMP=0x0000000100166438
- (id)_initWithReadingListItem:(id)arg1;	// IMP=0x0000000100166360
- (id)_siteNameForReadingListItem;	// IMP=0x00000001001662d8
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, retain, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *previewText;
@property(readonly, copy, nonatomic) NSString *title;
- (unsigned long long)hash;	// IMP=0x00000001001660b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100165fbc
- (void)dealloc;	// IMP=0x0000000100165f44

@end

