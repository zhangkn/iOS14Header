/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDCodableStartWorkoutAppRequest;

@interface HDRemoteStartWorkoutAppRequestContext : NSObject {

	HDCodableStartWorkoutAppRequest* _request;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDCodableStartWorkoutAppRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completion;                                            //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(HDCodableStartWorkoutAppRequest *)request;
-(void)setRequest:(HDCodableStartWorkoutAppRequest *)arg1 ;
@end
