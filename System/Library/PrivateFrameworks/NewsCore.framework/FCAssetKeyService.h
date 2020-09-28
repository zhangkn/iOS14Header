/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAssetKeyServiceType.h>

@class NFLazy, NFPromise;

@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType> {

	NFLazy* _session;
	NFLazy* _requestEncoder;
	NFPromise* _endpointURLPromise;

}

@property (nonatomic,readonly) NFLazy * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NFLazy * requestEncoder;                     //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (nonatomic,readonly) NFPromise * endpointURLPromise;              //@synthesize endpointURLPromise=_endpointURLPromise - In the implementation block
-(NFLazy *)requestEncoder;
-(void)fetchWrappingKeysWithIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performHTTPRequestWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NFLazy *)session;
-(id)initWithConfigurationManager:(id)arg1 ;
-(NFPromise *)endpointURLPromise;
@end
