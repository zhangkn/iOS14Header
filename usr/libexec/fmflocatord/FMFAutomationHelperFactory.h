//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface FMFAutomationHelperFactory : NSObject
{
    _Bool _hasAttemptedLoad;	// 8 = 0x8
    NSBundle *_automationHelperBundle;	// 16 = 0x10
}

+ (id)sharedFactory;	// IMP=0x000000010003182c
- (void).cxx_destruct;	// IMP=0x0000000100031b14
@property(retain, nonatomic) NSBundle *automationHelperBundle; // @synthesize automationHelperBundle=_automationHelperBundle;
@property(nonatomic) _Bool hasAttemptedLoad; // @synthesize hasAttemptedLoad=_hasAttemptedLoad;
- (Class)automationHelperClassWithName:(id)arg1;	// IMP=0x0000000100031898

@end
