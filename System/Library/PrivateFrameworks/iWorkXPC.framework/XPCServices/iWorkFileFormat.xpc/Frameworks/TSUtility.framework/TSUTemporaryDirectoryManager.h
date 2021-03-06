/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:44 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {

	NSURL* _baseDirectoryURL;

}
+(id)sharedManager;
+(id)baseDirectoryURL;
+(id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2 ;
+(Class)managedTemporaryDirectoryClass;
-(id)init;
-(id)newDirectoryWithFilename:(id)arg1 ;
-(id)_readDirectories;
-(void)_clearDirectories:(id)arg1 ;
@end

