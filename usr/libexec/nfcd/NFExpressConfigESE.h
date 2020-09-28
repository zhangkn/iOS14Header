//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NFExpressConfig.h"

@interface NFExpressConfigESE : NFExpressConfig
{
    _Bool _hasFelicaV2Applet;	// 8 = 0x8
    _Bool factoryTestMode;	// 9 = 0x9
}

@property(nonatomic) _Bool factoryTestMode; // @synthesize factoryTestMode;
- (unsigned int)_updateECP2ExpressModeForAWD:(unsigned int *)arg1;	// IMP=0x000000010001b928
- (_Bool)handleFelicaV2TransactionEndEventForApplet:(id)arg1;	// IMP=0x000000010001b88c
@property(readonly) _Bool hasFelicaV2Applet;
- (void)_updateDriverExpressConfig;	// IMP=0x000000010001b1f4
- (id)removeExpressKeyID:(id)arg1 forAid:(id)arg2 restoreAuthorization:(_Bool)arg3;	// IMP=0x000000010001a9d8
- (id)addExpressKeyID:(id)arg1 forAid:(id)arg2 withType:(unsigned char)arg3 withECPInfo:(id)arg4 authorization:(id)arg5;	// IMP=0x0000000100019d5c
- (id)setFactoryTestConfig;	// IMP=0x00000001000195fc
- (id)updateExpressConfigLimitedTo:(id)arg1 andActivate:(_Bool)arg2 hasChanged:(_Bool *)arg3;	// IMP=0x0000000100018920
- (id)disableExpressForKeys:(id)arg1 onApplet:(id)arg2;	// IMP=0x00000001000184c4
- (id)enableExpressForKey:(id)arg1 onApplet:(id)arg2 enable:(_Bool)arg3 authorization:(id)arg4 uid:(unsigned int)arg5;	// IMP=0x0000000100017ff4
- (id)extractConfigFrom:(id)arg1;	// IMP=0x0000000100017918
- (id)migrateFromDefaults;	// IMP=0x000000010001677c
- (id)fetchFromStorage;	// IMP=0x0000000100016604
- (_Bool)validateExpressConfig:(id)arg1 avoidChangingRouting:(_Bool)arg2;	// IMP=0x0000000100015bfc
- (id)seName;	// IMP=0x0000000100015bf0
- (void)updateStorage;	// IMP=0x0000000100015b84
- (id)getSecureElementWrapper;	// IMP=0x00000001000159fc
- (id)_getAppletForAid:(id)arg1;	// IMP=0x0000000100015608

@end
