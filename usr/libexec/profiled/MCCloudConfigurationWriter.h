//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCCloudConfigurationWriter : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000010007e2c4
- (_Bool)saveCloudConfigurationDetails:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010007f3b0
- (_Bool)_validateDetails:(id)arg1 outReasonWhyInvalid:(id *)arg2;	// IMP=0x000000010007e710
- (_Bool)_isCloudConfigurationAvailableInDEP;	// IMP=0x000000010007e4ac
- (_Bool)_isCloudConfigurationActuallyAvailable;	// IMP=0x000000010007e474
- (void)faceTimeSignInAttemptDidFinish;	// IMP=0x000000010007e3b8
- (_Bool)_writeDetails:(id)arg1 toFile:(id)arg2;	// IMP=0x000000010007e36c
- (_Bool)_isActivated;	// IMP=0x000000010007e368
- (_Bool)_activationRecordIndicatesCloudConfigurationIsAvailable;	// IMP=0x000000010007e330

@end

