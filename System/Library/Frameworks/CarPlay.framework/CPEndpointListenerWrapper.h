/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface CPEndpointListenerWrapper : NSObject <BSXPCCoding> {

	NSObject*<OS_xpc_object> _endpoint;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)endpoint;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCEndpoint:(id)arg1 ;
@end
