/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryRequest, NSOperationQueue;

@interface MPModelLibraryRequestOperation : MPAsyncOperation {

	MPModelLibraryRequest* _request;
	/*^block*/id _responseHandler;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _serialAccessQueue;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialAccessQueue;              //@synthesize serialAccessQueue=_serialAccessQueue - In the implementation block
@property (nonatomic,copy) MPModelLibraryRequest * request;                     //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSOperationQueue *)operationQueue;
-(NSOperationQueue *)serialAccessQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(id)_sectionProperties;
-(id)_libraryView;
-(id)_itemProperties;
-(void)_sanityCheckRequest;
-(MPModelLibraryRequest *)request;
-(void)setRequest:(MPModelLibraryRequest *)arg1 ;
-(void)_executeRequest;
-(void)_executeLegacyRequest;
-(void)setSerialAccessQueue:(NSOperationQueue *)arg1 ;
-(void)execute;
@end
