//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHApplicationServices.h"

@class TPFavoritesController;

@interface MPApplicationServices : PHApplicationServices
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    TPFavoritesController *_favoritesController;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010005405c
- (void).cxx_destruct;	// IMP=0x00000001000544f0
- (struct os_unfair_lock_s)accessorLock;	// IMP=0x00000001000544e0
- (void)setFavoritesController:(id)arg1;	// IMP=0x0000000100054460
@property(readonly, nonatomic) TPFavoritesController *favoritesController; // @synthesize favoritesController=_favoritesController;
- (id)init;	// IMP=0x00000001000540f8

@end
