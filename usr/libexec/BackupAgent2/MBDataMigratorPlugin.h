//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBPlugin-Protocol.h"

@interface MBDataMigratorPlugin : NSObject <MBPlugin>
{
}

- (id)_restoreDefaultsWithEngine:(id)arg1;	// IMP=0x0000000100071094
- (id)_updateMobileBackupPreferencesWithEngine:(id)arg1;	// IMP=0x0000000100070a80
- (void)_updateDeviceTransferInfoWithPlist:(id)arg1;	// IMP=0x000000010007086c
- (id)_setDMContextWithEngine:(id)arg1;	// IMP=0x0000000100070380
- (id)endingRestoreWithEngine:(id)arg1;	// IMP=0x000000010007031c
- (id)preparingBackupWithEngine:(id)arg1;	// IMP=0x00000001000702b8

@end

