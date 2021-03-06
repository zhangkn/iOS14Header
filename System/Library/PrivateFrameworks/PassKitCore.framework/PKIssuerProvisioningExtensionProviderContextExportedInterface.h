/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKIssuerProvisioningExtensionProviderContextExportedInterface <NSObject>
@required
-(void)statusWithCompletion:(/*^block*/id)arg1;
-(void)passEntriesWithCompletion:(/*^block*/id)arg1;
-(void)remotePassEntriesWithCompletion:(/*^block*/id)arg1;
-(void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(/*^block*/id)arg6;

@end

