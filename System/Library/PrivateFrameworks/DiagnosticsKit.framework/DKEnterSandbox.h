/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DKEnterSandbox : NSObject
+(id)_bundleId;
+(id)_processName;
+(char*)_getHomeDirectory;
+(char*)_getTempDirectory;
+(char*)_getCacheDirectory;
+(char*)_getMainBundle;
+(BOOL)defaultSandboxWithHelperAppPath:(const char*)arg1 ;
+(BOOL)sandboxWithSeatbeltAbsolutePath:(const char*)arg1 helperAppPath:(const char*)arg2 ;
@end

