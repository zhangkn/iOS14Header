/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMDMRAVEndpoint : HMFObject {

	void* _mravEndpoint;

}

@property (nonatomic,readonly) void* mravEndpoint;              //@synthesize mravEndpoint=_mravEndpoint - In the implementation block
-(id)attributeDescriptions;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMRAVEndpoint:(void*)arg1 ;
-(unsigned long long)hash;
-(void*)mravEndpoint;
@end
