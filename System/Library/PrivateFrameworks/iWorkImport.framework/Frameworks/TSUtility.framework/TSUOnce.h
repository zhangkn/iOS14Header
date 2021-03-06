/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:41 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUOnce : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _didPerformOnce;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)performBlockOnce:(/*^block*/id)arg1 ;
@end

