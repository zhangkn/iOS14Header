//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PKEncryptedDataObject, PKTransactionAuthenticationCollectPasscodeViewController;

@protocol PKTransactionAuthenticationCollectPasscodeViewControllerDelegate <NSObject>
- (void)passcodeViewController:(PKTransactionAuthenticationCollectPasscodeViewController *)arg1 didGenerateEncryptedPasscode:(PKEncryptedDataObject *)arg2;
- (void)passcodeViewControllerDidRequestOpenApplication:(PKTransactionAuthenticationCollectPasscodeViewController *)arg1;
- (void)passcodeViewControllerDidCancel:(PKTransactionAuthenticationCollectPasscodeViewController *)arg1;
@end
