/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface DKReportingConcurrentRequestGroup : NSObject {

	NSMutableSet* _requests;
	NSMutableDictionary* _requestLookupByGenerator;
	NSMutableSet* _resources;

}

@property (nonatomic,retain) NSMutableSet * resources;                                    //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) NSMutableSet * requests;                                     //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestLookupByGenerator;              //@synthesize requestLookupByGenerator=_requestLookupByGenerator - In the implementation block
-(NSMutableSet *)requests;
-(void)setRequests:(NSMutableSet *)arg1 ;
-(void)setResources:(NSMutableSet *)arg1 ;
-(id)init;
-(NSMutableSet *)resources;
-(NSMutableDictionary *)requestLookupByGenerator;
-(BOOL)addComponentIdentity:(id)arg1 usingGenerator:(id)arg2 ;
-(void)setRequestLookupByGenerator:(NSMutableDictionary *)arg1 ;
@end
