//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKTetherController : NSObject
{
    int _tetherState;	// 8 = 0x8
    unsigned int _demoCardConnection;	// 12 = 0xc
    int _lastOrientationCode;	// 16 = 0x10
    _Bool _orientationNotificationsDisabled;	// 20 = 0x14
}

+ (id)sharedInstance;	// IMP=0x0000000100049a90
@property(nonatomic, getter=isOrientationNotificationDisabled) _Bool orientationNotificationDisabled; // @synthesize orientationNotificationDisabled=_orientationNotificationsDisabled;
- (void)updatePreferencesIfNeeded;	// IMP=0x00000001000498c8
- (_Bool)_reverseTetheringActive;	// IMP=0x0000000100049618
- (_Bool)_serviceExists:(struct __CFString *)arg1;	// IMP=0x0000000100049384
- (void)setDitheringEnabled:(int)arg1;	// IMP=0x000000010004917c
- (void)noteInterfaceOrientationChangedWithInterfaceOrientation:(int)arg1;	// IMP=0x0000000100048eec
- (void)_handleDemoModeChanged;	// IMP=0x0000000100048d98
- (_Bool)usesDisplayPortTethering;	// IMP=0x0000000100048d58
- (_Bool)isTethered;	// IMP=0x0000000100048bc8
- (void)_setTetherState:(int)arg1;	// IMP=0x0000000100048ae0
- (void)_postDisplayPortNotificationCode:(int)arg1;	// IMP=0x00000001000489e8
- (unsigned int)_demoCardConnection;	// IMP=0x0000000100048754
- (void)dealloc;	// IMP=0x0000000100048708
- (id)init;	// IMP=0x0000000100048618

@end
