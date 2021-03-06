/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_authentication_protection_space.h>

@protocol OS_nw_endpoint;
@class NSObject, NSString;

@interface NWConcrete_nw_authentication_protection_space : NSObject <OS_nw_authentication_protection_space> {

	NSObject*<OS_nw_endpoint> endpoint;
	unsigned is_proxy : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
@end

