//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BuddyChoiceController.h"

@class NSError;

@interface BuddyMigrationBaseErrorController : BuddyChoiceController
{
    NSError *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100041bac
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)loadView;	// IMP=0x0000000100041a64
- (id)initForInsufficientSpace;	// IMP=0x00000001000419d8
- (id)initWithError:(id)arg1;	// IMP=0x0000000100041958

@end
