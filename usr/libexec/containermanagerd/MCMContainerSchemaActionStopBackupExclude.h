//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMContainerSchemaActionBase.h"

#import "MCMContainerSchemaActionHasSinglePath-Protocol.h"

@class NSURL;

@interface MCMContainerSchemaActionStopBackupExclude : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath>
{
    NSURL *_url;	// 8 = 0x8
}

+ (id)actionIdentifier;	// IMP=0x000000010005b21c
- (void).cxx_destruct;	// IMP=0x000000010005b208
- (_Bool)performWithError:(id *)arg1;	// IMP=0x000000010005b0e8
- (_Bool)fixPermissionsWithError:(id *)arg1;	// IMP=0x000000010005b01c
- (id)description;	// IMP=0x000000010005af74
- (id)initWithPathArgument:(id)arg1 context:(id)arg2;	// IMP=0x000000010005aec0

@end

