/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class FPXExtensionContext, NSXPCInterface, NSString;

@interface FPXXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {

	FPXExtensionContext* _context;
	NSXPCInterface* _interface;
	id _exportedObject;
	NSString* _serviceName;

}

@property (nonatomic,retain) FPXExtensionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSXPCInterface * interface;                 //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) id exportedObject;                          //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)exportedObject;
-(void)setExportedObject:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCInterface *)interface;
-(void)setInterface:(NSXPCInterface *)arg1 ;
-(void)setContext:(FPXExtensionContext *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(FPXExtensionContext *)context;
-(NSString *)serviceName;
@end

