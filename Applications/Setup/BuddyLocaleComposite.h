//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BuddyLocaleComposite-Protocol.h"

@class BYLocaleDataSource, NSString;

@interface BuddyLocaleComposite : NSObject <BuddyLocaleComposite>
{
    _Bool _showLocalizedCountryName;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    double _scrollOffset;	// 24 = 0x18
    BYLocaleDataSource *_dataSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000c0c14
@property(nonatomic) _Bool showLocalizedCountryName; // @synthesize showLocalizedCountryName=_showLocalizedCountryName;
@property(retain, nonatomic) BYLocaleDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
