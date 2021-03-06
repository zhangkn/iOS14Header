/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface PLCloudChangeHubClient : NSObject {

	unsigned char _nodeUUID[16];
	NSUUID* _uuid;

}

@property (copy,readonly) NSUUID * uuid;              //@synthesize uuid=_uuid - In the implementation block
-(id)initWithUUID:(id)arg1 ;
-(id)fetchPendingEventsSinceIndex:(unsigned long long)arg1 ;
-(id)resultsFromReply:(id)arg1 sinceIndex:(unsigned long long)arg2 ;
-(id)successfulResultWithEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2 ;
-(id)unsuccesfulResultWithWithType:(long long)arg1 ;
-(id)init;
-(id)fetchResultsSinceIndex:(unsigned long long)arg1 ;
-(NSUUID *)uuid;
@end

