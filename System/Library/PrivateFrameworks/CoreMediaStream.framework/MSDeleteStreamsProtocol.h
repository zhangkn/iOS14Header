/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreMediaStream/MSStreamsProtocol.h>

@class NSMutableArray;

@interface MSDeleteStreamsProtocol : MSStreamsProtocol {

	MSDSPCContext* _context;
	NSMutableArray* _collectionsInFlight;

}

@property (assign,nonatomic) id<MSDeleteStreamsProtocolDelegate> delegate; 
-(void)abort;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_resetConnectionVariables;
-(void)_coreProtocolDidFinishResponse:(id)arg1 error:(id)arg2 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg1 ;
-(void)sendDeletionRequestForAssetCollections:(id)arg1 ;
@end
