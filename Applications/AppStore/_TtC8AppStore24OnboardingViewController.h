//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

@interface _TtC8AppStore24OnboardingViewController : OBWelcomeController
{
    MISSING_TYPE *isArcadeSupported;	// 8 = 0x8
    MISSING_TYPE *primaryButtonCallback;	// 16 = 0x10
    MISSING_TYPE *privacyIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100086f94
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x0000000100086fd0
- (void)didTapContinue;	// IMP=0x0000000100086f18
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewDidLoad;	// IMP=0x0000000100086e70

@end
