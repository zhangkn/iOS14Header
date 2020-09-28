//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMContainerSchemaActionBase.h"

#import "MCMContainerSchemaActionHasSourceAndDestination-Protocol.h"

@class NSURL;

@interface MCMContainerSchemaActionMoveContents : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination>
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destURL;	// 16 = 0x10
}

+ (id)actionIdentifier;	// IMP=0x00000001000491dc
- (void).cxx_destruct;	// IMP=0x000000010004919c
- (_Bool)performWithError:(id *)arg1;	// IMP=0x0000000100048b28
- (_Bool)fixPermissionsWithError:(id *)arg1;	// IMP=0x0000000100048748
- (id)description;	// IMP=0x0000000100048674
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 context:(id)arg3;	// IMP=0x0000000100048568

@end
