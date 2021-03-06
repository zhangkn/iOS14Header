/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAEndpointType.h>

@class NSURL, NSString;

@interface AAEndpoint : NSObject <AAEndpointType> {

	 name;
	 sharedContainerIdentifier;

}

@property (readonly,nonatomic) NSURL * url; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * sharedContainerIdentifier; 
-(id)init;
-(id)initWithURL:(id)arg1 name:(id)arg2 sharedContainerIdentifier:(id)arg3 ;
-(NSString *)sharedContainerIdentifier;
-(NSURL *)url;
-(NSString *)name;
@end

