//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProxCardKit/PRXCardContentViewController.h>

#import "HSProxCardConfigurable-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSArray, NSMutableSet, NSString, UITableView;

@interface HSPCNameServicesViewController : PRXCardContentViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, HSProxCardConfigurable>
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    NSArray *_services;	// 24 = 0x18
    NSArray *_serviceNames;	// 32 = 0x20
    NSMutableSet *_enabledServices;	// 40 = 0x28
    UITableView *_tableView;	// 48 = 0x30
}

+ (id)_givenNameForService:(id)arg1;	// IMP=0x0000000100055954
+ (id)suggestedNamesForServices:(id)arg1;	// IMP=0x000000010005573c
+ (id)enabledServicesSetFromServices:(id)arg1;	// IMP=0x00000001000553cc
+ (id)applicableServicesForAccessory:(id)arg1;	// IMP=0x00000001000551b8
- (void).cxx_destruct;	// IMP=0x0000000100055b2c
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSMutableSet *enabledServices; // @synthesize enabledServices=_enabledServices;
@property(retain) NSArray *serviceNames; // @synthesize serviceNames=_serviceNames;
@property(retain) NSArray *services; // @synthesize services=_services;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (CDUnknownBlockType)serviceComparator;	// IMP=0x0000000100054efc
- (_Bool)isServiceSelectable:(id)arg1;	// IMP=0x0000000100054e78
- (id)serviceForIndexPath:(id)arg1;	// IMP=0x0000000100054de0
- (id)cellReuseIdentifierForService:(id)arg1;	// IMP=0x0000000100054d04
- (id)titleForAccessory;	// IMP=0x0000000100054c50
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100054c44
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000549c0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100054974
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010005496c
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100054848
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100054724
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100054694
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100054604
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000100054474
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000540fc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100053ed4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100053e64
- (id)commitConfiguration;	// IMP=0x0000000100053ab0
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0000000100053638

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

