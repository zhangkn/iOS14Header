/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKReportHostRemoteContext.h>
#import <libobjc.A.dylib/DKExtensionHostAdapter.h>

@protocol DKExtensionHostAdapterDelegate;
@class NSString;

@interface DKReportHostContext : NSExtensionContext <DKReportHostRemoteContext, DKExtensionHostAdapter> {

	id<DKExtensionHostAdapterDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)cancelWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<DKExtensionHostAdapterDelegate>)arg1 ;
-(id<DKExtensionHostAdapterDelegate>)delegate;
-(void)completeRemoteWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
