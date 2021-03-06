/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:27:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/system/libdispatch.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libdispatch.dylib/OS_dispatch_object.h>
#import <libobjc.A.dylib/OS_dispatch_channel.h>

@protocol OS_dispatch_channel <OS_dispatch_object>
@end


@class NSString;

@interface OS_dispatch_channel : OS_dispatch_object <OS_dispatch_channel>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_xref_dispose;
-(oneway void)release;
-(id)init;
@end

