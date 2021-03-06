/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DOCRemoteContextInterface.h>

@interface DOCRemoteContext : NSExtensionContext <DOCRemoteContextInterface>
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)updateAppearance:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateAppearance:(id)arg1 shouldFlushCA:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateEditingTo:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

