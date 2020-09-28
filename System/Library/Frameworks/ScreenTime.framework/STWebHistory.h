/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSXPCConnection;

@interface STWebHistory : NSObject {

	NSString* _bundleIdentifier;
	NSXPCConnection* _xpcConnection;

}

@property (copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSXPCConnection * xpcConnection;               //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(NSString *)bundleIdentifier;
-(NSXPCConnection *)xpcConnection;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)deleteAllHistory;
-(void)deleteHistoryForURL:(id)arg1 ;
-(void)deleteHistoryDuringInterval:(id)arg1 ;
@end
