/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDCodableTinkerEndToEndCloudSyncRequest;

@interface HDRemoteTinkerEndToEndCloudSyncRequestContext : NSObject {

	HDCodableTinkerEndToEndCloudSyncRequest* _request;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDCodableTinkerEndToEndCloudSyncRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completion;                                                    //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(HDCodableTinkerEndToEndCloudSyncRequest *)request;
-(void)setRequest:(HDCodableTinkerEndToEndCloudSyncRequest *)arg1 ;
@end
