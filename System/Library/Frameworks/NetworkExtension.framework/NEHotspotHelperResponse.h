/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEHotspotHelperResponse : NSObject {

	CNPluginResponseRef _response;

}

@property (assign) CNPluginResponseRef response;              //@synthesize response=_response - In the implementation block
-(void)setNetwork:(id)arg1 ;
-(void)setResponse:(CNPluginResponseRef)arg1 ;
-(id)initWithResponse:(CNPluginResponseRef)arg1 ;
-(void)dealloc;
-(void)deliver;
-(CNPluginResponseRef)response;
-(void)setNetworkList:(id)arg1 ;
-(id)description;
@end

