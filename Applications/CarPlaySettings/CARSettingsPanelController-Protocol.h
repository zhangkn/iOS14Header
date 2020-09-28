//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARSettingsVehicleDelegate-Protocol.h"

@class CARSession, CARSettingsPanel, CRSUIWallpaperPreferences, CRVehicle;
@protocol CARSessionObserving;

@protocol CARSettingsPanelController <CARSettingsVehicleDelegate>
@property(readonly, nonatomic) CRVehicle *vehicle;
@property(readonly, nonatomic) CARSession *carSession;
@property(readonly, nonatomic) CRSUIWallpaperPreferences *wallpaperPreferences;
- (void)removeObserver:(id <CARSessionObserving>)arg1;
- (void)addObserver:(id <CARSessionObserving>)arg1;
- (void)deregisterPanel:(CARSettingsPanel *)arg1;
- (void)registerPanel:(CARSettingsPanel *)arg1;
- (void)dismissPanel:(CARSettingsPanel *)arg1 completion:(void (^)(void))arg2;
- (void)dismissPanel:(CARSettingsPanel *)arg1;
- (void)presentPanel:(CARSettingsPanel *)arg1;
- (void)popToRootPanel;
- (void)popPanel;
- (void)popIfPanel:(CARSettingsPanel *)arg1;
- (void)pushPanel:(CARSettingsPanel *)arg1;
@end
