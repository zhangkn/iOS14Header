/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSArray, NSEnumerator;

@interface EXOSExtensionEnumerator : NSEnumerator {

	NSArray* _extensionPaths;
	NSEnumerator* _extensionPathsEnumerator;

}

@property (readonly) NSArray * extensionPaths;                             //@synthesize extensionPaths=_extensionPaths - In the implementation block
@property (readonly) NSEnumerator * extensionPathsEnumerator;              //@synthesize extensionPathsEnumerator=_extensionPathsEnumerator - In the implementation block
+(void)enumerateExtensionsInDirectoryAtURL:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)nextObject;
-(NSArray *)extensionPaths;
-(id)initWithCacheURLs:(id)arg1 ;
-(NSEnumerator *)extensionPathsEnumerator;
@end

