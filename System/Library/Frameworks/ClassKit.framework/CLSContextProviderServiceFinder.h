/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSContextProviderServiceFinderDelegate, OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray, NSArray;

@interface CLSContextProviderServiceFinder : NSObject {

	id<CLSContextProviderServiceFinderDelegate> _delegate;
	id _extensionsFinderContext;
	NSObject*<OS_dispatch_queue> _servicesQueue;
	NSDictionary* _extensionAttributes;
	NSMutableArray* _mutableAvailableServices;

}

@property (nonatomic,copy,readonly) NSArray * availableServices; 
-(void)start;
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
-(void)stop;
-(NSArray *)availableServices;
@end
